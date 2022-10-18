using System;

namespace PostMainland
{
    public class TimeInfo : IDisposable
    {
        private static TimeInfo _instance = new TimeInfo();
        public static TimeInfo Instance => _instance;

        private int _timeZone;
        
        public int TimeZone
        {
            get
            {
                return this._timeZone;
            }
            set
            {
                this._timeZone = value;
                _dt = _dt1970.AddHours(TimeZone);
            }
        }

        private readonly DateTime _dt1970 = new DateTime(1970, 1, 1, 0, 0, 0, DateTimeKind.Utc);
        private DateTime _dt = new DateTime(1970, 1, 1, 0, 0, 0, DateTimeKind.Utc);

        public long ServerMinusClientTime { private get; set; }

        public long frameTime;
        public long lastFrameTime;
        public long DeltaTimeMS => frameTime - lastFrameTime;

        private TimeInfo()
        {
            this.frameTime = this.ClientNow();
            this.lastFrameTime = frameTime;
        }

        public void Update()
        {
            this.lastFrameTime = frameTime;
            this.frameTime = this.ClientNow();
        }

        /// <summary> 
        /// 根据时间戳获取时间 
        /// </summary>  
        public DateTime ToDateTime(long timeStamp)
        {
            return _dt.AddTicks(timeStamp * 10000);
        }

        // 线程安全
        public long ClientNow()
        {
            return (DateTime.UtcNow.Ticks - this._dt1970.Ticks) / 10000;
        }

        public long ServerNow()
        {
            return ClientNow() + Instance.ServerMinusClientTime;
        }

        public long ClientFrameTime()
        {
            return this.frameTime;
        }

        public long ServerFrameTime()
        {
            return this.frameTime + Instance.ServerMinusClientTime;
        }

        public long Transition(DateTime d)
        {
            return (d.Ticks - _dt.Ticks) / 10000;
        }

        public void Dispose()
        {
            _instance = null;
        }
    }
}