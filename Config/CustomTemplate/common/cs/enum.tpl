{{~
    name = x.name
    namespace_with_top_module = x.namespace_with_top_module
    comment = x.comment
    items = x.items
~}}

namespace {{namespace_with_top_module}}
{
{{~if comment != '' ~}}
    /// <summary>
    /// {{comment | html.escape}}
    /// </summary>
{{~end~}}
    {{~if x.is_flags~}}
    [System.Flags]
    {{~end~}}
    public enum {{name}}
    {
        {{~ for item in items ~}}
{{~if item.comment != '' ~}}
        /// <summary>
        /// {{item.escape_comment}}
        /// </summary>
{{~end~}}
{{~if has_tag x 'numeric'}}
    {{a='';b='';c='Permillage';d='false'}}
    {{~if has_tag item 'str'}}{{a=get_tag item 'str'}}{{~end~}}
    {{~if has_tag item 'desc'}}{{b=get_tag item 'desc'}}{{~end~}}
    {{~if has_tag item 'type'}}{{c=get_tag item 'type'}}{{~end~}}
    {{~if has_tag item 'coe'}}{{d=get_tag item 'coe'}}{{~end~}}
        [PostMainland.Numeric("{{a}}","{{b}}",TypeOfValue.{{c}},{{d}})]
{{~end~}}
        {{item.name}} = {{item.value}},
        {{~end~}}
    }
}
