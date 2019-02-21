using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using SharpDX.DirectInput;
namespace FormInputDevice.Inputs
{
    public interface IStateDeviceUpdate : IStateUpdate
    {
        bool IsPressed { get; set; }
        bool IsReleased { get; set; }
        Key Key { get; set; }

        JoystickOffset Offset { get; set; }

        void MarshalFrom(KeyboardUpdate[] deviceBuffered, ref IStateDeviceUpdate[] deviceUpdate);
        void MarshalFrom(JoystickUpdate[] deviceBuffered, ref IStateDeviceUpdate[] deviceUpdate);
    }
}
