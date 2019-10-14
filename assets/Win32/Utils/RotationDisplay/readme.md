# Rotation Display

```c
//File with external configuration
PProperties *pproperties = new Properties();
pproperties->read();

//Read value
// DMDO_DEFAULT
// DMDO_90
// DMDO_180
// DMDO_270
auto rotation = pproperties->getEnum("ROTATION_DISPLAY");
PRotationDisplay *protationDisplay = new PRotationDisplay();

switch (rotation) {
  case MDO_DEFAULT  : protationDisplay->_DEFAULT(); break;
  case DMDO_90      : protationDisplay->_90();      break;
  case DMDO_180     : protationDisplay->_180();     break;
  case DMDO_270     : protationDisplay->_270();     break;

  default: MessageBox(NULL, "Rotacion desconocida","ERROR",MB_OK);
}
```
