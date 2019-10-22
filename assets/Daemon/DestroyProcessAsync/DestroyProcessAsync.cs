using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace DestroProcessAsync
{
    class Program
    {
        private string PROCESS_WIN_NAME = "Loader";
        private static readonly Process _p;

        static void Main(string[] args)
        {
		if (null == args || args.Length > 2 )
                return;
			
		if( 1 == args.Length)
			PROCESS_WIN_NAME = args[0];
			
            Task.WaitAny(MainAsync());
			
            if (Application.AllowQuit)
                Application.ExitThread();
            else
                Application.Exit();
        }


        public static async Task MainAsync()
        {          
		bool m1 = false;
		Process[] ps;
         
   		await Task.Run(async () => {
                while (!m1)
                {
                    ps = Process.GetProcesses();
                    for (int i = 0; i < ps.Length && (!m1 || !m2); i++)
                    {
                        if (ps[i].MainWindowTitle.Contains(PROCESS_WIN_NAME) && !m1)
                        {
                            _p = ps[i];
                            m1 = true;
                        }
                    }

                    await Task.Delay(50);
                }

                    if (_p != null){
			    _p.CloseMainWindow();
			    _p.Close();
		    }
            });

        }
    }
}
