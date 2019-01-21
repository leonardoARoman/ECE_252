output: asciicalc.o main.o
	g++ asciicalc.o main.o -o output
asciicalc.o: asciicalc.h asciicalc.cpp
	g++ -c asciicalc.cpp
main.o: main.cpp
	g++ -c main.cpp
clean:
	rm *.o output
