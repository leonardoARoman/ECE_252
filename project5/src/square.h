#include <iostream>
using std::string;

class Square:public Shape{
protected:
  double lenght;
public:
  Square();
  Square(string,double, double);
  string getType();
  double getArea();
};

class Cube:public Square{
protected:
  double height;
public:
  Cube(string,double, double, double);
  string getType();
  double getArea();// for runtime polymorphism
  double getVolume();// class method
};
