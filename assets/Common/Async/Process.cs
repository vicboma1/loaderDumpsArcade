using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Text;
using System.Threading;
using System.Threading.Tasks;

namespace Common.Async
{
    public class Process
    {
        public static Thread AsyncThread(String file)
            => AsyncThread(file, String.Empty,Thread.CurrentThread.Name + file, ThreadPriority.Normal);

        public static Thread AsyncThread(String file, String command)
           => AsyncThread(file, command, Thread.CurrentThread.Name + file, ThreadPriority.Normal);
        
        public static Thread AsyncThread(String file, String command, String threaName, ThreadPriority priority)
        {
            var t = new Thread(() =>
            {
                var process = new System.Diagnostics.Process()
                {
                    StartInfo = new ProcessStartInfo()
                    {
                        FileName = file,
                        UseShellExecute = false,
                        Arguments = command,
                        WindowStyle = System.Diagnostics.ProcessWindowStyle.Hidden,
                        CreateNoWindow = true
                    },
                    EnableRaisingEvents = true
                };

                process.Exited += (sender, _args) =>
                {
                    if (null == process)
                        return;

                    process.Close();
                };
                process.Start();
            })
            {
                IsBackground = true,
                Name = threaName,
                Priority = priority
            };

            t.Start();
            return t;
        }
        
        public static Task<int> Async(String file, String command, String _args)
        {
            var tcs = new TaskCompletionSource<int>();

            var process = new System.Diagnostics.Process()
            {
                StartInfo = new ProcessStartInfo()
                {
                    FileName = file +" c/ "+command,
                    Arguments = _args,
                    UseShellExecute = false,
                    CreateNoWindow = true
                },
                EnableRaisingEvents = true
            };

            process.Exited += (sender, args) => {
                if (null == process)
                    return;

                tcs.SetResult(process.ExitCode);
                process.Dispose();

            };

            process.Start();
            return tcs.Task;
        }
    }
}
