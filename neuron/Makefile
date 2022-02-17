CC = g++
CFLAGS = -Wall -g

main: main.o neuron.o
	$(CC) $(CFLAGS) -o main main.o neuron.o
 
main.o: main.cpp neuron.h
	$(CC) $(CFLAGS) -c main.cpp