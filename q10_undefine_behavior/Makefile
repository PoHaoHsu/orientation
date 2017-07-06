# q10_undefine_behavior

CC = g++
CFLAGS = 
OBJS = q10_undefine_behavior.o

all: q10_undefine_behavior
q10_undefine_behavior: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o q10_undefine_behavior
q10_undefine_behavior.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp -o $(OBJS)
clean:
	rm -rf q10_undefine_behavior *.o
