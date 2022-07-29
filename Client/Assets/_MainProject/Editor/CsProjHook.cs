// using UnityEditor;
// using System.Xml;
// using System.IO;
// using System.Xml.Linq;
// using System.Linq;
// using System.Collections.Generic;

// namespace PostMainland
// {
//     public class CsprojHook : AssetPostprocessor
//     {
//         public static string OnGeneratedCSProject(string path, string content)
//         {

//             if (path.EndsWith("Nino.Shared.csproj"))
//             {
//                 return RemoveReference(path, "System.Memory");
//             }

//             return content;
//         }

//         private static string RemoveReference(string path, string reference)
//         {
//             XDocument doc = new XDocument();
//             XDocument.Load(path);

//             XElement project = doc.Elements().First(e => e.Name.LocalName == "Project");
//             var itemGroups = project.Elements().Where(e => e.Name.LocalName == "ItemGroup");
//             List<XElement> delReference = new List<XElement>();
//             foreach (XElement itemGroup in itemGroups)
//             {
//                 foreach (var element in itemGroup.Elements())
//                 {
//                     if (element.Name.LocalName == "Reference")
//                     {
//                         if (element.Attribute("Include").Name == "System.Memory")
//                         {
//                             delReference.Add(element);
//                         }
//                     }
//                 }
//             }
//             foreach (XElement item in delReference)
//             {
//                 item.Remove();
//             }

//             using (StringWriter sw = new StringWriter())
//             {
//                 using (XmlTextWriter tx = new XmlTextWriter(sw))
//                 {
//                     tx.Formatting = Formatting.Indented;
//                     doc.WriteTo(tx);
//                     tx.Flush();
//                     return sw.GetStringBuilder().ToString();
//                 }
//             }
//         }
//     }
// }