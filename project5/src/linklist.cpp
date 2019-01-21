#include "linklist.h"
LinkList::LinkList(){}
void LinkList::addNode(ShapeNode *node){
  cout<<node->shape->getType()<<"("<<node->shape->getArea()<<") added to list!"<<endl;
  if (head==NULL) {
    head = node;
    tail = head;
  }else{
    node->nextNode = head;
    head->prevNode = node;
    head = node;
  }
}
ShapeNode* LinkList::findNode(string type,double area){
  ShapeNode *node;
  return node;
}
void LinkList::deletNode(string type,double area){

}
void LinkList::printList(){
  cout<<"Printing list..."<<endl;
  cout<<"Shape,Area"<<endl;
  ShapeNode *temp = tail;
  while(temp!=NULL){
    string type = temp->shape->getType();
    double area = temp->shape->getArea();
    cout<<type<<","<<area<<endl;
    temp = temp->prevNode;
  }
}
