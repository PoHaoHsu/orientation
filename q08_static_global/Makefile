# q08_static_global

CC = g++
CFLAGS = 
OBJS1 = q08_static_global.o
OBJS2 = src/foo.o

all: q08_static_global
q08_static_global: $(OBJS1) $(OBJS2)
	$(CC) $(CFLAGS) $(OBJS1) $(OBJS2) -o q08_static_global
q08_static_global.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp -o $(OBJS1)
foo.o: src/foo.o
	$(CC) $(CFLAGS) -c src/foo.cpp -o $(OBJS2)
clean:
	rm -rf q08_static_global *.o
