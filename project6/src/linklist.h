#include <iostream>
using namespace std;

namespace node{
  struct node_t{
    string name, ruid;
    node_t *next,*prev;
  };
}
node::node_t* make_node(string,string);
void print_info(node::node_t);

class LinkList{
private:
  node::node_t *head, *tail;
  string name;
public:
  void addNode(node::node_t*);
  void deleteNode(string);
  void printList();
};
