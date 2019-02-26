using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace FormInputDevice.Inputs.Byte
{
    public interface IEDAByte
    {
        IEDAByte SetFileBinary(byte[] data);
        IEDAByte SetFileJson(IDictionary<int, IDictionary<object, object>> data);

        int GetByte(int it);
        String GetHex(int it);
        int GetDec(int it);
        String GetKey(int it);
        
        IEDAByte SetByte(int pos, int it);
        IEDAByte SetHex(int pos, String it);
        IEDAByte SetDec(int pos, int it);
        IEDAByte SetKey(int pos, String it);

        byte[] GetData();
        IDictionary<int, IDictionary<object, object>> GetDebug();
    }
}
