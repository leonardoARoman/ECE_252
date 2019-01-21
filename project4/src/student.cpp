#include "student.h"
Student::Student(string name, int ruid){
  this->name = name;
  this->ruid = ruid;
}
void Student::setName(string name){
  this->name = name;
}
string Student::getName(){ return name; }
void Student::setRuid(int ruid){
  this->ruid = ruid;
}
int Student::getRuid(){ return ruid; }
void Student::printInfo(){
  cout<<"Name: "<<name<<"\nRUID: "<<ruid<<endl;
}
