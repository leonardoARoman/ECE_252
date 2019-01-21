#include <iostream>
using namespace std;

template<typename T>
class Node{
private:
  T *student;
  Node *nextNode, *prevNode;
  //friend class LinkedList;
public:
  Node(T*);
  //~Node();
};
