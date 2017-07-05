# q03_foo

CC = g++
CFLAGS = 
OBJS = q03_foo.o

all: q03_foo
q03_foo: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o q03_foo
q03_foo.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp -o $(OBJS)
clean:
	rm -rf q03_foo *.o
