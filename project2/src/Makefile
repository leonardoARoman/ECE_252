output: String.o main.o
	g++ String.o main.o -o output
String.o: String.h String.cpp
	g++ -c String.cpp
main.o: main.cpp
	g++ -c main.cpp
clean:
	rm *.o output
