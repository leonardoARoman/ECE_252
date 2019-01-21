#include "student.h"
#include "linklist.h"
int main(){
  Student s1("Leonardo",123);
  cout <<"Name: "<<s1.getName()<<"\nRUID: "<<s1.getRuid()<<endl;
  Student *s2 = new Student("Marcos",234);
  Node<Student> *node = new Node<Student>(s2);
  node->getT()->printInfo();
  /*
  LinkedList *list1 = new LinkedList("list 1");
  Node *node = new Node("Leonardo",123);
  list1->addNode(node);
  list1->addNode(new Node("Juan",234));
  list1->addNode(new Node("Marcos",345));
  LinkedList *list2 = new LinkedList("list 2");
  list2->addNode(new Node("Rubens",456));
  list2->addNode(new Node("Sofia",567));
  cout<<"printing "<<list1->getName()<<endl;
  list1->printList();
  cout<<"printing "<<list2->getName()<<endl;
  list2->printList();
  LinkedList *list3 = list1->addList(list2);
  list3->setName("list 3");
  cout<<"printing "<<list3->getName()<<endl;
  list3->printList();*/
  //list1-> + list2;
  return 0;
}
