#include "shape.h"
class ShapeNode{
private:
  Shape *shape;
  ShapeNode *nextNode, *prevNode;
  friend class LinkList;
public:
  ShapeNode(Shape*);
};
