using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace HasLetterDrive
{
    class Program {
		
        private static String D = @"D:\";

        static int Main(string[] args)
        {
            var allDrives = DriveInfo.GetDrives();
            foreach (DriveInfo d in allDrives)
		    if (d.Name.ToLower().Equals(D.ToLower()))
                    	return 1;
        		
	    return 0;
        }
          
    }
}
