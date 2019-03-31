#include "shape.h"
#include "triangle.h"

Triangle::Triangle(string type,double width, double height){
  this->type = type;
  this->width = width;
  this->height = height;
}
string Triangle::getType(){ return type; }
double Triangle::getArea(){ return (width*height)/2; }

Cone::Cone(string type,double width, double height)
  :Triangle(type,width,height){
  this->type = type;
  this->width = width/2; // radius
  this->height = height;
}

string Cone::getType(){ return type; }
double Cone::getArea(){ return (width*width)*3.1415*(height/3); }
double Cone::getVolume(){ return (width*width)*3.1415*(height/3); }
