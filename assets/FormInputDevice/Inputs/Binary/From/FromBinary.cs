using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.IO;
using Common;
using FormInputDevice.Inputs.Binary.From;
using FormInputDevice.Inputs.Byte;

namespace InputDevice
{
    public class FromBinary : IFromBinary
    {
        public static FromBinary Create() { return new FromBinary(); }

        FromBinary()
        {

        }

        public void Writer(IEDAByte data)
        {
            if(File.Exists(Constants.FILE_NAME))
                data._byte = File.ReadAllBytes(Constants.FILE_NAME);
        }
    }
}
