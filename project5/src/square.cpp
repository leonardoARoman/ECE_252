#include "square.h"
Square::Square(string type, double lenght, double width)
  :Shape(type,lenght){
    cout<<"Message (square class): A "<<type<<" shape created!"<<endl;
    this->width = width;
}
void Square::setWidth(double width){
  this->width = width;
}
double Square::getWidth(){ return width; }
double Square::getArea(){ return width*lenght; }
