#include <iostream>
using namespace std;
class Ascii{
private:
  char *str;
public:
  void setStr(char&);
  char& getStr();
  void operator+(char&);
  Ascii operator-(char&);
};
