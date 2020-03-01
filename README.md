# Loader Dumps Arcade (wip)



<p align="center">
    <img src="https://github.com/vicboma1/loaderDumpsArcade-media/blob/master/Assets/Images/logo2020.png" >	
</p>


#### All this is a homebrew development with reverse engineering, non official technical documentation and a lot of personal time. 
Twitter : https://twitter.com/vicboma1

## Table of Contents (wip)

### [Systems](https://github.com/vicboma1/loaderDumpsArcade/blob/master/README.md#systems-1)
### [Loader](https://github.com/vicboma1/loaderDumpsArcade/blob/master/README.md#loader--based-on-injections)

### Injections
#### [Process](https://github.com/vicboma1/Inject-DLL/blob/master/README.md#process)
  * CreateProcess and OpenProcess
  * CreateRemoteThread and LoadLibrary
  * Portable Execute
  * Hook Injection
#### Techniques
  * Virtual Method Table 
  * Vectored Exception Handling
  * Trampoline/Columpio
  * DetourFunction
#### [Hooks](https://github.com/vicboma1/Inject-DLL/blob/master/README.md#hooks)
  * [Api Windows](https://github.com/vicboma1/loaderDumpsArcade/blob/master/assets/Platform/Hooks/readme.md#windows)
  * [Api Native NTxxx](https://github.com/vicboma1/loaderDumpsArcade/blob/master/assets/Platform/Hooks/readme.md#api-native-nt)
  * [Api Native ZWxxx](https://github.com/vicboma1/loaderDumpsArcade/blob/master/assets/Platform/Hooks/readme.md#api-native-zw)
  * [DDraw](https://github.com/vicboma1/loaderDumpsArcade/blob/master/assets/Platform/Hooks/DDraw/DirectDrawHook.h)
  * [D3D8](https://github.com/vicboma1/loaderDumpsArcade/blob/master/assets/Platform/Hooks/D3D8/D3D8Hook.h)
  * [D3D8Device](https://github.com/vicboma1/loaderDumpsArcade/blob/master/assets/Platform/Hooks/D3D8/D3D8DeviceHook.h)
  * [DSound8](https://github.com/vicboma1/loaderDumpsArcade/blob/master/assets/Platform/Hooks/DSound8/DSound8Hook.h)
  * [DSoundBuffer](https://github.com/vicboma1/loaderDumpsArcade/blob/master/assets/Platform/Hooks/DSoundBuffer/DSoundBufferHook.h)
  * [D3D9](https://github.com/vicboma1/loaderDumpsArcade/blob/master/assets/Platform/Hooks/D3D9/D3D9Hook.h)
  * [D3D9ex](https://github.com/vicboma1/loaderDumpsArcade/blob/master/assets/Platform/Hooks/D3Dx9/D3Dx9Hook.h)
  * [D3D9Device](https://github.com/vicboma1/loaderDumpsArcade/blob/master/assets/Platform/Hooks/D3D9/D3D9DeviceHook.h)
  * [Opengl32](https://github.com/vicboma1/loaderDumpsArcade/blob/master/assets/Platform/Hooks/Opengl32/Opengl32Hook.h)
  * [Glu32](https://github.com/vicboma1/loaderDumpsArcade/blob/master/assets/Platform/Hooks/glu32/glu32Hook.h)
  * [iDmacDrv32](https://github.com/vicboma1/loaderDumpsArcade/tree/master/assets/Platform/Hooks/iDmacDrv32)
  
 #### [Segmentation memory](https://github.com/vicboma1/Inject-DLL/blob/master/README.md#segmentation-memory)
  * Addressing

### [Inputs](https://github.com/vicboma1/loaderDumpsArcade/blob/master/README.md#inputs-1)
### [Emulators](https://github.com/vicboma1/loaderDumpsArcade#emulators-1)
* [JVS I/O](https://github.com/vicboma1/loaderDumpsArcade#jvs-io)
* [FAST I/O](https://github.com/vicboma1/loaderDumpsArcade#fast-io)
### [Graphics](https://github.com/vicboma1/loaderDumpsArcade#graphics-1)
### [Sound](https://github.com/vicboma1/loaderDumpsArcade#sound-1)
### [Virtual Storage](https://github.com/vicboma1/loaderDumpsArcade#virtual-storage-1)
### [Cache Storage](https://github.com/vicboma1/loaderDumpsArcade#cache-storage-1)
### [Display](https://github.com/vicboma1/loaderDumpsArcade#display-1)
### [Aspect Ratio](https://github.com/vicboma1/loaderDumpsArcade#aspect-ratio-1)
### [Rotation Display](https://github.com/vicboma1/loaderDumpsArcade#rotation-display-1)
### [TaskBar Menu](https://github.com/vicboma1/loaderDumpsArcade#taskbar-menu-1)
### [GUI](https://github.com/vicboma1/loaderDumpsArcade#gui-deprecated)
### [Systems/Games Loaders](https://github.com/vicboma1/loaderDumpsArcade#systemsgames-loaders-wip)
* [Taito Type x](https://github.com/vicboma1/loaderDumpsArcade#taito-type-x-1)
* [Taito Type x2](https://github.com/vicboma1/loaderDumpsArcade#taito-type-x2-1)
* [NESiCAxLive](https://github.com/vicboma1/loaderDumpsArcade#nesicaxlive-1)
### [Video DevList](https://github.com/vicboma1/loaderDumpsArcade#video-devlist-1)
### [Code Ratio](https://github.com/vicboma1/loaderDumpsArcade#code-ratio)
### [Highlights](https://github.com/vicboma1/loaderDumpsArcade#highlights-1)
### [References](https://github.com/vicboma1/loaderDumpsArcade#references-1)
### [Miscelanea Projects](https://github.com/vicboma1/loaderDumpsArcade#miscelanea-projects-1)
### [About](https://github.com/vicboma1/loaderDumpsArcade#about-1)



## Systems
 
 ### Taito Type x
 ```
    Year : 2005
    CPU : Celeron - Pentium 4
    Chipset: Intel 865G
    GPU: ATI Radeon 9600SE/9600XT(128 MB) / X700PRO (256 MB), Bahia AGP 2.0/3.0 Soporte 1x/4x/8x
    SO: Windows XP Embedded
 ```
    
### Taito Type x2
  ```
    Year : 2005
    CPU : Intel Core 2 Duo E6400／Pentium 4 651／Celeron D 352
    Chipset: Intel Q965 + ICH8
    GPU: ATI RADEON X1600Pro/X1300LE o nVIDIA GeForce 7900GS／7600GS／7300GS
    SO: Microsoft Windows XP Embedded SP2
  ```

### NESiCAxLive
  ```
    Arcade System Board
    Run w/ Taito Type X, X2, X Zero, X3 and X4
  ```
  
## Loader | [Based on Injection's](https://github.com/vicboma1/Inject-DLL#process)
   ```C
   Boolean isLoaded { get; }
   Boolean isActive();
   int Open(String name);
   Task OpenAsync(String name);
   Kernel32Native.PROCESS_INFORMATION Create(String name, uint securityAttr);
   Boolean Attach(String name);
   Boolean InjectDLL(String name);
   List<IntPtr> SuspendAllThreads();
   Boolean ReadMemory(IntPtr processID, IntPtr address, int numOfBytes, byte[] buffer, out int bytesRead);
   Boolean WriteMemory(IntPtr hProc, IntPtr address, byte [] buffer, out int bytesWrited);
   List<IntPtr> ResumeAllThreads();
   Boolean Terminate();
   ```
   
## Inputs
* Taito Type
* NESICAxLive

### [GetAsyncKeyState](https://docs.microsoft.com/en-us/windows/desktop/api/winuser/nf-winuser-getasynckeystate) | [OpCodes](https://docs.microsoft.com/en-us/windows/desktop/inputdev/virtual-key-codes)

#### Example | [File.properties](https://github.com/vicboma1/loaderDumpsArcade/blob/master/assets/Inputs/AsyncKeyState/readme.md)

* Player 1
 ```
 P1_SERVICE = 3
 P1_START = 1
 P1_COIN = 5
 P1_UP = UP
 P1_DOWN = DOWN
 P1_LEFT = LEFT
 P1_RIGHT = ALT
 P1_BUTTON_1 = SPACE
 P1_BUTTON_2 = CTRL
 P1_BUTTON_3 = C
 P1_BUTTON_4 = A
 P1_BUTTON_5 = V
 P1_BUTTON_6 = B
 ```
  
* Player 2
 ```
 P2_SERVICE = 4
 P2_START = 2
 P2_COIN = 6
 P2_UP = R
 P2_DOWN = F
 P2_LEFT = G
 P2_RIGHT = D
 P2_BUTTON_1 = A
 P2_BUTTON_2 = S
 P2_BUTTON_3 = E
 P2_BUTTON_4 = Q
 P2_BUTTON_5 = W
 P2_BUTTON_6 = E	
 ```
  
 * Board
 ```
 TEST_TILT1 = 3
 TEST_TILT2 = 7 
 TEST_TILT3 = 8
 TEST_MODE = T
 EXIT_CODE = ESC
 ```
 
 * Manual
 ```
 Need for the taito type x game to read the keyboard input 
 
 ENUM = Ascii code keyboard
 ```
  
### Direct Input | [Based on Hook's](https://github.com/vicboma1/Inject-DLL#hooks) | [DIKCodes](http://www.flint.jp/misc/?q=dik&lang=en)
 
#### Example | File.bin

 * Player 1
 ```
   [Display address]  [Value]  [Byte]  [Key]
   0000000000000000     00       .     Start
   0000000000000004     00       .     Coin
   0000000000000008     00       .     Service
   000000000000000C     00       .     Up
   0000000000000010     00       .     Down
   0000000000000014     00       .     Left
   0000000000000018     00       .     Right
   000000000000001C     00       .     Btn 1
   0000000000000020     00       .     Btn 2
   0000000000000024     00       .     Btn 3
   0000000000000028     00       .     Btn 4
   000000000000002C     00       .     Btn 5 
   0000000000000030     00       .     Btn 6
 ```
    
* Player 2
 ```
  [Display address]  [Value]  [Byte]  [Key] 
  0000000000000034     00       .     Start
  0000000000000038     00       .     Coin
  000000000000003C     00       .     Service
  0000000000000040     00       .     Up
  0000000000000044     00       .     Down
  0000000000000048     00       .     Left
  000000000000004C     00       .     Right
  0000000000000050     00       .     Btn 1
  0000000000000054     00       .     Btn 2
  0000000000000058     00       .     Btn 3
  000000000000005C     00       .     Btn 4
  0000000000000060     00       .     Btn 5 
  0000000000000064     00       .     Btn 6
 ```

* Board 
 ```
  [Display address]  [Value]  [Byte]  [Key]
  0000000000000068     00       .     Test Mode
  000000000000006C     00       .     Exit
 ```
  
* Manual 
 ```
  Need for the taito type x game to read the keyboard input 
  
  Keyboard    -  256 (short)
  0x000000XX     XX     
    
  Joystick    -  X[1|2]   -  Axis[+|-][X|Y|Z]   -  256 (btn)
  0xZXYA0CMN       ZY     -        YA           -    0CMN      
  
 
  Example
 
  [Display address]        [Hexa Code]             [Hexa Code]          [Ascii Code]
  0000000000000000  02 00 00 00 06 00 00 00  06 00 00 00 C8 00 00 00  ................
  0000000000000010  D0 00 00 00 CB 00 00 00  CD 00 00 00 02 00 00 00  ................
  0000000000000020  03 00 00 00 04 00 00 00  05 00 00 00 06 00 00 00  ................
  0000000000000030  07 00 00 00 32 00 00 00  31 00 00 00 30 00 00 00  ....2...1...0...
  0000000000000040  2F 00 00 00 2E 00 00 00  01 00 00 X1 03 00 00 X1  /...............
  0000000000000050  02 00 00 X1 25 00 00 00  24 00 00 00 23 00 00 00  ........$...#...
  0000000000000060  22 00 00 00 21 00 00 00  14 00 00 00 01 00 00 00  "...!...........         
 ```
   
* Input Tool to map output file *.bin

<p align="center">
    <img src="https://github.com/vicboma1/loaderDumpsArcade-media/blob/master/Assets/Images/keyInputMappingAsyncV2.gif">
</p>

  
## Emulators

### JVS I/O 

### [OpCodes](https://github.com/vicboma1/loaderDumpsArcade/blob/master/assets/Protocol/JVS/JVSEnums.h)
#### Semantic Trace for Taito Type
```
Inicializando
	Logger: 2019-06-07_00-48-04-LoggerJvs.log 

	Escribo  6 bytes... -> [ E0 FF 03 F0 D9 CB ] 0xE0FF03F0D9CB
	[E0] = SYNC_CODE OK
	[FF] = BROADCAST A TODOS LOS NODOS
	[03] = 
	[F0] = RESET ALL NODES
	[D9] 
	[CB] = 
	Envío    0 bytes... -> [ ]

............................

	Escribo  6 bytes... -> [ E0 FF 03 F1 01 F4 ] 0xE0FF03F101F4
	[E0] = SYNC_CODE OK
	[FF] = BROADCAST A TODOS LOS NODOS
	[03] = 
	[F1] = Set Address
	[01] 
	[F4] = 
	Envío    6 bytes... -> [ XXXXXXXXXXX ]

............................

	Escribo  5 bytes... -> [ E0 01 02 10 13 ]  0xE001021013 
	[E0] = SYNC_CODE OK
	[01] = ESCLAVO
	[02] = 
	[10] = I/O IDENTIFICADOR 
	[13] = 
	Envío    58 bytes... -> [ XXXXXXXXXXX ]

............................

	Escribo  5 bytes... -> [ E0 01 02 11 14 ] 0xE001021114 
	[E0] = SYNC_CODE OK
	[01] = ESCLAVO
	[02] = 
	[11] = COMANDO REVISION FORMATO 
	[14] = 
	Envío    7 bytes... -> [ XXXXXXXXXXX ]
	
	...
	

............................
	
	Escribo  5 bytes... -> [ E0 00 02 00 02 ]
	[E0] = SYNC_CODE OK
	[00] = MAESTRO
	[02] =
	[00] = RESETEANDO MAQUINA (Exit Game)
	[02] = 
	Envío    6 bytes... -> [ XXXXXXXXXXX ]
```
### [Fast I/O](https://github.com/vicboma1/loaderDumpsArcade-iDmacDrv)
#### Semantic Trace for NESICAxLive

```
Inicializando
	Logger: 2020-01-19_14-50-21-LoggerFAST-io.log 

Abriendo conexion
	Hook_iDmacDrvOpen[_in_]			(deviceId: 1 | outBuffer: 00000000 | flags: 00000000)
	Hook_iDmacDrvOpen[_out_]		(deviceId: 1 | outBuffer: 00000001 | flags: FFFFFFFF)

............................

Leyendo datos
	Hook_iDmacDrvRegisterRead
		Discovery [0x400]
		XXXXXXXXX [0x4000] ?
		XXXXXXXXX [0x4004] ?
		XXXXXXXXX [0x4000] ?
	
	
............................

** FOR:

Escribiendo datos
	Hook_iDmacDrvRegisterWrite
		XXXXXXXXX [0x4000] ?
		
............................

Leyendo datos
	Hook_iDmacDrvRegisterRead
		XXXXXXXXX [0x4004] ?
		
............................

Escribiendo datos
	Hook_iDmacDrvRegisterWrite
		XXXXXXXXX [0x4004] ?
		
............................
		
Leyendo datos
	Hook_iDmacDrvRegisterRead
		Input Key P1 - P2 [0x4120]
		XXXXXXXXX         [0x4124] ?
		XXXXXXXXX         [0x4128] ?
		XXXXXXXXX         [0x412C] ?
		XXXXXXXXX         [0x41A0] ?
		XXXXXXXXX         [0x41A4] ?
		XXXXXXXXX         [0x41A8] ?
		XXXXXXXXX         [0x41AC] ?

............................	

Escribiendo datos
	Hook_iDmacDrvRegisterWrite
		XXXXXXXX          [0x4100] ?
		XXXXXXXX          [0x4104] ?
		XXXXXXXX          [0x4108] ?
		XXXXXXXX          [0x410C] ?
		Coin Input P1 	  [0x4140]
		Coin Input P2 	  [0x4144]
		XXXXXXXX          [0x4180] ?
		XXXXXXXX          [0x4184] ?
		XXXXXXXX          [0x4188] ?
		XXXXXXXX          [0x418C] ?

............................
		
Leyendo datos
	Hook_iDmacDrvRegisterRead
		Coin Input P1 	 [0x4140]
		Coin Input P2 	 [0x4144]
		Coin Input P2 	 [0x4144]
                XXXXXXXX         [0x41C0] ?
                XXXXXXXX         [0x41C4] ?
** FOR

...

Cerrando conexion
	Hook_iDmacDrvClose			(deviceId: 1 | access: 004E4BDC) -> You can only close game with Test Mode  

```

## Graphics
 * Color Inverting per-stage texture processing
 * No filter stretch
 * Fetch stream vertex
 * Primitives to render
 * Rendered entities without alpha
 * Filters in runtime
 * Reverse pixel mode in runtime / Nearest-Point Sampling
 * Diffuse CyberPunk Lights
 * Spot Light Type
 * Linear Filter (LF)
 * Bilinear Filter (BF)
 * Anisotropic Filter (AF)
 

## Sound
 * Sound Create
 * Sound Capture 
 * Sound Full Duplex
 * Sound Full Duplex Create
 * Sound EnumerateA
 * Sound EnumerateW
 * Sound Buffer

## Virtual Storage
 * Dynamic virtual Hard Disk (VHD)
 * Substitute a drive letter for local path

## Cache Storage
 * Save/Config0000.bin
 * setting.dat
 * hiscore.dat
 * game.dat
 
## Display
 * Windowed
 * Windowed Center
 * Fullscreen (Windowed Magnifier)
 * Fullscreen Native
 
## Aspect Ratio
 * 1:1  
 * 2:1  
 * 3:2  
 * 3:4  - Vertical
 * 4:1  
 * 4:3  
 * 5:3  
 * 5:4  
 * 6:5  
 * 7:9  - Vertical 
 * 8:3  
 * 8:7  
 * 9:16 - Vertical
 * 16:9 
 * 16:10
 * 16:15
 * 19:12
 * 19:14
 * 30:17
 * 32:9

## Rotation Display
 * 0°
 * 90°
 * 180°
 * 270°

## TaskBar Menu
 * Show
 * Hidden
 * Animation

##  GUI - deprecated

* scratch (Pof with vs2010) (wip)

<p align="center">
    <img src="https://github.com/vicboma1/loaderDumpsArcade-media/blob/master/Assets/Images/GUI_v.0.0.1.gif">
</p>
  
## Systems/Games Loaders (wip)

### Taito Type x

<p align="center">
    <img src="https://github.com/vicboma1/loaderDumpsArcade-hyperspin-wheel/blob/master/wheel/mahjong.png" >
</p>

* [Cosplay 3D Mahjong - 706]() - Working Video | Inputs (WIP)

<p align="center">
	<a href="https://www.youtube.com/playlist?list=PLNph7ndeSqE-wY8D8cIlpQJ4cVMEThrhm">
    <img src="https://github.com/vicboma1/loaderDumpsArcade-hyperspin-wheel/blob/master/wheel/raiden3.png" align="center" height="200" width="350">
	</a>
</p>

<p align="center">
	<a href="https://www.youtube.com/playlist?list=PLNph7ndeSqE9Dtq5gqllBOdRElYEQfLrr">
    <img src="https://github.com/vicboma1/loaderDumpsArcade-hyperspin-wheel/blob/master/wheel/raiden4.png" align="center" height="150" width="450">
	</a>
</p>

<p align="center">
	<a href="https://www.youtube.com/playlist?list=PLNph7ndeSqE-TtnJQxQj2pWGjMsIpb8jc">
    <img src="https://github.com/vicboma1/loaderDumpsArcade-hyperspin-wheel/blob/master/wheel/homura.png" align="center" height="100" width="300">
	</a>
</p>

<p align="center">
	<a href="https://www.youtube.com/playlist?list=PLNph7ndeSqE9BHgWBH5V7_zmCa8WIBGR2">
    <img src="https://github.com/vicboma1/loaderDumpsArcade-hyperspin-wheel/blob/master/wheel/chaosBreaker.png" align="center" height="125" width="300">
	</a>
</p>

<p align="center">
	<a href="https://www.youtube.com/playlist?list=PLNph7ndeSqE_iBnAJoRheIDmQn_edrRJz">
    <img src="https://github.com/vicboma1/loaderDumpsArcade-hyperspin-wheel/blob/master/wheel/gigawings.png" align="center" height="125" width="300">
	</a>
</p>

<p align="center">
	<a href="https://www.youtube.com/playlist?list=PLNph7ndeSqE8KqNXWie2QK_E4OFFsFQ7Q">
    <img src="https://github.com/vicboma1/loaderDumpsArcade-hyperspin-wheel/blob/master/wheel/TGM3.png" align="center" height="200" width="350">
	</a>
</p>

<p align="center">
	<a href="https://www.youtube.com/playlist?list=PLNph7ndeSqE8n-p_6HdNnTemI0n9FdjY2">
    <img src="https://github.com/vicboma1/loaderDumpsArcade-hyperspin-wheel/blob/master/wheel/spica.png" align="center" height="200" width="350">
	</a>
</p>

<p align="center">
	<a href="https://www.youtube.com/watch?v=ibgZqxGOmFw&list=PLNph7ndeSqE_rKEF6IdmXWIqwDTDmsEO_">
    <img src="https://github.com/vicboma1/loaderDumpsArcade-hyperspin-wheel/blob/master/wheel/shikigame_no_shiro_3.png" align="center" height="200" width="350">
	</a>
</p>

### Taito Type x2

<p align="center">
    <a href="https://www.youtube.com/playlist?list=PLNph7ndeSqE_68bJP1YUUWKTL_2Jfj9t7">
	    <img src="https://github.com/vicboma1/loaderDumpsArcade-hyperspin-wheel/blob/master/wheel/troublewitches.png" align="center" height="150" width="400">
	</a>
</p>

<p align="center">
	<a href="https://www.youtube.com/playlist?list=PLNph7ndeSqE9MUaKf3QcwJBXgNWR8Vcng">
    	<img src="https://github.com/vicboma1/loaderDumpsArcade-hyperspin-wheel/blob/master/wheel/battleFantasia.png" align="center" height="150" width="400">
	</a>
</p>

<p align="center">
	  <a href="https://www.youtube.com/playlist?list=PLNph7ndeSqE8dBFPN-_DH0c8JctqD6s8C">
    		<img src="https://github.com/vicboma1/loaderDumpsArcade-hyperspin-wheel/blob/master/wheel/powerinstinct5.png" align="center" height="180" width="400">
	</a>
</p>
	
<p align="center">
	<a href="https://www.youtube.com/playlist?list=PLNph7ndeSqE9O34CTDVw5XlnOcaYK2xIo">
    	<img src="https://github.com/vicboma1/loaderDumpsArcade-hyperspin-wheel/blob/master/wheel/kof_12.png" align="center" height="180" width="400">
	</a>
</p>


### NesicaxLive
* [Cosplay 3D Mahjong - 401300]() - Video (WIP)
* [Puzzle Bobble - 301200 ]() - Inputs (WIP)

<p align="center">
	<a href="https://www.youtube.com/playlist?list=PLNph7ndeSqE-QQly8X8hIWtDHD1_lBUGw">
    		<img src="https://github.com/vicboma1/loaderDumpsArcade-hyperspin-wheel/blob/master/wheel/rastan.png">
	</a>
</p>

<p align="center">
	<a href="https://www.youtube.com/playlist?list=PLNph7ndeSqE9hRJ2UmgKTI01tEIriyCD-">
    		<img src="https://github.com/vicboma1/loaderDumpsArcade-hyperspin-wheel/blob/master/wheel/elevator.png" align="center" height="150" width="400">
		</a>
</p>

<p align="center">
	<a href="https://www.youtube.com/playlist?list=PLNph7ndeSqE95TSxsXRqrCn3X00aXDHzq">
    		<img src="https://github.com/vicboma1/loaderDumpsArcade-hyperspin-wheel/blob/master/wheel/spaceInvaders.png" align="center" height="150" width="400">
	</a>
</p>

# [Video DevList](https://www.youtube.com/playlist?list=PLNph7ndeSqE-ipUjV17uCQ-ZMGs9VC7CH)

* [Battle Fantasia (バトルファンタジア) Batoru Fantajia - Loader Dumps Arcade | Match 7 - 60 FPS]()
* [Battle Fantasia (バトルファンタジア) Batoru Fantajia - Loader Dumps Arcade | Match 6 - 60 FPS]()
* [Battle Fantasia (バトルファンタジア) Batoru Fantajia - Loader Dumps Arcade | Match 5 - 60 FPS]()
* [Battle Fantasia (バトルファンタジア) Batoru Fantajia - Loader Dumps Arcade | Match 4 - 60 FPS]()
* [Battle Fantasia (バトルファンタジア) Batoru Fantajia - Loader Dumps Arcade | Match 3 - 60 FPS]()
* [Battle Fantasia (バトルファンタジア) Batoru Fantajia - Loader Dumps Arcade | Match 2 - 60 FPS]()
* [Battle Fantasia (バトルファンタジア) Batoru Fantajia - Loader Dumps Arcade | Match 1 - 60 FPS]()
* [The King of Fighters XII (ザ・キング・オブ・ファイターズ) KOF XII - Loader Dumps Arcade - Match 3 60 FPS](https://youtu.be/o7Sts2uB-P4)
* [The King of Fighters XII (ザ・キング・オブ・ファイターズ) KOF XII - Loader Dumps Arcade - Match 2 60 FPS](https://youtu.be/H09leDaoGLM)
* [The King of Fighters XII (ザ・キング・オブ・ファイターズ) KOF XII - Loader Dumps Arcade - Match 1 60 FPS](https://youtu.be/70riFjWcJu4)
* [The King of Fighters XII (ザ・キング・オブ・ファイターズ) KOF XII - Loader Dumps Arcade - Intro 60 FPS](https://youtu.be/VDAGzS8UJ0s)
* [The King of Fighters XII (ザ・キング・オブ・ファイターズ) KOF XII - Taito Type x2 | AlphaBlending](https://youtu.be/8z8KhfNBFCQ)
* [The King of Fighters XII (ザ・キング・オブ・ファイターズ) KOF XII - Taito Type x2 | Pallete Color Hack](https://youtu.be/GSTtkVnlPE4)
* [The King of Fighters XII (ザ・キング・オブ・ファイターズ) KOF XII - Taito Type x2 | Aspect Ratio supported](https://youtu.be/1pzekpRzckI)
* [Homura (ほむら) Arcade (2005) - Taito Type x | Vertical Aspect Ratio supported](https://youtu.be/SglzyFcm6bk)
* [Power Instinct 5 (豪血寺一族) - Taito Type x2 | Aspect Ratio 4:3 Fullscreen vs Native](https://youtu.be/_1NjWH6Rrqs)
* [Aspect ratio / Resolutions screen](https://youtu.be/-OvNY2MhCZk)
* [Power Instinct 5 (豪血寺一族) - Taito Type x2 | Test gaming Elizabeth](https://youtu.be/OptTII5ETQM)
* [Power Instinct 5 (豪血寺一族) - Taito Type x2 | Test gaming Ume](https://youtu.be/3WdATEJz5RM)
* [Power Instinct 5 (豪血寺一族) - Taito Type x2 | Invert Color](https://youtu.be/Jh9hDvHNlpo)
* [Power Instinct 5 (豪血寺一族) - Taito Type x2 | Fullscreen 60 FPS](https://youtu.be/OpKtf31Aj28)
* [Power Instinct 5 (豪血寺一族) - Taito Type x2 | Windowed Hack 60 FPS](https://youtu.be/hzsVMu0YPVk)
* [Battle Fantasia (バトルファンタジア) Batoru Fantajia - Taito Type x2 | Hack Scaling Players - Deathbringer 2](https://youtu.be/LlRxCArEw9I )
* [Battle Fantasia (バトルファンタジア) Batoru Fantajia - Taito Type x2 | Hack Scaling Players - Deathbringer](https://youtu.be/9HuA1mD2umM)
* [Battle Fantasia (バトルファンタジア) Batoru Fantajia - Taito Type x2 | Hack Scaling Players - Ves](https://youtu.be/ou8_gpZTXyg)
* [Shikigami no Shiro III (式神の城III) Arcade (2006) - Taito Type X | Stage 1 & 2](https://youtu.be/-c7bPdWcch8 )
* [Battle Fantasia (バトルファンタジア) Batoru Fantajia - Taito Type x2 | Intro](https://youtu.be/4bKgXXouCKE)
* [Shikigami no Shiro III (式神の城III) Arcade (2006) - Taito Type X | Invert Color](https://youtu.be/WqaUZi32vf8)
* [Shikigami no Shiro III (式神の城III) Arcade (2006) - Taito Type X | Improve FPS](https://youtu.be/k1O7kFDUB1I)
* [Shikigami no Shiro III (式神の城III) Arcade (2006) - Taito Type X | Rotation & Windowed Hack](https://youtu.be/ibgZqxGOmFw)
* [Space Invaders (スペースインベーダー) Arcade (2012) NESICAxLive | Fullscreen](https://youtu.be/3elK8CwSkEU )
* [Space Invaders (スペースインベーダー) Arcade (2012) NESICAxLive | Windowed Hack](https://youtu.be/nV8hnL5wIkM)
* [Space Invaders (スペースインベーダー) Arcade (2012) NESICAxLive - iDmacDrv32 | PCB FAST I/O Buttons Board Test](https://youtu.be/5DMMDt6eaik)
* [Space Invaders (スペースインベーダー) Arcade (2012) NESICAxLive - Hooking iDmacDrv32 | PCB FAST I/O Coin Error](https://youtu.be/bxspBGE5lIU)
* [Space Invaders (スペースインベーダー) Arcade (2012) NESICAxLive - Hooking iDmacDrvRegisterRead | PCB FAST I/O](https://youtu.be/_sfDGUkdqjs)
* [Space Invaders (スペースインベーダー) Arcade (2012) NESICAxLive - Hooking iDmacDrv32Open | PCB FAST I/O](https://youtu.be/sZzW9e6lu0M)
* [Space Invaders (スペースインベーダー) Arcade (2012) NESICAxLive - Fast-io Error](https://youtu.be/8ZXGqbU1aSY)
* [Rastan Saga (ラスタンサーガ) Arcade (2014) - NesicaxLive | Invert Color ](https://youtu.be/cBHUyZpkjb4) 
* [Elevator Action (エレベーターアクション) Arcade (2014) - NesicaxLive | Invert Color ](https://youtu.be/FAi624hILlI)
* [Elevator Action (エレベーターアクション) Arcade (2014) - NesicaxLive | Fullscreen Hack](https://youtu.be/aPLpg5CJqGY)
* [Elevator Action (エレベーターアクション) Arcade (2014) - NesicaxLive | Windowed Hack](https://youtu.be/dPL_xJyc9C8)
* [Spica Adventure (スピカアドベンチャー) Arcade (2005) - NesicaxLive | Level 3 - Space Invader Boss](https://youtu.be/VxmwMzMFHwY)
* [Spica Adventure (スピカアドベンチャー) Arcade (2005) - NesicaxLive | Fullscreen Mode](https://youtu.be/24xwVvKhKUs)
* [Spica Adventure (スピカアドベンチャー) Arcade (2005) - NesicaxLive| Windowed Mode](https://youtu.be/0atLTgOaOIk )
* [Tetris The Grand Master 3 Terror Instinct / TGM3 (の認定モードに挑戦のムービー) Arcade (2005) | Fullscreen Mode](https://youtu.be/7vc35kFPJvY)
* [Tetris The Grand Master 3 Terror Instinct / TGM3 (の認定モードに挑戦のムービー) Arcade (2005) | Fullscreen w/Border](https://youtu.be/XyL1E2oFUNE)
* [Tetris The Grand Master 3 Terror Instinct / TGM3 (の認定モードに挑戦のムービー) Arcade (2005) | Windowed Mode](https://youtu.be/DxavhhYSmpE )
* [Tetris The Grand Master 3 Terror Instinct / TGM3 (の認定モードに挑戦のムービー) Arcade (2005) | Viewport Hacking](https://youtu.be/WA80-iZ062w )
* [Tetris The Grand Master 3 Terror Instinct / TGM3 (の認定モードに挑戦のムービー) Arcade (2005) | Game Hacking](https://youtu.be/YPl0_GEEgik)
* [Giga wing Generation (翼神ギガウイング ジェネレーションズ) Arcade (2004) - Taito Type X | Longplay GameHacking]( https://youtu.be/qh9ARTth-NA)
* [Giga wing Generation (翼神ギガウイング ジェネレーションズ) Arcade (2004) - Taito Type X | Bad Stencil Graphic](https://youtu.be/ek1_2ivwp70 )
* [Giga wing Generation (翼神ギガウイング ジェネレーションズ) Arcade (2004) - Taito Type X | Windowed Mode](https://youtu.be/C3unm3GpX-Q)
* [Chaos Breaker (カオスブレイカー) Arcade (2004) - Taito Type X | Working 100% Stage 3-4](https://youtu.be/T3URlwacrdk)
* [Chaos Breaker (カオスブレイカー) Arcade (2004) - Taito Type X | Working 100% Stage 1-2](https://youtu.be/4M54WQgAMu0)
* [Raiden IV (雷電IV Raiden Fō) Arcade 2007 Taito Type X | Anisotropico Filter](https://youtu.be/hFtfWKUp-tw)
* [Raiden IV (雷電IV Raiden Fō) Arcade 2007 Taito Type X | Invert Colors](https://youtu.be/KwUDml91B7g)
* [Chaos Breaker (カオスブレイカー) Arcade (2004) - Taito Type X | Anisotropico Filter](https://www.youtube.com/watch?v=yyglkZDB6U8)
* [Chaos Breaker (カオスブレイカー) Arcade (2004) - Taito Type X | Invert Color](https://youtu.be/heXYJ6bYnkM)
* [Chaos Breaker (カオスブレイカー) Arcade (2004) - Taito Type X | Improving 60FPS](https://youtu.be/tPvLwHai0ME)
* [Chaos Breaker (カオスブレイカー) Arcade (2004) - Taito Type X | Fullscreen](https://youtu.be/_NgRjtBGzIU)
* [Chaos Breaker (カオスブレイカー) Arcade (2004) - Taito Type X | Windowed HD](https://youtu.be/y-PWoBVzcZU)
* [Chaos Breaker (カオスブレイカー) Arcade (2004) - Taito Type X | Windowed Mode](https://youtu.be/5VerBuQEkcU)
* [Raiden IV (雷電IV Raiden Fō) Arcade (2007) - Taito Type X | Intro Gameplay Fixed](https://youtu.be/jh4URJZgbbo)
* [Raiden III (雷電III, Raiden Surī) Arcade (2005) - Taito Type x | Intro Gameplay Fixed ](https://youtu.be/2cBvG9guv68)
* [Homura (ほむら) Arcade (2005) - Taito Type x | Level 2 Invert color texture ](https://youtu.be/AaY-lbOMRHU)
* [Homura (ほむら) Arcade (2005) - Taito Type x | Level 1 Invert color texture ](https://youtu.be/Yj7jjW3M0xc)
* [Homura (ほむら) Arcade (2005) - Taito Type x | Fixing game exit](https://youtu.be/8kmfgJgGs90)
* [Homura (ほむら) Arcade (2005) - Taito Type x | Fixing Back buffer](https://youtu.be/EzyGZH9q7PQ)
* [Homura (ほむら) Arcade (2005) - Taito Type x | Level 4](https://youtu.be/CueDP9Eo2F0)
* [Homura (ほむら) Arcade (2005) - Taito Type x | Level 3](https://youtu.be/J_44bRZj10k)
* [Homura (ほむら) Arcade (2005) - Taito Type x | Level 2](https://youtu.be/K7ml_DnExFg)
* [Homura (ほむら) Arcade (2005) - Taito Type x | Level 2 Hack Stretch Rendered](https://youtu.be/yAC5v9YL1Vk)
* [Homura (ほむら) Arcade (2005) - Taito Type x | Level 1 ](https://youtu.be/ZulUZrCqbTM)
* [Homura (ほむら) Arcade (2005) - Taito Type x | Fullscreen Rotation 90° - 60 FPS](https://youtu.be/iaOecZxfWU4)
* [Homura (ほむら) Arcade (2005) - Taito Type x | Fullscreen Rotation 90° - Bad FPS...](https://youtu.be/Fe_goXXkpM4)
* [Homura (ほむら) Arcade (2005) - Taito Type x | Windowed](https://youtu.be/42s62PBZFDs)
* [Homura (ほむら) Arcade (2005) - Taito Type x | Hooking Video](https://youtu.be/TRQ8mhcG3n0)
* [Launcher Sync vs Async](https://youtu.be/v1pjWTGenAc)
* [Launcher Async + Destroyer Process + Modularity addons](https://youtu.be/VTdmDnnGWlA)
* [Loader & Demon - Capture Process w ThreadKernel](https://youtu.be/s7Lad-j6L2o)
* [VHD vs SUBST to mount a drive letter](https://youtu.be/YLcdkaPVlgw)
* [Substitute a drive letter for local path](https://youtu.be/jsZaTRLHZ0k)
* [Hooking - Capturing pop-up window when mounting a VHD in runtime](https://youtu.be/uPD4WT60gv4)
* [Trouble Witches AC (トラブル☆ウィッチーズＡＣ) Arcade (2008) - Taito Type x2 | Alpha Blending Longplay](https://youtu.be/l4f-RL1lFWg)
* [Raiden IV (雷電IV Raiden Fō) Arcade (2007) - Taito Type X | Alpha Blending Level-5](https://youtu.be/OWQjTKIyIYs)
* [Raiden IV (雷電IV Raiden Fō) Arcade (2007) - Taito Type X | Alpha Blending Level-4](https://youtu.be/fXngq9ocQlw)
* [Raiden IV (雷電IV Raiden Fō) Arcade (2007) - Taito Type X | Alpha Blending Level-3](https://youtu.be/_GxWZOsMh3w)
* [Raiden IV (雷電IV Raiden Fō) Arcade (2007) - Taito Type X | Alpha Blending Level-2](https://youtu.be/jeKVfM5r6l0)
* [Raiden IV (雷電IV Raiden Fō) Arcade (2007) - Taito Type X | Alpha Blending Level-1](https://youtu.be/pnU_iFDJB1g)
* [Raiden IV (雷電IV Raiden Fō) Arcade (2007) - Taito Type X | Alpha Blending Longplay](https://youtu.be/WVF5NIfcazw)
* [Raiden IV (雷電IV Raiden Fō) Arcade (2007) - Taito Type X | Fullscreen 60 fps ](https://youtu.be/UbR_rJappac)
* [Raiden IV (雷電IV Raiden Fō) Arcade (2007) - Taito Type X | Working 100% | 60 fps](https://youtu.be/WWz7wMm-rPA)
* [Raiden IV (雷電IV Raiden Fō) Arcade (2007) - Taito Type X | Demostration gamePlay](https://youtu.be/cGrcoSgKhCY)
* [Raiden IV (雷電IV Raiden Fō) Arcade (2007) - Taito Type X | Automatic virtual disk](http://www.youtube.com/watch?v=H7lU8WMDZrY)
* [Raiden IV (雷電IV Raiden Fō) Arcade (2007) - Taito Type X | Partition disk D](http://www.youtube.com/watch?v=sNqQlEhafkM)
* [Raiden IV (雷電IV Raiden Fō) Arcade (2007) - Taito Type X | Fullscreen & Rotation Display](https://youtu.be/byBMfUstYLY)
* [Raiden IV (雷電IV Raiden Fō) Arcade (2007) - Taito Type X | Windowed](https://youtu.be/KSZ0gIxmzU0)
* [Raiden IV (雷電IV Raiden Fō) Arcade (2007) - Taito Type X | Error Direct3Dバックバッファ取得失敗](https://youtu.be/wXJ1pOcU54E)
* [Raiden III (雷電III, Raiden Surī) Arcade (2005) - Taito Type x | Spot Light Type](https://youtu.be/1fW33Jc9ZZ8)
* [Raiden III (雷電III, Raiden Surī) Arcade (2005) - Taito Type x | Diffuse CyberPunk Lights](https://youtu.be/wBOByMJZJb4)
* [Trouble Witches AC (トラブル☆ウィッチーズＡＣ) - Taito Type x2 | Texture Filtering in runtime | Nearest-Point](https://youtu.be/QmNS6zFTKpg)
* [Raiden III (雷電III, Raiden Surī) Arcade (2005) - Taito Type x | Reverse pixel mode in runtime](https://youtu.be/x2dFOSd8rVI)
* [Raiden III (雷電III, Raiden Surī) Arcade (2005) - Taito Type x | Filters in runtime](https://youtu.be/L5Bl5P3vHvo)
* [Raiden III (雷電III, Raiden Surī) Arcade (2005) - Taito Type x | Working 100% ](https://youtu.be/CqVhs1MV7fc)
* [Raiden III (雷電III, Raiden Surī) Arcade (2005) - Taito Type x | Rendered entities without alpha](https://youtu.be/YXoffBoCQFA)
* [Raiden III (雷電III, Raiden Surī) Arcade (2005) - Taito Type x | Rotation Native Screen 90º](https://youtu.be/OJDhNMZ-WDA)
* [Raiden III (雷電III, Raiden Surī) Arcade (2005) - Taito Type x | Proof of concept screen rotation 0 - 90 - 180 - 270](https://youtu.be/GdglTFiwsGk)
* [Trouble Witches AC (トラブル☆ウィッチーズＡＣ) Arcade (2008) - Taito Type x2 | Working 100% ](https://youtu.be/d0Eo7ataLvg)
* [Trouble Witches AC (トラブル☆ウィッチーズＡＣ) Arcade (2008) - Taito Type x2 | Primitives to render ](https://youtu.be/1BOFofAWJCQ)
* [Trouble Witches AC (トラブル☆ウィッチーズＡＣ) Arcade (2008) - Taito Type x2 | Fetch stream vertex](https://youtu.be/2GzN8lyw67s)
* [Trouble Witches AC (トラブル☆ウィッチーズＡＣ) Arcade (2008) - Taito Type x2 | Utils bad text rendering ](https://youtu.be/_bpLo6YR2-A)
* [Trouble Witches AC (トラブル☆ウィッチーズＡＣ) Arcade (2008) - Taito Type x2 | No filter stretch](https://youtu.be/WdVXEIHrdOE)
* [Trouble Witches AC (トラブル☆ウィッチーズＡＣ) Arcade (2008) - Taito Type x2 | Hidden background](https://youtu.be/ZytAryfM6Y0)
* [Raiden III (雷電III, Raiden Surī) Arcade (2005) - Taito Type x | JVS working](https://youtu.be/ApofTCfae-Y)
* [Raiden III (雷電III, Raiden Surī) Arcade (2005) - Taito Type x | Hooking Display](https://youtu.be/0MQ7qit3hw0)
* [Raiden III (雷電III, Raiden Surī) Arcade (2005) - Taito Type x | I/O Error PC](https://youtu.be/wKgiJ981Utw)
* [Trouble Witches AC (トラブル☆ウィッチーズＡＣ) - Taito Type x2 | JVS I/O Coin Error overflow w/ +40000 credits ](https://youtu.be/bXRC05W12IY)
* [Trouble Witches AC (トラブル☆ウィッチーズＡＣ) Arcade (2008) - Taito Type x2 | Test Mode input mapping w/JVS I/O](https://youtu.be/FkcUcNCo7BI)
* [Trouble Witches AC (トラブル☆ウィッチーズＡＣ) Arcade (2008) - Taito Type x2 | Mapping input async](https://youtu.be/mXoh5oKt39w)
* [Trouble Witches AC (トラブル☆ウィッチーズＡＣ) Arcade (2008) - Taito Type x2 | JVS I/O Error](https://youtu.be/mXoh5oKt39w)
* [Trouble Witches AC (トラブル☆ウィッチーズＡＣ) Arcade (2008) - Taito Type x2 | Speed video](https://youtu.be/yyUQgcxYnqA)
* [Trouble Witches AC (トラブル☆ウィッチーズＡＣ) Arcade (2008) - Taito Type x2 | Solved JVS I/O ERROR (00)](https://youtu.be/eEW_f5E4UAw)
* [Rastan Saga (ラスタンサーガ) Arcade (2014) - NesicaxLive | Windowed size Optimization](https://youtu.be/7OtyeKExRcU)
* [Rastan Saga (ラスタンサーガ) Arcade (2014) - NesicaxLive | icon set hwnd](https://youtu.be/Rcl8FS5NELs)
* [Rastan Saga (ラスタンサーガ) Arcade (2014) - NesicaxLive | Windowed screen](https://youtu.be/PjmyWyBUKKs)
* [Rastan Saga (ラスタンサーガ) Arcade (2014) - NesicaxLive | Hook input keyboard](https://youtu.be/uG3ttaLP6Z0)
* [Rastan Saga (ラスタンサーガ) Arcade (2014) - NesicaxLive | Directx vertical hooking](https://youtu.be/n9h24hYXedQ)
* [Rastan Saga (ラスタンサーガ) Arcade (2014) - NesicaxLive | Directx size hooking](https://youtu.be/7KRQW63Cxtw)
* [Rastan Saga (ラスタンサーガ) Arcade (2014) - NesicaxLive | Directx Display hooking II](https://youtu.be/ZvJ_Y1MpI3U)
* [Rastan Saga (ラスタンサーガ) Arcade (2014) - NesicaxLive | Directx Display hooking I](https://youtu.be/VEUg6j_JLqw)
* [Inject Dll - Remote thread](https://youtu.be/8mL-wPzPZHw)
* [Api Hook - MessageBox | 32bits](https://youtu.be/kHs7gUDr03s)
* [Api Hook - Keyboard Async GUI | 32bits](https://youtu.be/Agw_1XLF7fY)
* [Inject Dll - Interoperabilidad entre C# y C Nativo (APIENTRY DllMain)](https://youtu.be/zQpBnYENabU)
* [Inject Dll - Suspend & Resume](https://youtu.be/A59-xcBp3Mo)
* [Inject Dll - Suspend Process](https://youtu.be/K2dtFfwR12Q)
* [Inject Dll - Capture Handlers](https://youtu.be/51Dj0L7bFiw)
* [Launcher Process Async](https://youtu.be/gVZMo1s0FPE)


# Code Ratio

```
-------------------------------------------------------------------------------
Language                     files          blank        comment           code
-------------------------------------------------------------------------------
XML                            142            173            345         286219
C/C++ Header                   795          38483          84272         147221
C++                            114           4477           4607          16206
C                               14            747            711          10235
C#                             118           1478           3894           9043
MSBuild script                  18              0             49           1653
Markdown                         3              4              0             46
DOS Batch                        8              1              0             27
XAML                             2              1              0             15
JSON                             5              0              0              5
Bourne Shell                     2              7             22              4
Assembly                         1              1              2              1
-------------------------------------------------------------------------------
SUM:                          1222          45372          93902         470675
-------------------------------------------------------------------------------
```

# Highlights
 * [Retrogaming: Una misión posible en sistemas Arcade de nueva generación - Retropolis 2019](https://www.inf.upv.es/www/etsinf/es/retropolis-valencia-2019-regresa-el-sabado-4-de-mayo-a-etsinf/)
 * [Podcast Taberna Nintendera - T02E16 - 037 - Programa 12_05_2019](https://raw.githubusercontent.com/vicboma1/loaderDumpsArcade-media/master/Assets/Audio/vlc-record-2019-12-25-22h03m56s-Taberna-Nintendera-T02E16-037-Programa-12_05_2019-.mp3)
 
# References
 * [JVS vs JAMMA](http://forum.arcadecontrols.com/index.php?topic=95942.0)
 * [JVS conversion](https://wiki.arcadeotaku.com/images/9/97/SEGA_cabinet_JVS_conversion_manual_.pdf)
 * [JVS protocols](https://wiki.arcadeotaku.com/w/JVS)
 * [Jamma Video Standard](http://daifukkat.su/files/jvs_wip.pdf)
 * [Naomi I/O Board](https://wiki.arcadeotaku.com/images/d/db/Capcom_io_jp_manual.pdf)
 * [Manual Programmer NV API ](https://github.com/vicboma1/loaderDumpsArcade-media/blob/master/Assets/Pdf/NVControlPanel_API.pdf)
 * [JVS](http://superusr.free.fr/arcade/JVS/JVST_VER3.pdf)
 * [JVS Original](https://github.com/vicboma1/loaderDumpsArcade-media/blob/master/Assets/Pdf/JVSR.pdf)
 * [I/O Board](https://github.com/reicast/reicast-emulator/blob/master/core/hw/maple/maple_devs.cpp)
 * [Input Keys](http://www.flint.jp/misc/?q=dik&lang=en)
 * [Cloc](https://es.osdn.net/projects/sfnet_cloc/)
 * [Use DLL Native with C/C++ in C# Project](https://mark-borg.github.io/blog/2017/interop/)
 * [Function Pointers](https://www.codeproject.com/Articles/7150/Member-Function-Pointers-and-the-Fastest-Possible)
 * [Windows Native API - Roger Orr [ACCU 2019]](https://www.youtube.com/watch?v=a0KozcRhotM)
 * [Previous Mode](https://docs.microsoft.com/en-us/windows-hardware/drivers/kernel/previousmode?redirectedfrom=MSDN)
 * [Kernel Native](https://www.geoffchappell.com/studies/windows/km/ntoskrnl/api/index.htm)
 * [C++ : Gestión de memoria con std::unique_ptr (Smart Pointers)](https://www.youtube.com/watch?v=MSk__71a41Q)
 * [Game System Requirements](https://github.com/vicboma1/loaderDumpsArcade/tree/master/assets/Documentation/Games)
 * [FAST I/O PCB](https://wiki.arcadeotaku.com/w/JVS#Taito_Fast_I.2FO_PCB)

# Miscelanea projects
* [Hyperspin wheels](https://github.com/vicboma1/loaderDumpsArcade-hyperspin-wheel)
* [Media](https://github.com/vicboma1/loaderDumpsArcade-media)
* [iDmacDrv dll](https://github.com/vicboma1/loaderDumpsArcade-iDmacDrv)
* [Aspect Ratio](https://github.com/vicboma1/AspectRatio)
 
# About

Loader Dump Arcade is programmed by vicboma1, all this is a homebrew development with reverse engineering, non official technical documentation and a lot of personal time.

My development environment is a poor Macbook 2015 
Bootcamp Native - Windows 8
Intel hd graphics 4500
8gb RAM 

Twitter : https://twitter.com/vicboma1.

This software is provided as-is, and is licensed under the MIT License. 

```
MIT License

Copyright (c) 2020 Victor Bolinches

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
```

# No roms, no games, no dumps! 
