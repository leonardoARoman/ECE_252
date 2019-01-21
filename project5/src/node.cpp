#include "node.h"
ShapeNode::ShapeNode(Shape *shape){
  this->shape = shape;
  nextNode = NULL;
  prevNode = NULL;
}
