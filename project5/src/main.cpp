#include "cube.h"
//#include "linklist.h"
int main(){
  Shape line("line",5);
  Shape *square = new Square("square",6,6);
  Shape *cube = new Cube("cube",5,5,5);
  //Square square("square",5,5);
  //Cube cube("cube",5,5,5);
  cout<<"The area of the line is "<<line.getArea()<<endl;
  cout<<"The area of the square is "<<square->getArea()<<endl;
  cout<<"The area of the cube is "<<cube->getArea()<<endl;
  ShapeNode node(&line);
  ShapeNode node2(square);
  ShapeNode node3(cube);
  LinkList *ll = new LinkList();
  ll->addNode(&node);
  ll->addNode(&node2);
  ll->addNode(&node3);
  ll->printList();
  return 0;
}
