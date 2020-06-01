CC = gcc
CFLAGS = -g -m32 -Wall -D_LARGEFILE_SOURCE -D_FILE_OFFSET_BITS=64
TARGET = maxfsize
OBJECTS = maxfsize.o

.SUFFIXES : .c .o

all : $(TARGET)

$(TARGET) : $(OBJECTS)
	$(CC) $(CFLAGS) $^ -o $@
	
.c .o : 
	$(CC) $(CFLAGS) -c $<

clean :
	rm *.o $(TARGET)
