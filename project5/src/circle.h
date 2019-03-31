#include <iostream>
using std::string;

class Circle:public Shape{
public:
  Circle(string,double);
  string getType();
  double getArea();
};

class Sphere:public Circle{
public:
  Sphere(string,double);
  string getType();
  double getArea();
  double getVolume();
};
