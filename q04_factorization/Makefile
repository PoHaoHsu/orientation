# q04_factorization

CC = g++
CFLAGS = 
OBJS = q04_factorization.o

all: q04_factorization
q04_factorization: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o q04_factorization
q04_factorization.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp -o $(OBJS)
clean:
	rm -rf q04_factorization *.o
