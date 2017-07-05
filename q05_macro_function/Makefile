# q05_macro_function

CC = g++
CFLAGS = 
OBJS = q05_macro_function.o

all: q05_macro_function
q05_macro_function: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o q05_macro_function
q05_macro_function.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp -o $(OBJS)
clean:
	rm -rf q05_macro_function *.o
