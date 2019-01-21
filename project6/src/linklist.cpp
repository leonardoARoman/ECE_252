#include "linklist.h"
node::node_t* make_node(string n, string id){
  node::node_t *student = new node::node_t;
  student->name = n;
  student->ruid = id;
  student->next = NULL;
  student->prev = NULL;
  return student;
}
void print_info(node::node_t n){
  cout<<n.ruid<<","<<n.name<<endl;
}
void LinkList::addNode(node::node_t *n){
  if (head == NULL) {
    head = n;
    tail = head;
  }else{
    n->next = head;
    head->prev = n;
    head = n;
  }
}
void LinkList::deleteNode(string str){
  node::node_t *temp = head->next;
  if (head->name==str||head->ruid==str) {
    cout<<head->name<<" deleted!"<<endl;
    head = head->next;
    head->prev = NULL;
    return;
  }
  if (tail->name==str||tail->ruid==str) {
    cout<<tail->name<<" deleted!"<<endl;
    tail = tail->prev;
    tail->next = NULL;
    return;
  }
  while (temp!=NULL) {
    if (temp->name==str||temp->ruid==str) {
      cout<<temp->name<<" deleted!"<<endl;
      temp->prev->next = temp->next;
      temp->next->prev = temp->prev;
      return;
    }
    temp = temp->next;
  }
}
void LinkList::printList(){
  cout<<"RUID,Name"<<endl;
  node::node_t *temp = tail;
  while (temp!=NULL) {
    print_info(*temp);
    temp = temp->prev;
  }
}
