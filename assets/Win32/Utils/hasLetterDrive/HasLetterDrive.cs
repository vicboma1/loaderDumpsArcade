using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace PartitionDisk
{
    class Program {
		
        private static String D = @"D:\";

         static int Main(string[] args)
        {
            if (args.Length <= 0)
            {
                MessageBox.Show(null, "Falta parametros de entrada", "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
                return -1;
            }

            DriveInfo[] allDrives = DriveInfo.GetDrives();

            var isDEnable = false;
            foreach (DriveInfo d in allDrives)
            {
                if (d.Name.ToLower().Equals(D.ToLower()))
                    return 1;
               
            }
			
			return 0;

        }
          
    }
}
