# obj is a variable (saves in redundant writting)
obj = shape.o square.o cube.o node.o linklist.o main.o
build: make_build_dir
	mv *.o output build
make_build_dir: output
	mkdir build
output: $(obj)
	g++ -o output $(obj)
shape.o: shape.h shape.cpp
	@g++ -c shape.cpp
square.o: square.h square.cpp
	@g++ -c square.cpp
cube.o: cube.h cube.cpp
	@g++ -c cube.cpp
node.o: node.h node.cpp
	@g++ -c node.cpp
linklist.o: linklist.h linklist.cpp
	@g++ -c linklist.cpp
main.o: main.cpp
	@g++ -c main.cpp
clean:
	rm -r build
exe: build
	build/output
