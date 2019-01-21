#include <iostream>
using namespace std;
class Student{
private:
  string name;
  int ruid;
public:
  Student(string,int);
  void setName(string);
  string getName();
  void setRuid(int);
  int getRuid();
  void printInfo();
};
