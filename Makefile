# Makefile for Writing Make Files Example
 
# *****************************************************
# Variables to control Makefile operation
## -Wall = show all possible warnings, -g = debug
 
CC = g++
CFLAGS = -Wall -g
 
# ****************************************************
# Targets needed to bring the executable up to date
 
single_class_main: single_class_main.o single_class.o
	$(CC) $(CFLAGS) -o single_class_main single_class_main.o single_class.o
## this simply equals: g++ -wall –g –o single_class_main single_class_main.o single_class.o
 
# The single_class_main.o target can be written more simply
 
single_class_main.o: single_class_main.cpp single_class.h
	$(CC) $(CFLAGS) -c single_class_main.cpp
 
single_class.o: single_class.h
 
## add additional, e.g. Square.o: Square.h Point.h