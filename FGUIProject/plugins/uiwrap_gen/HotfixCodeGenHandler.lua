---@class HotfixCodeGenHandler 热更层代码生成器
local HotfixCodeGenHandler = {}

--- 执行生成热更层代码
---@param handler CS.FairyEditor.PublishHandler
---@param codeGenConfig CodeGenConfig
function HotfixCodeGenHandler.Do(handler, codeGenConfig)
    
    local codePkgName = handler:ToFilename(handler.pkg.name); --convert chinese to pinyin, remove special chars etc.

    --- 从自定义配置中读取路径和命名空间
    local exportCodePath = handler.exportCodePath .. '/' .. codePkgName
    local namespaceName = codeGenConfig.HotfixNameSpace

    --- 初始化自定义组件名前缀
    local classNamePrefix = codeGenConfig.ClassNamePrefix
    --- 初始化自定义成员变量名前缀
    local memberVarNamePrefix = codeGenConfig.MemerVarNamePrefix
    
    --- 从FGUI编辑器中读取配置
    ---@type CS.FairyEditor.GlobalPublishSettings.CodeGenerationConfig
    local settings = handler.project:GetSettings("Publish").codeGeneration

    --- 所有将要导出的类（当前包的所有设置为导出的组件，以及当前包所有被引用的组件）
    ---@type CS.FairyEditor.PublishHandler.ClassInfo[]
    local classes = handler:CollectClasses(codeGenConfig.CodeStrip, codeGenConfig.CodeStrip, nil)
    handler:SetupCodeFolder(exportCodePath, "cs") --check if target folder exists, and delete old files

    local classCnt = classes.Count
    local writer = CodeWriter.new()
    
    for i = 0, classCnt - 1 do
        local classInfo = classes[i]
        if classInfo.res.exported then
            local members = classInfo.members
            writer:reset()
            writer:writeln('using FairyGUI;')
            writer:writeln('namespace %s', namespaceName)
            writer:startBlock()

            --- 组装自定义组件前缀
            local className = classNamePrefix .. classInfo.className

            writer:writeln('[FGUIWrapper("%s","%s","%s")]',codePkgName,classInfo.res.name,classInfo.res:GetURL())
            writer:writeln([[public partial class %s : UIWrapper
    {]], className)

            local memberCnt = members.Count

            -- 是否为自定义类型组件标记数组
            local customComponentFlagsArray = {}
            -- 是否为跨包组件标记数组
            local crossPackageFlagsArray = {}

            for j = 0, memberCnt - 1
            do
                local memberInfo = members[j]
                customComponentFlagsArray[j] = false
                crossPackageFlagsArray[j] = false

                -- 判断是不是我们自定义类型组件
                local typeName = memberInfo.type
                for k = 0, classCnt - 1
                do
                    if typeName == "GComponent" and typeName == classes[k].className
                    then
                        typeName = classNamePrefix .. classes[k].className
                        customComponentFlagsArray[j] = true
                        break
                    end
                end
                -- 判断是不是跨包类型组件
                if typeName == "GComponent" and memberInfo.res ~= nil then
                    if memberInfo.res.owner.name ~= 'AACommon' then
                        CS.FairyEditor.App.consoleView:LogError("错误!!!!!!!!!!"..className..'/'..memberInfo.varName..'是跨包类型，并且不在AACommon')
                        return
                    end
                    --- 组装自定义组件前缀
                    typeName = classNamePrefix .. memberInfo.res.name
                    crossPackageFlagsArray[j] = true
                end
                --- 组装自定义成员前缀
                writer:writeln('\tpublic %s %s;', typeName, memberVarNamePrefix .. memberInfo.varName)
                if typeName == 'GButton' then
                    writer:writeln('\tpublic AsyncGButton %sAsync;', memberVarNamePrefix .. memberInfo.varName)
                end
            end

            
            writer:writeln()
            writer:writeln([[
    public override void Bind(GComponent com, int sortingOrder)
        {
            if(com != null)
            {
                Root = com;
                com.sortingOrder = sortingOrder;
                    ]], classInfo.superClassName)

            for j = 0, memberCnt - 1
            do
                local memberInfo = members[j]
                --- 组装自定义成员前缀
                local memberVarName = memberVarNamePrefix .. memberInfo.varName
                if memberInfo.group == 0
                then
                    if customComponentFlagsArray[j]
                    then
                        --- 组装自定义组件前缀
                        local typeName = classNamePrefix .. memberInfo.type
                        local index = memberInfo.index
                        writer:writeln('\t\t\t%s = FGUI.Instance.GetWrapper<%s>(com.GetChildAt(%s).asCom,nameof(%s),sortingOrder);', memberVarName, typeName,index,memberVarName)
                    elseif crossPackageFlagsArray[j]
                    then
                        --- 组装自定义组件前缀
                        local typeName = classNamePrefix .. memberInfo.res.name
                        local index = memberInfo.index
                        writer:writeln('\t\t\t%s = FGUI.Instance.GetWrapper<%s>(com.GetChildAt(%s).asCom,nameof(%s),sortingOrder);', memberVarName, typeName,index,memberVarName)
                    else
                        local typeName = memberInfo.type
                        writer:writeln('\t\t\t%s = (%s)com.GetChildAt(%s);', memberVarName, typeName, memberInfo.index)
                        if typeName == 'GButton' then
                            writer:writeln('\t\t\t%sAsync = new AsyncGButton(%s);', memberVarName,memberVarName)
                        end
                    end
                elseif memberInfo.group == 1
                then
                    writer:writeln('\t\t\t%s = com.GetControllerAt(%s);', memberVarName, memberInfo.index)
                    
                else
                    writer:writeln('\t\t\t%s = com.GetTransitionAt(%s);', memberVarName, memberInfo.index)
                end
            end
            writer:writeln('\t\t}')
            writer:writeln('\t\tInitialize();')
            writer:writeln('\t}')
            writer:writeln('}')
            writer:endBlock()

            local path = exportCodePath .. '/'.. className.. '.cs'
            writer:save(path)
            fprint('生成成功:'..path)
        end
    end

end

return HotfixCodeGenHandler