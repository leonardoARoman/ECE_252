#include <iostream>
using namespace std;

template<class T>
class Node{
private:
  T *student;
  Node<T> *nextNode;
  friend class LinkedList;
public:
  Node(T*);
  T* getT();
  //~Node();
};
template<class T>
Node<T>::Node(T *student){
  this->student = student;
  nextNode = NULL;
}
template<class T>
T* Node<T>::getT(){ return student;}

template<typename T>
class LinkedList{
private:
  Node<T> *head,*tail;
  string name;
public:
  LinkedList(string);
  void setName(string);/*
  string getName();
  void addNode(T*);
  void deleteNode(Node*);
  T* findNode(string);
  T* findNode(int);
  void printList();
  LinkedList* addList(LinkedList*);
  LinkedList* operator+(LinkedList*);*/// does not work!
  //LinkedList operator=(LinkedList*);// l3=newll
};
template<class T>
LinkedList<T>::LinkedList(string name){
  this->name = name;
}
template<class T>
void LinkedList<T>::setName(string name){
  this->name = name;
}/*
string LinkedList::getName(){
  return name;
}
void LinkedList::addNode(Node *node) {
  cout<<node->name<<" added to the list..."<<endl;
  if (head == NULL) {
    head = node;
    tail = head;
  }else{
    node->nextNode = head;
    head->prevNode = node;
    head = node;
  }
}
void LinkedList::deleteNode(Node *node){
  if (head == node) {
    head = head->nextNode;
  }
}
Node* LinkedList::findNode(string name){
  Node *node;
  Node *temp = head;
  while (temp->nextNode!=NULL) {
    if (temp->name==name) {
      node = temp;
      break;
    }
    temp = temp->nextNode;
  }
  return node;
}
Node* LinkedList::findNode(int ruid){
  Node *node;
  Node *temp = head;
  while (temp->nextNode!=NULL) {
    if (temp->ruid==ruid) {
      node = temp;
      break;
    }
    temp = temp->nextNode;
  }
  return node;
}
void LinkedList::printList(){
  cout<<"name,ruid"<<endl;
  Node *temp = tail;
  while(temp!=NULL){
    cout<<temp->name<<","<<temp->ruid<<endl;
    temp = temp->prevNode;
  }
}
LinkedList* LinkedList::addList(LinkedList *list){
  this->head->prevNode = list->tail;
  return this;
}
LinkedList* LinkedList::operator+(LinkedList *list){
  this->head->prevNode = list->tail;
  return this;
}*/
