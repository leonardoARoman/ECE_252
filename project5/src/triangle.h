#include <iostream>
using std::string;

class Triangle:public Shape{
protected:
  double height;
public:
  Triangle(string,double,double);
  string getType();
  double getArea();
};

class Cone:public Triangle{
public:
  Cone(string,double,double);
  string getType();
  double getArea();
  double getVolume();
};
