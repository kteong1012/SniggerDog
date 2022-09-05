using System.Text;

namespace PostMainland
{
    public class XStringBuilder
    {
        private StringBuilder _sb;

        public XStringBuilder()
        {
            _sb = new StringBuilder();
        }
        public XStringBuilder(string str)
        {
            _sb = new StringBuilder(str);
        }

        // 加号不换行
        public static XStringBuilder operator +(XStringBuilder xsb, string str)
        {
            if (xsb == null)
            {
                xsb = new XStringBuilder();
            }
            xsb._sb.Append(str);
            return xsb;
        }
        // 乘号换行
        public static XStringBuilder operator *(XStringBuilder xsb, string str)
        {
            if (xsb == null)
            {
                xsb = new XStringBuilder();
            }
            xsb._sb.AppendLine(str);
            return xsb;
        }
        public int Length => _sb.Length;
        public string Text => ToString();
        public void Clear()
        {
            _sb.Clear();
        }
        public override string ToString()
        {
            return _sb.ToString();
        }
    }
}
