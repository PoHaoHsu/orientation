# q06_numbers

CC = g++
CFLAGS = 
OBJS = q06_numbers.o

all: q06_numbers
q06_numbers: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o q06_numbers
q06_numbers.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp -o $(OBJS)
clean:
	rm -rf q06_numbers *.o
