#include <iostream>

template<typename T> class LinkList;

template<typename T>
class ShapeNode{
public:
  T *data;
  ShapeNode *nextNode, *prevNode;
  friend class LinkList<T>;
public:
  ShapeNode(T*);
  T* getData();
};

template<typename T>
class LinkList{
private:
  ShapeNode<T> *head,*tail;
public:
  LinkList();
  void addNode(ShapeNode<T>*);
  void linklist();
};
