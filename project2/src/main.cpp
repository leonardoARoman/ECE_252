#include "String.h"
int main(){
  string str = "Hi, Nice 2 meet u, No x in Nixon,to go";
  cout<<str<<endl;
  String sentance;
  sentance.toString();
  sentance.classify(sentance.split(str,','));
  sentance.toString();
  return 0;
}
