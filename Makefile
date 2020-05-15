all:
	g++ -g -Wall -c -o foo.o foo.cpp
	gcc -g -Wall -o main main.c foo.o

clean:
	rm -f *~ *.o main
