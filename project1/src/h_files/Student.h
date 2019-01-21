#include <iostream>
//#include <vector>
#include "record.h"
using namespace std;
class students{
private:
  vector<record::record_t> student_recs;
public:
  void print_list();
  void add_record(record::record_t);
  record::record_t find_record(int);
  void delete_record(record::record_t);
  void change_name(int,string);
};
