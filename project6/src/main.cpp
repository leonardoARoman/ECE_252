#include "linklist.h"
#include <fstream>
#include <vector>
#include <string>

fstream file;

void menu(LinkList *);
vector<string> split(string,char);

int main(){
  string line;
  LinkList *ll = new LinkList();
  file.open("student_record.txt",ios::in);
  if (file) {
    cout<<"file exists!"<<endl;
    while (getline(file,line)) {
      vector<string> vec = split(line,',');
      ll->addNode(make_node(vec[0],vec[1]));
    }
    file.close();
  }else{
    cout<<"creating file..."<<endl;
    file.open("student_record.txt",ios::out);
    cout<<"student_record.txt created!"<<endl;
    file.close();
  }
  menu(ll);
  return 0;
}
vector<string> split(string s,char c){
  vector<string> words;
  string str="";
  for (size_t i = 0; i < s.length(); i++) {
    if (s[i]==c) {
      words.push_back(str);
      str="";
      continue;
    }
    str+=s[i];
  }
  words.push_back(str);
  return words;
}
void menu(LinkList *list){
  string option,name,id;
  while (true) {
    cout<<"1. Add node to list\n2. Remove node from list"<<endl;
    cout<<"3. Print list\n4. Print element of list"<<endl;
    cout<<"5. Sort list\n6. Quit"<<endl;
    cout<<"Enter option: ";
    cin>>option;
    if (option=="1") {
      cout<<"Enter name: ";
      cin>>name;
      cout<<"Enter ruid: ";
      cin>>id;
      file.open("student_record.txt",ios::in | ios::out | ios::ate);
      file<<name<<","<<id<<"\n";
      file.close();
      list->addNode(make_node(name,id));
    }
    else if (option=="2") {
      cout<<"enter name or ruid: ";
      cin>>name;
      list->deleteNode(name);
    }
    else if (option=="3") {
      list->printList();
    }
    else if (option=="6") {
      cout<<"Good bye!"<<endl;
      return;
    }else{
      cout<<"Not a valid option!"<<endl;
      continue;
    }
  }
}
