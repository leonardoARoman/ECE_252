#include "node.h"
class LinkList{
private:
  ShapeNode *head, *tail;
public:
  LinkList();
  void addNode(ShapeNode*);
  ShapeNode* findNode(string,double);
  void deletNode(string,double);
  void printList();
};
