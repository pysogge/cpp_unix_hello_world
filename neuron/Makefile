CC = g++
CFLAGS = -Wall -g

main: main.o network.o neuron.o
	$(CC) $(CFLAGS) -o main main.o network.o neuron.o
 
main.o: main.cpp network.h neuron.h
	$(CC) $(CFLAGS) -c main.cpp
	echo "run with: ./main"