#
# Makefile for linuxnet lab1
#

CC_PTHREAD_FLAGS			 = -lpthread
CC_FLAGS                     = -c 
CC_OUTPUT_FLAGS				 = -o
CC                           = gcc
RM                           = rm
RM_FLAGS                     = -f


all:
	qemu -kernel ../../linux-3.18.6/arch/x86/boot/bzImage -initrd rootfs.img
.c.o:
	$(CC) $(CC_FLAGS) $<

clean:
	$(RM) $(RM_FLAGS)  $(OBJS) $(TARGET) *.bak server client
