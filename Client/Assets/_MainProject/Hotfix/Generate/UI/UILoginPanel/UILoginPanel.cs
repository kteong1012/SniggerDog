/** This is an automatically generated class by FairyGUI. Please do not modify it. **/

using FairyGUI;
namespace PostMainland
{
    [FGUIWrapper("UILoginPanel","UILoginPanel","ui://wotugxqgkm5b0")]
    public partial class UILoginPanel : UIWrapper
    {
    	public GTextField txtAccount;
    	public GButton btnLogin;
    	public AsyncGButton btnLoginAsync;

        public override void Bind(GComponent com, int sortingOrder)
        {
            if(com != null)
            {
                Root = com;
                com.sortingOrder = sortingOrder;
                    
    			txtAccount = (GTextField)com.GetChildAt(0);
    			btnLogin = (GButton)com.GetChildAt(1);
    			btnLoginAsync = new AsyncGButton(btnLogin);
    		}
    		Initialize();

            TreeNode node;
    	}
    }
}