using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using InputDevice;
using FormInputDevice.Inputs.Byte;

namespace FormInputDevice.Inputs.Binary.To
{
    public interface IToBinary
    {
        void Writer(IEDAByte data);
    }
}
