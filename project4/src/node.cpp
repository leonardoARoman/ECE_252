#include "node.h"

template<class T>
Node<T>::Node(T *student){
  this->student = student;
  nextNode = NULL;
}
