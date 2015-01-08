SOURCES = main.c
ASOURCES = 
CC65_TARGET = c64
NAME = example
PROGRAM = $(NAME).prg
DISK = $(NAME).d64
C64_IP = 192.168.1.64
C1541 = ~/Developer/Tools/Vice/tools/c1541

CC      = $(CC65_HOME)/bin/cl65
CFLAGS  = -t $(CC65_TARGET) -O -g -I../..
LDFLAGS = -t $(CC65_TARGET) -m $(PROGRAM).map -Ln $(PROGRAM).lbl -I../..
VENDOR  = ../vendor
CBMFB   = $(VENDOR)/CBM-FileBrowser_v1.6/programs

.PHONY: all clean assets
all: assets $(PROGRAM)

ifneq ($(MAKECMDGOALS),clean)
-include $(SOURCES:.c=.d)
endif

%.o: %.s
	$(CC) -c $(CFLAGS) -o $@ $<

%.o: %.c
	$(CC) -c $(CFLAGS) -o $@ $<

$(PROGRAM): $(SOURCES:.c=.o) $(ASOURCES:.s=.o)
	$(CC) $(LDFLAGS) -o $@ $^

clean:
	$(RM) $(ASOURCES:.s=.o) $(SOURCES:.c=.o) $(SOURCES:.c=.d) $(PROGRAM) $(PROGRAM).map $(PROGRAM).lbl $(DISK)

run: all
	x64 $(PROGRAM)

runc: all
	codenet -n $(C64_IP) -w $(PROGRAM)
	codenet -n $(C64_IP) -r

.PHONY: disk
disk:   $(DISK)

$(DISK): all
	$(C1541) -format $(NAME),AA d64 $@
	$(C1541) -attach $@ -write $(CBMFB)/fb
	$(C1541) -attach $@ -write $(CBMFB)/fb64
	$(C1541) -attach $@ -write $(PROGRAM)
	$(C1541) -attach $@ -write ../driver/c64-up2400.ser
