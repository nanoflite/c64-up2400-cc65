.PHONY: all clean

all:
	make -C driver
	make -C example disk

clean:
	make clean -C driver
	make clean -C example
