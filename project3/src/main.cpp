#include "asciicalc.h"
int main(){
  Ascii input_A;
  char *str = "hello world";

  input_A.setStr(*str);
  cout<<&input_A.getStr()<<endl;
  char *str2 = "Hi Tom";
  cout<<str2<<endl;
  input_A + *str2;
  cout<<&input_A.getStr()<<endl;

  return 0;
}
