obj = bank_account.o main.o
output: $(obj)
	g++ -o output $(obj)
bank_account.o: bank_account.h bank_account.cpp
	g++ -c bank_account.cpp
main.o: main.cpp
	g++ -c main.cpp
clean:
	rm *.o output
