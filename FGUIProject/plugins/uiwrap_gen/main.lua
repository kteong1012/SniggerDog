local CodeGenEntry = {}

---@type HotfixCodeGenHandler
CodeGenEntry.HotfixCodeGenHandler = require(PluginPath .. '/HotfixCodeGenHandler')
---@type CodeGenConfig
CodeGenEntry.CodeGenConfig = require(PluginPath .. "/CodeGenConfig")

--- 点击发布工程时的回调
---@param handler CS.FairyEditor.PublishHandler 发布处理者
function onPublish(handler)
    CodeGenEntry.HotfixCodeGenHandler.Do(handler, CodeGenEntry.CodeGenConfig)
end

return CodeGenEntry