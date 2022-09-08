using System.Text;

namespace PostMainland
{

    public static class StringUtils
    {
        public static StringBuilder AsXStringBuilder(this string str)
        {
            return new StringBuilder(str);
        }
        public static string ToIPAddress(string host, int port)
        {
            return string.Join(":", host, port);
        }
        public static string ToIPAddress(string host, string port)
        {
            return string.Join(":", host, port);
        }
        public static string UpperCaseFirstChar(this string s)
        {
            return char.ToUpper(s[0]) + s.Substring(1);
        }
    }
}
