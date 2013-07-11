TCHAIN = arm-none-eabi
CC = $(TCHAIN)-gcc
LD = $(TCHAIN)-ld
OCP = $(TCHAIN)-objcopy
SIZE = $(TCHAIN)-size

CFLAGS_ = $(CFLAGS) -march=armv7-m -mcpu=cortex-m3 -mthumb -mfloat-abi=soft -Wall -g -O0
LDFLAGS_ = $(LDFLAGS) -nostartfiles

all: base_demo.bin sizelist

sizelist: base_demo.elf
	$(SIZE) $<

%.bin: %.elf
	$(OCP) -O binary $< $@

%.srec: %.elf
	$(OCP) -O srec $< $@

base_demo.elf: main.o startup.o stm32f100rb.ld
	$(LD) $(LDFLAGS_) -Tstm32f100rb.ld -o $@ main.o startup.o

%.o: %.c
	$(CC) $(CFLAGS_) -c -o $@ $<

clean:
	rm -v *.o *.elf *.srec *.bin
