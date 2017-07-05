# q01_2d_array

CC = g++
CFLAGS = 
OBJS = q01_2d_array.o

all: q01_2d_array
q01_2d_array: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o q01_2d_array
q01_2d_array.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp -o $(OBJS)
clean:
	rm -rf q01_2d_array *.o
