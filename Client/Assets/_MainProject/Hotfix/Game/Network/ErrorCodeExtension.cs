using Cfg;

namespace PostMainland
{
    public static class ErrorCodeExtension
    {
        public static ErrorCode ToErrorCode(this int i)
        {
            return (ErrorCode)i;
        }
        public static int ToInt(this ErrorCode errorCode)
        {
            return (int)errorCode;
        }
        public static bool Success(this int i, out ErrorCode errorCode)
        {
            errorCode = i.ToErrorCode();
            return errorCode == ErrorCode.Success;
        }
        public static bool Success(this IResponse response , out ErrorCode errorCode)
        {
            errorCode = response.GetErrorCode();
            return errorCode == ErrorCode.Success;
        }
        public static void SetErrorCode(this IResponse response, ErrorCode errorCode)
        {
            response.Error = errorCode.ToInt();
        }
        public static ErrorCode GetErrorCode(this IResponse response)
        {
            return response.Error.ToErrorCode();
        }
    }
}
