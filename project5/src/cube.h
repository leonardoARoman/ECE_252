#include "square.h"
class Cube:public Square{
private:
  double height;
public:
  Cube(string,double,double,double);
  void setHeight(double);
  double getHeight();
  double getArea();
};
