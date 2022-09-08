/** This is an automatically generated class by FairyGUI. Please do not modify it. **/

using FairyGUI;
namespace PostMainland
{
    [FGUIWrapper("UILoginPanel","UILoginPanel","ui://wotugxqgkm5b0")]
    public partial class UILoginPanel : UIWrapper
    {
    	public GButton btnLogin;
    	public AsyncGButton btnLoginAsync;
    	public GTextInput inputAccount;
    	public GTextInput inputPassword;
    	public GTextField txtTips;

        public override void Bind(GComponent com, int sortingOrder)
        {
            if(com != null)
            {
                Root = com;
                com.sortingOrder = sortingOrder;
                    
    			btnLogin = (GButton)com.GetChildAt(1);
    			btnLogin.SetOnClick(()=>OnClickBtnLogin());
    			btnLoginAsync = new AsyncGButton(btnLogin);
    			inputAccount = (GTextInput)com.GetChildAt(5);
    			inputPassword = (GTextInput)com.GetChildAt(6);
    			txtTips = (GTextField)com.GetChildAt(7);
    		}
    		Initialize();
    	}
    	partial void OnClickBtnLogin();
    }
}