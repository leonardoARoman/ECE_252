#include "cube.h"
Cube::Cube(string type,double lenght,double width,double height)
  :Square(type,lenght,width){
    cout<<"Message (cube class): A "<<type<<" shape created!"<<endl;
    this->height = height;
}
void Cube::setHeight(double height){
  this->height = height;
}
double Cube::getHeight(){ return height; }
double Cube::getArea(){ return height*width*lenght; }
