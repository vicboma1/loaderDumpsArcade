using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace FormInputDevice.Inputs.Byte
{
    public interface IEDAByte
    {
        IDictionary<int, IDictionary<String, object>> map { get; set; }
        byte[] _byte { get; set; }
        int this[int id] { get; set; }
    }
}
