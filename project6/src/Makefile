OBJ = linklist.o main.o
#build: make_build
#	mv *.o output build
#make_build: output
#	mkdir build
output: $(OBJ)
	g++ -o output $(OBJ)
linklist.o: linklist.h linklist.cpp
	g++ -c linklist.cpp
main.o: main.cpp
	g++ -c main.cpp
exe:
	build/output
clean:
	rm *.o output
