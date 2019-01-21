#include <iostream>
#include "linklist.h"
using namespace std;
class Square:public Shape{
protected:
  double width;
public:
  Square(string,double,double);
  void setWidth(double);
  double getWidth();
  double getArea();
};
