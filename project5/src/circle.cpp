#include "shape.h"
#include "circle.h"

Circle::Circle(string type,double radius){
  this->type = type;
  this->width = radius;
}
string Circle::getType(){ return type; }
double Circle::getArea(){ return (width*width)*3.1415; }

Sphere::Sphere(string type,double radius):Circle(type,radius){}

string Sphere::getType(){ return type; }
double Sphere::getArea(){ return (width*width)*3.1415*4; }
double Sphere::getVolume(){ return (width*width)*3.1415*4; }
