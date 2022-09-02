using CommandLine;
using System.Diagnostics;
using System.IO;

namespace PostMainland
{
    public class ProcessLauncher
    {
        private readonly ProcessLauncherOptions _options;
        private Process _process;
        public ProcessLauncher(ProcessLauncherOptions options)
        {
            _options = options;
        }

        public void Launch()
        {
            if (_process != null)
            {
                _process.Close();
            }
            _process = new Process();
            _process.StartInfo.FileName = "dotnet";
            _process.StartInfo.WorkingDirectory = ".";
            _process.StartInfo.Arguments = _options.ToString();
            _process.StartInfo.CreateNoWindow = false;
            _process.Start();
        }
        public void CheckAlive()
        {
            if(_process == null || _process.HasExited)
            {
                Launch();
            }
        }

        public void Close()
        {
            if (_process != null)
            {
                _process.Kill();
                _process.Close();
            }
        }
    }
}