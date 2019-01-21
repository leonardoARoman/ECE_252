#include <iostream>
#include <vector>
using namespace std;
class String{
private:
  enum WORD_TYPE {SHORT,PALINDROME,NUMBER,OTHER};
  vector<string> single;
  vector<string> palindrome;
  vector<string> withNumber;
  vector<string> norm;
  vector<string> text;
public:
  vector<string> split(string,char);
  void classify(vector<string>);
  void toString();
};
