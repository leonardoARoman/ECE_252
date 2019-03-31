#include "shape.h"
#include "square.h"
using std::string;
Square::Square(string type,double width, double lenght){
    this->type = type;
    this->width = width;
    this->lenght = lenght;
    std::cout << "Square instance created!" << std::endl;
}
Cube::Cube(string type,double width, double lenght,double height)
  :Square(type,width,lenght){
    this->height = height;
    std::cout << "Cube instance created!" << std::endl;
}
string Square::getType(){ return type; }
string Cube::getType(){ return type; }
double Square::getArea(){ return width*lenght; }
double Cube::getArea(){return width*lenght*height; }
double Cube::getVolume(){ return getArea()*height; }
