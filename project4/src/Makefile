output: student.o main.o
	g++ student.o main.o -o output

#node.o: node.h student.h node.cpp
#	g++ -c node.cpp

#linklist.o: linklist.h linklist.cpp
#	g++ -c linklist.cpp

student.o: student.h student.cpp
	g++ -c student.cpp

main.o: linklist.h main.cpp
	g++ -c main.cpp
clean:
	rm *.o output
