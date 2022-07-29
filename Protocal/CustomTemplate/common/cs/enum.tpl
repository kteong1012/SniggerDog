{{~
    name = x.name
    namespace_with_top_module = x.namespace_with_top_module
    comment = x.comment
    items = x.items
    base = 'IMessage'

~}}
    {{~if has_tag x 'req'~}}
        {{base = 'IRequest'}}
    {{~else if has_tag x 'res'~}}
        {{base = 'IResponse'}}
    {{~end~}}
namespace {{namespace_with_top_module}}
{
{{~if comment != '' ~}}
    /// <summary>
    /// {{comment | html.escape}}
    /// </summary>
{{~end~}}
    [Protocal({{x.id}})]
    [NinoSerialize]
    public class {{name}} : {{base}}
    {
        {{~ for item in items ~}}
{{~if item.comment != '' ~}}
        /// <summary>
        /// {{item.escape_comment}}
        /// </summary>
{{~end~}}
{{~ for tag in item.tags~}}
{{~if for.first~}}
{{t = tag.value}}
{{~end}}
{{~end~}}
        []
        public {{t}} {{item.name}};
        {{~end~}}
    }
}
