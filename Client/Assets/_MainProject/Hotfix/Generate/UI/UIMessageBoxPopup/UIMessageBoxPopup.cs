/** This is an automatically generated class by FairyGUI. Please do not modify it. **/

using FairyGUI;
namespace PostMainland
{
    [FGUIWrapper("UIMessageBoxPopup","UIMessageBoxPopup","ui://qhlqzoiqlveb0")]
    public partial class UIMessageBoxPopup : UIWrapper
    {
    	public Controller mode;
    	public GTextField txtTitle;
    	public GLabel txtContent;
    	public GButton btnConfirm;
    	public AsyncGButton btnConfirmAsync;
    	public GButton btnCancel;
    	public AsyncGButton btnCancelAsync;

        public override void Bind(GComponent com, int sortingOrder)
        {
            if(com != null)
            {
                Root = com;
                com.sortingOrder = sortingOrder;
                    
    			mode = com.GetControllerAt(0);
    			txtTitle = (GTextField)com.GetChildAt(2);
    			txtContent = (GLabel)com.GetChildAt(3);
    			btnConfirm = (GButton)com.GetChildAt(4);
    			btnConfirm.SetOnClick(()=>OnClickBtnConfirm());
    			btnConfirmAsync = new AsyncGButton(btnConfirm);
    			btnCancel = (GButton)com.GetChildAt(5);
    			btnCancel.SetOnClick(()=>OnClickBtnCancel());
    			btnCancelAsync = new AsyncGButton(btnCancel);
    		}
    		Initialize();
    	}
    	partial void OnClickBtnConfirm();
    	partial void OnClickBtnCancel();
    }
}