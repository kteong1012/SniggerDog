using System.Collections.Generic;

namespace PostMainland
{
    public class Db_Account : DataBaseObject
    {
        public string Account { get; set; }
        public string Password { get; set; }
        public int Status { get; set; }
        public List<Db_AccountLog> Logs { get; set; }
        public int SectionId { get; set; }
    }
    public class Db_AccountLog : DataBaseObject
    {
    }
}
