#include "linklist.h"

template<typename T>
ShapeNode<T>::ShapeNode(T *data){
  this->data = data;
  nextNode = 0;
  prevNode = 0;
}
template<typename T>
T* ShapeNode<T>::getData(){
  return this->data;
}

template<typename T>
LinkList<T>::LinkList(){
  head = 0;
  tail = 0;
}

template<typename T>
void LinkList<T>::addNode(ShapeNode<T> *node){
  if (head == 0) {
    head = node;
  }else{
    node->nextNode = head;
    head->prevNode = node;
    head = node;
  }
}

template<typename T>
void LinkList<T>::linklist(){
  ShapeNode<T> *temp = head;
  while (temp!=0) {
    std::cout<<temp->getData()->getType()<<" area "<<temp->getData()->getArea()<<std::endl;
    temp = temp->nextNode;
  }
}
