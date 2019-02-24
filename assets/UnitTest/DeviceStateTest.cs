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
        public void IsJoystickDevicePlayer4()
        {
            var res = 4;
            Int64 code = 0x84000000;

            ds?.JoystickDevice(code, ref res);

            Assert.AreEqual(4,res);
        }


        [TestMethod]
        public void IstJoystickDevicePlayer3()
        {
            var res = 3;
            long code = 0x83000000;

            ds?.JoystickDevice(code, ref res);

            Assert.AreEqual(3, res);
        }

        [TestMethod]
        public void IsJoystickAxisNegative()
        {
            var res = false;
            long code = 0x8111FC18;

            ds?.IsJoystickAxisNegative(code, ref res);

            Assert.IsTrue(res);
        }

        [TestMethod]
        public void IsJoystickAxisPositive()
        {
            var res = false;
            long code = 0x81000018;

            ds?.IsJoystickAxisPositive(code, ref res);

            Assert.IsTrue(res);
        }

        [TestMethod]
        public void JoystickAxis_PX()
        {
            var res = 0;
            long code = 0x81010018;

            ds?.JoystickAxis(code, ref res);

            Assert.AreEqual(1, res);
        }

        [TestMethod]
        public void JoystickAxis_NX()
        {
            var res = 1;
            long code = 0x81110018;

            ds?.JoystickAxis(code, ref res);

            Assert.AreEqual(17, res);
        }

        [TestMethod]
        public void JoystickAxis_PY()
        {
            var res = 0;
            long code = 0x81020018;

            ds?.JoystickAxis(code, ref res);

            Assert.AreEqual(2, res);
        }

        [TestMethod]
        public void JoystickAxis_NY()
        {
            var res = 1;
            long code = 0x81120018;

            ds?.JoystickAxis(code, ref res);

            Assert.AreEqual(18, res);
        }

        [TestMethod]
        public void JoystickAxis_PZ()
        {
            var res = 0;
            long code = 0x81031018;

            ds?.JoystickAxis(code, ref res);

            Assert.AreEqual(03, res);
        }

        [TestMethod]
        public void JoystickAxis_NZ()
        {
            var res = 1;
            long code = 0x81130018;

            ds?.JoystickAxis(code, ref res);

            Assert.AreEqual(19, res);
        }

        [TestMethod]
        public void IsJoystickAxisZ()
        {
            var res = false;
            long code = 0x81130018;

            ds?.IsJoystickAxisZ(code, ref res);

            Assert.IsTrue(res);
        }

        [TestMethod]
        public void IsJoystickAxisY()
        {
            var res = false;
            long code = 0x81120018;

            ds?.IsJoystickAxisY(code, ref res);

            Assert.IsTrue(res);
        }

        [TestMethod]
        public void IsJoystickAxisX()
        {
            var res = false;
            long code = 0x81110018;

            ds?.IsJoystickAxisX(code, ref res);

            Assert.IsTrue(res);
        }

        [TestMethod]
        public void IsNotJoystickAxis()
        {
            var res = 0;
            long code = 0x81220018;

            ds?.JoystickAxis(code, ref res);

            Assert.AreEqual(34, res);
        }

        [TestMethod]
        public void JoystickRange_l1000()
        {
            Int32 res = -1000;
            UInt64 code = 0x8111FC18;

            ds?.JoystickRange(code, ref res);

            Assert.AreEqual(-1000, res);
        }

        [TestMethod]
        public void JoystickRange_g1000()
        {
            var res = (int) 1000;
            ulong code = 0x811103E8;

            ds?.JoystickRange(code, ref res);

            Assert.AreEqual(1000, res);
        }

        [TestMethod]
        public void JoystickBtn2()
        {
            var res = 16;
            ulong code = 0x81110010;

            ds?.JoystickRange(code, ref res);

            Assert.AreEqual(16, res);
        }

        [TestMethod]
        public void JoystickBtn3()
        {
            var res = 4369;
            ulong code = 0x81111111;

            ds?.JoystickRange(code, ref res);

            Assert.AreEqual(4369, res);
        }
    }
}
