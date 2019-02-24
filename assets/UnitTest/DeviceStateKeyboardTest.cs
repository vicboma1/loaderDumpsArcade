using System;
using Microsoft.VisualStudio.TestTools.UnitTesting;
using DI = SharpDX.DirectInput;
namespace Device
{
    [TestClass]
    public class DeviceStateKeyboardTest
    {
        private FormInputDevice.Inputs.Device.State.DeviceState? ds;

        [TestInitialize]
        public void init()
        {
            ds = new FormInputDevice.Inputs.Device.State.DeviceState();
        }

        [TestCleanup]
        public void cleanUp()
        {
            ds = null;
        }

        [TestMethod]
        public void keyBtn_Rcontrol()
        {
            keyBtn(0x9D, DI.Key.RightControl);
        }

        [TestMethod]
        public void keyBtn_Lcontrol()
        {
            keyBtn(0x1D, DI.Key.LeftControl);
        }

        [TestMethod]
        public void keyBtn_Up()
        {
            keyBtn(0xC8, DI.Key.Up);
        }

        [TestMethod]
        public void keyBtn_Down()
        {
            keyBtn(0xD0, DI.Key.Down );
        }

        [TestMethod]
        public void keyBtn_Right()
        {
            keyBtn(0xCD, DI.Key.Right);
        }

        [TestMethod]
        public void keyBtn_Left()
        {
            keyBtn(0xCB, DI.Key.Left);
        }

        [TestMethod]
        public void keyBtn_LAtl()
        {
            keyBtn(0x38, DI.Key.LeftAlt);
        }

        [TestMethod]
        public void keyBtn_P()
        {
            keyBtn(0x19, DI.Key.P);
        }


        [TestMethod]
        public void keyBtn_1()
        {
            keyBtn(0x02, DI.Key.D1);
        }


        [TestMethod]
        public void keyBtn_5()
        {
            keyBtn(0x06, DI.Key.D5);
        }

        public void keyBtn(short expected , DI.Key _key)
        {
            short Expected = expected;
            short res = 0;
            long code = 0xFFFFF700 | toShort(_key);

            ds?.DeviceBtn(code, ref res);
            Assert.IsTrue(Expected == res);
        }

        private short toShort(DI.Key _kye){ return (short)_kye; }
    }
}
