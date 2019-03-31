#include <iostream>
#include "shape.h"
#include "square.h"
#include "triangle.h"
#include "circle.h"
#include "linklist.cpp"

//#include "linklist.h"
int main(){
  std::cout << "Hello from shape class" << std::endl;
  Square square("square",5.0,4.0);
  Cube cube("cube",5.0,4.0,3.0);
  Triangle triangle("triangle",4.0,5.0);
  Cone cone("cone",4.0,5.0);
  Circle circle("circle",3.0);
  Sphere sphere("sphere",3.0);

  ShapeNode<Shape> node1(&square);
  ShapeNode<Shape> node2(&cube);
  ShapeNode<Shape> node3(&triangle);
  ShapeNode<Shape> node4(&cone);
  ShapeNode<Shape> node5(&circle);
  ShapeNode<Shape> node6(&sphere);

  LinkList<Shape> linklist;
  linklist.addNode(&node1);
  linklist.addNode(&node2);
  linklist.addNode(&node3);
  linklist.addNode(&node4);
  linklist.addNode(&node5);
  linklist.addNode(&node6);

  linklist.linklist();
  //std::cout << "node square area: " << node.getData()->getArea() <<std::endl;

  return 0;
}
