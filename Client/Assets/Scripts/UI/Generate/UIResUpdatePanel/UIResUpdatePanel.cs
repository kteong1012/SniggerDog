/** This is an automatically generated class by FairyGUI. Please do not modify it. **/

using FairyGUI;
namespace PostMainland
{
    [FGUIWrapper("UIResUpdatePanel","UIResUpdatePanel","ui://qsw3ypu9lveb0")]
    public partial class UIResUpdatePanel : UIWrapper
    {
    	public GLoader loaderBg;
    	public GProgressBar progressBar;
    	public GTextField txtTask;
    	public GTextField txtProgress;

        public override void Bind(GComponent com, int sortingOrder)
        {
            if(com != null)
            {
                Root = com;
                com.sortingOrder = sortingOrder;
                    
    			loaderBg = (GLoader)com.GetChildAt(0);
    			progressBar = (GProgressBar)com.GetChildAt(1);
    			txtTask = (GTextField)com.GetChildAt(2);
    			txtProgress = (GTextField)com.GetChildAt(3);
    		}
    		Initialize();
    	}
    }
}