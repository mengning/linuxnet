#
# Makefile for linuxnet/lab6
#

CC_PTHREAD_FLAGS			 = -lpthread
CC_FLAGS                     = -c -m32
CC_OUTPUT_FLAGS				 = -o
CC                           = gcc
RM                           = rm
RM_FLAGS                     = -f

TARGET  =   main
OBJS    =   linktable.o  menu.o main.o

all:	$(OBJS)
	$(CC) $(CC_OUTPUT_FLAGS) $(TARGET) $(OBJS) -m32 
rootfs:
	gcc -o init linktable.c menu.c main.c -m32 -static -lpthread
	qemu -kernel ../bzImage -initrd ../rootfs.img -append "root=/dev/ram init=/init"
.c.o:
	$(CC) $(CC_FLAGS) $<

clean:
	$(RM) $(RM_FLAGS)  $(OBJS) $(TARGET) *.bak init
