# Rotation Display

```c
//File with external configuration
Properties *properties = new Properties();
properties->read();

//Read value
// DMDO_DEFAULT
// DMDO_90
// DMDO_180
// DMDO_270
auto rotation = properties->getEnum("ROTATION_DISPLAY");
RotationDisplay *rotationDisplay = new RotationDisplay();

switch (rotation) {
  case MDO_DEFAULT  : rotationDisplay->_DEFAULT(); break;
  case DMDO_90      : rotationDisplay->_90();      break;
  case DMDO_180     : rotationDisplay->_180();     break;
  case DMDO_270     : rotationDisplay->_270();     break;

  default: { 
    rotationDisplay->stop();
    MessageBox(NULL, "Rotacion desconocida","ERROR",MB_OK);
  }
}
```
