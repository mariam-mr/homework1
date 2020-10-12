
all: main
main: main.o functions.o 
	gcc main.o functions.o -o main

main.o: main.c 
	gcc -c main.c -o main.o

functions.o : functions.c 
	gcc -c functions.c -o functions.o 

clean:
	rm*.o main
link:	
