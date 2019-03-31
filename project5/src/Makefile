# obj is a variable (saves in redundant writting)
obj = linklist.o shape.o square.o triangle.o circle.o main.o
#build: make_build_dir
#	mv *.o output build
#make_build_dir: output
#	mkdir build
output: $(obj)
	g++ -o output $(obj)
linklist.o: linklist.cpp
	@g++ -c linklist.cpp
shape.o: shape.h shape.cpp
	@g++ -c shape.cpp
square.o: square.h square.cpp
	@g++ -c square.cpp
triangle.o: triangle.h triangle.cpp
	@g++ -c triangle.cpp
circle.o: circle.h circle.cpp
	@g++ -c circle.cpp
main.o: main.cpp
	@g++ -c main.cpp
clean:
	rm *.o output
