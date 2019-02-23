using System;
using Microsoft.VisualStudio.TestTools.UnitTesting;

namespace Device
{
    [TestClass]
    public class DeviceStateTest
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
        public void IsJoystickDevice()
        {
            var res = false;
            long code = 0x80000000;

            ds?.IsJoystickDevice(code,ref res);

            Assert.IsTrue(res);
        }


        [TestMethod]
        public void IsNotJoystickDevice()
        {
            var res = false;
            long code = 0x00000000;

            ds?.IsJoystickDevice(code, ref res);

            Assert.IsTrue(!res);
        }


        [TestMethod]
        public void JoystickDeviceP1()
        {
            var res = false;
            long code = 0x81000000;

            ds?.IsJoystickDeviceP1(code, ref res);

            Assert.IsTrue(res);
        }

        [TestMethod]
        public void JoystickDeviceP2()
        {
            var res = false;
            long code = 0x82000000;

            ds?.IsJoystickDeviceP2(code, ref res);

            Assert.IsTrue(res);
        }


        [TestMethod]
        public void IsNotJoystickDevicePlayer()
        {
            var res = 2;
            long code = 0x8000000;

            ds?.JoystickDevice(code, ref res);

            Assert.AreEqual(0,res);
        }


    }
}
