using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Common
{
    //Método de extensión...
    public static class StringExt
    {
        public static String toHex(this int i) =>
            toHex(new IntPtr(i)); 

        public static String toHex(this IntPtr ptr) =>
            "0x" + ptr.ToString("X8"); 
    }


    
}
