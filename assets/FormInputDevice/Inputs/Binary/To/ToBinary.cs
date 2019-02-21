using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.IO;
using Common;
using FormInputDevice.Inputs.Binary.To;
using FormInputDevice.Inputs.Byte;

namespace InputDevice
{
    public class ToBinary : IToBinary
    {
        public static IToBinary Create() { return new ToBinary(); }

        ToBinary()
        {

        }

        public void Writer(IEDAByte data){
            using (var bw = new BinaryWriter(new FileStream(Constants.FILE_NAME, FileMode.Create)))
                bw.Write(data._byte);
        }
    }
}
