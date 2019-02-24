using System;
using Microsoft.VisualStudio.TestTools.UnitTesting;

namespace Device
{
    [TestClass]
    public class DeviceStateJoystickTest
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
            Byte res = 0;
            const int Expected = 4;

            Int64 code = 0x84000000;

            ds?.JoystickPlayer(code, ref res);

            
            Assert.AreEqual(Expected, res);
        }


        [TestMethod]
        public void IstJoystickDevicePlayer3()
        {
            Byte res = 0;
            const int Expected = 3;

            long code = 0x83000000;

            ds?.JoystickPlayer(code, ref res);

            Assert.AreEqual(Expected, res);
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
            short res = 0;
            const int Expected = 1;
            long code = 0x81010018;

            ds?.JoystickAxis(code, ref res);

            Assert.AreEqual(Expected, res);
        }

        [TestMethod]
        public void JoystickAxis_NX()
        {
            short res = 1;
            const int Expected = 17;

            long code = 0x81110018;

            ds?.JoystickAxis(code, ref res);

            Assert.AreEqual(Expected, res);
        }

        [TestMethod]
        public void JoystickAxis_PY()
        {
            short res = 0;
            const int Expected = 2;
            long code = 0x81020018;

            ds?.JoystickAxis(code, ref res);

            Assert.AreEqual(Expected, res);
        }

        [TestMethod]
        public void JoystickAxis_NY()
        {
            const int Expected = 18;
            short res = 0;
            long code = 0x81120018;

            ds?.JoystickAxis(code, ref res);

            Assert.AreEqual(Expected, res);
        }

        [TestMethod]
        public void JoystickAxis_PZ()
        {
            const int Expected = 3;
            short res = 0;
            long code = 0x81031018;

            ds?.JoystickAxis(code, ref res);

            Assert.AreEqual(Expected, res);
        }

        [TestMethod]
        public void JoystickAxis_NZ()
        {
            const int Expected = 19;
            short res = 0;
            long code = 0x81130018;

            ds?.JoystickAxis(code, ref res);

            Assert.AreEqual(Expected, res);
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
            const int Expected = 34;
            short res = 0;
            long code = 0x81220018;

            ds?.JoystickAxis(code, ref res);

            Assert.AreEqual(Expected, res);
        }

        [TestMethod]
        public void JoystickRange_l1000()
        {
            const int Expected = -1000;
            Int32 res = 0;
            long code = 0x8111FC18;

            ds?.JoystickRange(code, ref res);

            Assert.AreEqual<Int32>(Expected & 0xFFFF,res & 0xFFFF);
        }

        [TestMethod]
        public void JoystickRange_g1000()
        {
            const int Expected = 1000;
            var res = 0; ;
            long code = 0x811103E8;

            ds?.JoystickRange(code, ref res);

            Assert.AreEqual(Expected, res);
        }

        [TestMethod]
        public void JoystickBtn2()
        {
            const int Expected = 16;
            var res = (short)0;
            long code = 0x81110010;

            ds?.DeviceBtn(code, ref res);

            Assert.AreEqual(Expected, res);
        }

        [TestMethod]
        public void JoystickBtn3()
        {
            const int Expected = 17;
            var res = (short)0;
            long code = 0x81111111;

            ds?.DeviceBtn(code, ref res);

            Assert.AreEqual(Expected, res);
        }

        [TestMethod]
        public void JoystickTest()
        {
            int res = -1;
            byte resB = 0;
            short ii = 0;
            bool resT = false;
            const int expectedAxis = 17;
            const int expectedPlayer  = 1;
            const int expectedPlayer2 = 2;
            const int expectedDevice = 8;
            const int expectedR = -1000;
            const int expectedBtn = 24;
            long code = 0x8111FC18;


            ds?.DeviceBtn(code, ref ii);
            Assert.IsTrue(expectedBtn == ii);
            ds?.JoystickRange(code, ref res);
            Assert.AreEqual<Int32>(expectedR & 0xFFFF, res & 0xFFFF);
            ds?.IsJoystickAxisNegative(code,ref resT);
            Assert.IsTrue(resT);
            ds?.IsJoystickAxisPositive(code, ref resT);
            Assert.IsTrue(!resT);
            ds?.IsJoystickAxisX(code, ref resT);
            Assert.IsTrue(resT);
            ds?.IsJoystickAxisY(code, ref resT);
            Assert.IsTrue(!resT);
            ds ?.IsJoystickAxisZ(code, ref resT);
            Assert.IsTrue(!resT);
            ds?.IsJoystickDevice(code, ref resT);
            Assert.IsTrue(resT);
            ds ?.IsJoystickDeviceP1(code, ref resT);
            Assert.IsTrue(resT);
            ds?.IsJoystickDeviceP2(code, ref resT);
            Assert.IsTrue(!resT);
            ds?.IsJoystickDeviceP2(0x8211FC18, ref resT);
            Assert.IsTrue(resT);
            ds ?.JoystickAxis(code, ref ii);
            Assert.IsTrue(expectedAxis == ii);
            ds ?.JoystickDevice(code, ref resB);
            Assert.IsTrue(expectedDevice == resB);
            ds ?.JoystickPlayer(code, ref resB);
            Assert.IsTrue(expectedPlayer == resB);
            ds?.JoystickPlayer(0x8211FC18, ref resB);
            Assert.IsTrue(expectedPlayer2 == resB);

        }
  
    }
}
