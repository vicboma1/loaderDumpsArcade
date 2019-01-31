# Loader Dumps Arcade - Homebrew

## Systems
 
 * Taito Type x
    ```
    Year : 2005
    CPU : Celeron - Pentium 4
    Chipset: Intel 865G
    GPU: ATI Radeon 9600SE/9600XT(128 MB) / X700PRO (256 MB), Bahia AGP 2.0/3.0 Soporte 1x/4x/8x
    SO: Windows XP Embedded
    ```
    
* Taito Type x2
  ```
    Year : 2005
    CPU : Intel Core 2 Duo E6400／Pentium 4 651／Celeron D 352
    Chipset: Intel Q965 + ICH8
    GPU: ATI RADEON X1600Pro/X1300LE o nVIDIA GeForce 7900GS／7600GS／7300GS
    SO: Microsoft Windows XP Embedded SP2
  ```

* NESiCAxLive
  ```
    Arcade System Board
    Run w/ Taito Type X, X2, X Zero, X3 and X4
  ```
  

## Inputs (WIP - Keyboard)

#### Taito Type & NESiCAxLive
 
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

* Platform 
  ```
  [Display address]  [Value]  [Byte]  [Key]
  0000000000000068     00       .     Test Mode
  000000000000006C     00       .     Exit
  ```
  
* Asset | monitor_input.bin
  ```
  Need for the taito type x game to read the keyboard input 
  
  Example
  
  [Display address]        [Hexa Code]             [Hexa Code]          [Ascii Code]
  0000000000000000  01 00 00 00 00 00 00 00  01 00 00 00 01 00 00 00  ................
  0000000000000010  FA 00 00 00 01 00 00 00  01 00 00 00 00 00 00 00  ................
  0000000000000020  01 00 00 00 01 00 00 00  00 00 00 00 3C 00 00 00  ............<...
  0000000000000030  28 00 00 00 10 00 00 00  00 05 00 00 D0 02 00 00  (...............
  0000000000000040  00 05 00 00 D0 02 00 00  00 00 00 00 01 00 00 00  ................
  0000000000000050  00 00 00 00 00 00 00 00  00 00 00 00 00 00 00 00  ................
  0000000000000060  00 00 00 00 00 00 00 00                           ........        
  ```
  
## Systems/Games Loaders (wip)

### Taito Type x
* [Cosplay 3D Mahjong - 706]()

### Taito Type x2
* []()

### NesicaxLive
* [Cosplay 3D Mahjong - 401300]()
* [Rastan Saga - 882]()


# No Roms
