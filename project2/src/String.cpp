#include "String.h"
#include <locale>

bool isSingleWord(string);
bool isPalindrome(string);
bool hasNumber(string);
vector<string> agregate(vector<string>,vector<string>);

vector<string> String::split(string s,char c){
  vector<string> vec;
  string str = "";
  for (size_t i = 0; i < s.length(); i++) {
    if (s[i]!=c) {
      if (s[i]==' '&&s[i-1]==c) {
        str="";
        continue;
      }
      str+=s[i];
      continue;
    }
    vec.push_back(str);
    str="";
  }
  vec.push_back(str);
  return vec;
}
void String::classify(vector<string> vec){
  for (size_t i = 0; i < vec.size(); i++) {
    if (isSingleWord(vec[i])) {
      single.push_back(vec[i]);
      continue;
    }
    else if (isPalindrome(vec[i])) {
      palindrome.push_back(vec[i]);
      continue;
    }
    else if (hasNumber(vec[i])) {
      withNumber.push_back(vec[i]);
      continue;
    }
    else {
      norm.push_back(vec[i]);
      continue;
    }
  }
  text = agregate(text,single);
  text = agregate(text,palindrome);
  text = agregate(text,withNumber);
  text = agregate(text,norm);
}
void String::toString(){
  for (size_t i = 0; i < text.size(); i++) {
    cout<<text[i];
    if (i<text.size()-1) {
      cout<<", ";
    }
  }cout<<"."<<endl;
}
/*
  HELPER METHODS 
*/
bool isSingleWord(string s){
  for (size_t i = 0; i < s.length(); i++) {
    if (s[i]==' ') {
      return false;
    }
  }
  return true;
}
bool isPalindrome(string s){
  locale loc;
  string str = "";
  for (size_t i = 0; i < s.length(); i++) {
    if (s[i]==' ') {
      continue;
    }
    str+=tolower(s[i],loc);
  }
  int half = str.length()/2;
  for (size_t i = 0; i < half; i++) {
    if ((int)str[i]!=(int)str[(str.length()-1)-i]) {
      return false;
    }
  }
  return true;
}
bool hasNumber(string s){
  for (size_t i = 0; i < s.length(); i++) {
    if ((int)s[i]>=48&&(int)s[i]<=57) {
      return true;
    }
  }
  return false;
}
vector<string> agregate(vector<string> vec1, vector<string> vec2){
  for (size_t i = 0; i < vec2.size(); i++) {
    vec1.push_back(vec2[i]);
  }
  return vec1;
}
