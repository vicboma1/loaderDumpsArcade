using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using InputDevice;
using FormInputDevice.Inputs.Byte;

namespace FormInputDevice.Inputs.Binary.From
{
    public interface IFromBinary
    {
       void Writer(IEDAByte data);
    }
}
