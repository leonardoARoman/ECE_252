#include <iostream>
using namespace std;
class Shape{
protected:
  string type;
  double lenght;
public:
  Shape(string,double);
  void setType(string);
  string getType();
  void setLenght(double);
  double getLenght();
  virtual double getArea();
};
