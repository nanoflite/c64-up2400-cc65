CBM FileBrowser v.1.6
---------------------
(C) 2010-2013 by nbla000 (nbla000@gmail.com)

   
Overview:
---------
CBM-FileBrowser is a program launcher for Commodore machines. 
Even if it was originally intended for devices with sd2iec firmware, 
it works also with any CBM drive (without sd2iec functions of course).


Credits:
--------
C64 code based on sd2brwse v.0.6 by Hannu Nuotio (fork() of sdbrowse v.0.7) both discontinued
Vic-20 Mega-Cart Installer based on sys.asm sources of mega-tools by Daniel Kahlin
Sort routine by Michael Kircher
C128 code by Hydrophilic


Current supported machines:
--------------------------
C64
C64DTV
Vic-20 unexpanded
Vic-20 +3K RAM
Vic-20 +8K RAM or plus (for FE3 use this version) 
Vic-20 with Mega-Cart
C16 / C116 / Plus4
C128 


Tested drives:
--------------
MMC2IEC
SD2IEC
UIEC
C64SD (any version, with ITS module too)
1541 (with JiffyDOS too)
1541-II
1571
1581


How it works:
-------------
Load it and type RUN to start.
Use the joy or cursor keys to browse the directory, fire/return to load the selected program. 
See the keys assigments section for other keys specification.

For user with different CBM systems, there is a small basic program that autodetects the machine 
and then loads the proper system program, just put it as first file of your SD-Card/disk 
and type LOAD”*”,8 
Note that system programs (without the .prg suffix) must be in the same folder of the basic program. 

Note for C64-DTV:
-----------------
For best results is better to flash both fb64dtv_dtv.zip and jiffydtv.prg softkernal to your C64-DTV,
the folder c64dtv of this archive contains some samples about this operation (USE IT AT YOUR OWN RISK).
To get the jiffydtv.prg file, you need a c64 JiffyDOS 6.01 ROM image and use this webpage:
http://dtvforge.ath.cx/jiffydtv/

Note for Vic-20 versions:
-------------------------
Load the proper version according with the used memory expansion: 
Unexpanded, +3K RAM, +8K RAM or plus, for FE3 use the +8K version.

Note for the Vic-20's Mega-Cart version:
----------------------------------------
Load it by using any memory configuration from both normal or soft reset menus.
After launching a program, It may auto-restart (without re-load) even if you switch off your Vic-20,
just hold CBM key on boot/reset (or select VIC +3K) and type SYS1150.
Please note that if you launch a 3K program, you must reload the file-Browser.

To speedup loading for sd2iec based drives, SD2IEC/uIEC/MMC2IEC/C64SD/etc, or any other drives with JiffyDOS rom, 
please install latest SJLOAD addons for Mega-Cart (www.mega-cart.com)



Key assigments:
----------------
Each system use a specific key assigments but some keys are common for all system.


Common keys for all systems except C64-DTV:
---------------------------
[CURSOR/JOY UP]     = Previous entry
[CURSOR/JOY DOWN]   = Next entry
[CURSOR/JOY RIGHT]  = Next page
[CURSOR/JOY LEFT]   = Previous page 
[RETURN/FIRE]       = LOAD and RUN
[F5]                = Previous page
[F6]                = To top
[F7]                = Next page
[F8]                = To bottom
[S]                 = Sort (Enable/Disable)
[Q]                 = Quit to basic
[BACK SPACE]        = Exit dir
[ESC]               = Reset


Common keys for all systems except Vic-20 without Mega-Cart:
---------------------------
[D]                 = Use next detected Drive (if any)


Additional Keys for Vic-20 with Mega-Cart:
-----------------------------------------
[M]                 = Manual configuration (Enable/Disable)
[ESC]               = Reset and restart Mega-Cart Menu


Keys for C64DTV:
-------------
[JOY UP]            = Previous entry
[JOY DOWN]          = Next entry
[JOY RIGHT]         = Next page
[JOY LEFT]          = Previous page 
[RETURN/FIRE]       = LOAD and RUN
[BUTTON A]          = To top
[BUTTON B]          = To bottom
[BUTTON C]          = Sort (Enable/Disable)
[BUTTON D]          = Use next detected Drive (if any)
[RIGHT FIRE BUTTON] = Exit dir



Custom versions:
----------------
The program can be customizable with some options, just edit the proper .def file and compile, 
each system use a relative .def file, the file is commented with options explanation.
For example, the .def file of the Vic-20 unexpanded is vic20-unexp.def



Compile the program:
--------------------
Use ACME 0.91 (http://www.esw-heim.tu-clausthal.de/~marco/smorbrod/acme/)
# acme --cpu 6502 -f cbm -o program_name.prg system_file.asm

example for the Vic-20 +8K RAM or plus:
# acme --cpu 6502 -f cbm -o fb20-8k.prg vic20-8k.asm

For DOS/Windows, you may easily compile it by using the batch file "CBM-FileBrowser.bat"
Just execute it and select the system.

For Unix/Linux, you may compile it by using the included Makefile



Known bugs/issues:
------------------
MMC2IEC with 0.6.7 and maybe previous firmware versions too: 
If browsing in some directory (but not on a .d64 image) and quitting, the
following RUN starts the program on the root directory
 


TODO:
-----
1581 partitions support ?


Versions:
-----------------------------
v.0.1 - 01-Sep-2009 (Start of project, C64/C64DTV only) 
v.0.2 - 21-Oct-2009 (First working version for Vic-20 +8K RAM)
v.0.3 - 06-Jan-2010 (Added memory config auto-detection for Vic-20 selected program)  
v.0.4 - 19-Jan-2010 (Added support for Vic-20 with Mega-Cart and manual start mode)
v.0.5 - 10-Feb-2010 (Added support for Vic-20 unexpanded and Vic-20 +3K RAM)
v.1.0 - 05-Mar-2010 (First public version, minor issues fixed, C64 and Vic-20 supported)
v.1.1 - 22-Jun-2010 (Added support for D41 and DNP file images, sd2iec firmware v.0.9.0 or higher required)
v.1.2 - 09-Oct-2010 (Added SJLOAD speed-up option to the manual mode of the Mega-cart version)
v.1.3 - 31-May-2012 (Added support for C16/C116/Plus4, Sort directories, cosmetic changes)
v.1.4 - 19-Jul-2012 (Added JIFFYDTV speed-up support for C64-DTV, Clear screen before RUN)
v.1.5 - 03-Mar-2013 (Added support for C128 and uppercases disk images D64,D81,D71 etc.)
v.1.6 - 05-Sep-2013 (Added support for Tap files using ITS modules, case insensitive disk images Dnp, TaP, m2I etc)

 

 