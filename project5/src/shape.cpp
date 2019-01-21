#include "shape.h"
Shape::Shape(string type, double lenght){
  cout<<"Message (shape class): A "<<type<<" shape created!"<<endl;
  this->type = type;
  this->lenght = lenght;
}
void Shape::setType(string type){
  this->type = type;
}
string Shape::getType(){ return type; }
void Shape::setLenght(double base){
  this->lenght = lenght;
}
double Shape::getLenght(){ return lenght; }
double Shape::getArea(){ return 0; }
