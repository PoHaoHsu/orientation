# q09_struct

CC = g++
CFLAGS = 
OBJS = q09_struct.o

all: q09_struct
q09_struct: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o q09_struct
q09_struct.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp -o $(OBJS)
clean:
	rm -rf q09_struct *.o
