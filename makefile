all: main

main: moviesMain.o movies.o 
	gcc -o moviesMain  moviesMain.o movies.o 

moviesMain.o: moviesMain.c movies.h
	gcc -c moviesMain.c 
movies.o: movies.c movies.h
	gcc -c movies.c 

clean:
	rm -f *.o main