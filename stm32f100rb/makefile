TCHAIN = arm-none-eabi
CC = $(TCHAIN)-gcc
LD = $(TCHAIN)-ld
OCP = $(TCHAIN)-objcopy
SIZE = $(TCHAIN)-size

CFLAGS_ = $(CFLAGS) -march=armv7-m -mcpu=cortex-m3 -mthumb -mfloat-abi=soft -Wall -g -O0 -ffreestanding
LDFLAGS_ = $(LDFLAGS) -nostartfiles

all: reset_demo.bin gpio_demo.bin sizelist

sizelist: reset_demo.elf gpio_demo.elf
	$(SIZE) *.elf

%.bin: %.elf
	$(OCP) -O binary $< $@

%.srec: %.elf
	$(OCP) -O srec $< $@

%.elf: %.o startup.o stm32f100rb.ld
	$(LD) $(LDFLAGS_) -Tstm32f100rb.ld -o $@ $< startup.o

%.o: %.c register.h portconfig.h
	$(CC) $(CFLAGS_) -c -o $@ $<

clean:
	rm -v *.o *.elf *.srec *.bin
