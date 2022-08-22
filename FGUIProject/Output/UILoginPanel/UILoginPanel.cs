/** This is an automatically generated class by FairyGUI. Please do not modify it. **/

using FairyGUI;
using FairyGUI.Utils;

namespace UILoginPanel
{
    public partial class UILoginPanel : GComponent
    {
        public GTextField txtAccount;
        public GButton btnLogin;
        public GComponent coo;
        public const string URL = "ui://wotugxqgkm5b0";

        public static UILoginPanel CreateInstance()
        {
            return (UILoginPanel)UIPackage.CreateObject("UILoginPanel", "UILoginPanel");
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