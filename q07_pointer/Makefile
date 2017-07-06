# q07_pointer

CC = g++
CFLAGS = 
OBJS = q07_pointer.o

all: q07_pointer
q07_pointer: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o q07_pointer
q07_pointer.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp -o $(OBJS)
clean:
	rm -rf q07_pointer *.o
