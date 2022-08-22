/** This is an automatically generated class by FairyGUI. Please do not modify it. **/

using FairyGUI;
using FairyGUI.Utils;

namespace UILoginPanel
{
    public partial class UILoginPanelasdfasd : GComponent
    {
        public GTextField txtAccount;
        public GButton btnLogin;
        public GComponent coo;
        public const string URL = "ui://wotugxqgkm5b1";

        public static UILoginPanelasdfasd CreateInstance()
        {
            return (UILoginPanelasdfasd)UIPackage.CreateObject("UILoginPanel", "UILoginPanelasdfasd");
        }

        public override void ConstructFromXML(XML xml)
        {
            base.ConstructFromXML(xml);

            txtAccount = (GTextField)GetChildAt(0);
            btnLogin = (GButton)GetChildAt(2);
            coo = (GComponent)GetChildAt(3);
        }
    }
}