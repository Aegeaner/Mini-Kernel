AS=nasm
CC=gcc
LD=ld
RM=rm
TARGET=kernel
OBJS=kasm.o kc.o

all: $(TARGET)

kasm.o:
	$(AS) -f elf32 kernel.asm -o kasm.o

kc.o:
	$(CC) -fno-stack-protector -m32 -c kernel.c -o kc.o

.PHONY: all clean

$(TARGET): $(OBJS)
	$(LD) -m elf_i386 -T link.ld -o kernel $(OBJS)

clean:
	$(RM) *.o kernel
