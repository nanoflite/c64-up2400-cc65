SOURCES =
ASOURCES = c64-up2400.s
CC65_TARGET = c64
PROGRAM = c64-up2400.ser

CC      = $(CC65_HOME)/bin/cl65
CFLAGS  = -t $(CC65_TARGET) -O
LDFLAGS = -t $(CC65_TARGET) --module

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
	$(RM) $(ASOURCES:.s=.o) $(SOURCES:.c=.o) $(SOURCES:.c=.d) $(PROGRAM) $(PROGRAM).map $(PROGRAM).lbl

