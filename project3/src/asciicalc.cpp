#include "asciicalc.h"
void Ascii::setStr(char &c){
  str = &c;
}
char& Ascii::getStr(){
  return *str;
}
void Ascii::operator+(char &c){
  char *s = &c;
  int size = 0;
  if (sizeof(s)>sizeof(str)) {
    size = sizeof(s);
  }else{
    size = sizeof(str);
  }
  char newStr[size];
  for (size_t i = 0; i<size;i++) {
    if (s[i]!='\0'&&str[i]!='\0') {
      int n = (((int)s[i]+(int)str[i])%122);
      if (n < 48) {
        n+=48;
      }
      newStr[i] = (char)n;
    }if (s[i]=='\0') {
      newStr[i] = str[i];
    }if (str[i]=='\0'){
      newStr[i] = s[i];
    }
  }
  str = newStr;
}
Ascii Ascii::operator-(char &c){
  Ascii ascii;
  return ascii;
}
