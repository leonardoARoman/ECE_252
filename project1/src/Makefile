output: student.o main.o
	g++ student.o main.o -o output

student.o: h_files/record.h h_files/Student.h student.cpp
	g++ -c student.cpp
main.o: main.cpp
	g++ -c main.cpp

clean:
	rm *.o output
