# Inputs

ENUM
```c
######################################
# CONFIG_INPUT
#
# INPUT_ASYNC_KEY_STATE
# INPUT_DIRECT  
######################################

void InputAsyncKeyState() { [...] }
void InputDirect() { [...] }


auto _key = properties->getString("CONFIG_INPUT");
auto value = inputConfig->toEnum(_key);

switch (value) {
	case INPUT_ASYNC_KEY_STATE:		
		InputAsyncKeyState(); 
		break;

	case INPUT_DIRECT:				
		InputDirect();        
		break;

	default : MessageBox(NULL, "Input Congig no especificado", "Informacion", 0);
}
  ```
  
LOOP TIME
```
INPUT_LOOP_DELAY_MS = 20
```
