This is a quick guide on how to build a custom image for your C64-DTV that includes CBM-FileBrowser, JiffyDTV and Basic Prompt.
If you want, you may add any other program of course.

(USE IT AT YOUR OWN RISK)

What you need:
--------------
- dtvmkfs.exe, the tool to build the custom C64-DTV image (included) (http://picobay.com/dtv_wiki/index.php?title=Dtvmkfs)
- dtvslimintro_dtv.zip, the C64-DTV menu replacement (included) (http://picobay.com/dtv_wiki/index.php?title=DTVSlimIntro)
- fb64dtv_dtv.zip, the cbm-filebrowser (included)
- Basic_dtv.zip, (included) look here for additional dtv files (http://symlink.dk/nostalgia/dtv/fixed/)

- dtvrom.bin, the c64-DTV rom image, you may use the file supplied on VICE Emulator (http://www.viceteam.org/)
- JIFFYDTV.PRG, the JiffyDOS C64-DTV soft-kernal (http://dtvforge.ath.cx/jiffydtv/) (C64 JiffyDOS 6.01 image file required) 


Build the custom image:
-----------------------
- if you want to include additional dtv files, edit the "dtvlist.txt" file 
- put all the files that you need in this folder and execute the batch file "DTVimageBuild.bat"
- check the created image file "flashfs.bin" with VICE (64dtv.exe -c64dtvromimage flashfs.bin)
- if everything is OK, flash the image to your C64-DTV (http://picobay.com/dtv_wiki/index.php?title=Flash_the_DTV_Rom)


Good Luck ;-)