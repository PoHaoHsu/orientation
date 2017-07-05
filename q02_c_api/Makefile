# q02_c_api

CC = g++
CFLAGS = 
OBJS = q02_c_api.o

all: q02_c_api
q02_c_api: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o q02_c_api
q02_c_api.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp -o $(OBJS)
clean:
	rm -rf q02_c_api *.o
