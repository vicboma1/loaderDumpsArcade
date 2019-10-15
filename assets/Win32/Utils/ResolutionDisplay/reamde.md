# Resolution Display (Command Pattern)

```c
//File with external configuration
Properties *properties = new Properties();
properties->read();

// Read value
// FULLSCREEN_NATIVE
// FULLSCREEN
// FULLSCREEN_ROTATION_90
// FULLSCREEN_ROTATION_180
// FULLSCREEN_ROTATION_270
// WINDOWED
// WINDOWED_CENTER
// WINDOWED_CENTER_ROTATION_90
// WINDOWED_CENTER_ROTATION_180
// WINDOWED_CENTER_ROTATION_270
// WINDOWED_ROTATION_90
// WINDOWED_ROTATION_180
// WINDOWED_ROTATION_270

auto rotation = properties->getEnum("RESOLUTION_DISPLAY");
ResolutionDisplay *resolutionDisplay = new ResolutionDisplay();

auto value = pResolutionDisplay->toEnum(_keyResolution.c_str());

switch (value) {

  case  WINDOWED_ROTATION_90:
  case  FULLSCREEN_ROTATION_90:
  case  WINDOWED_CENTER_ROTATION_90:
    if (!pRotationDisplay->_90()) {
      MessageBox(NULL, "Valor de rotación 90 incorrecto", "Informacion", 0);
      ExitProcess(-3);
    }
    break;

  case  FULLSCREEN_ROTATION_180:
  case  WINDOWED_CENTER_ROTATION_180:
  case  WINDOWED_ROTATION_180:
    if (!pRotationDisplay->_180()) {
      MessageBox(NULL, "Valor de rotación 180 incorrecto", "Informacion", 0);
      ExitProcess(-3);
    }
    break;

  case  WINDOWED_ROTATION_270:
  case  FULLSCREEN_ROTATION_270:
  case  WINDOWED_CENTER_ROTATION_270:
    if (!pRotationDisplay->_270()) {
      MessageBox(NULL, "Valor de rotación 270 incorrecto", "Informacion", 0);
      ExitProcess(-3);
    }
    break;
  default: { 
    MessageBox(NULL, "Display desconocido","ERROR",MB_OK);
  }
}
```
