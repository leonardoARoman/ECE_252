#include "h_files/Student.h"
//#include "record.h"
void students::print_list(){
  cout<<"RUID\tFirst Name\tLast Name\tQuiz Score\tExam Score"<<endl;
  for (size_t i = 0; i < student_recs.size(); i++) {
    cout<<student_recs[i].ruid<<"\t"
    <<student_recs[i].first_name<<"\t"
    <<student_recs[i].last_name<<"\t";
    vector<double> quiz_grades = student_recs[i].quiz_grades;
    //double exam_grades[3] = student_recs[i].exam_grades;
    for (size_t i = 0; i < quiz_grades.size(); i++) {
      cout<<quiz_grades[i]<<endl;
      cout<<"\t\t\t";
    }
  }
}

void students::add_record(record::record_t record){
  if (student_recs.size()==0) {
    student_recs.push_back(record);
  }
  else if (record.ruid > student_recs.back().ruid) {
    student_recs.push_back(record);
  }
  else if (record.ruid < student_recs.front().ruid) {
    //student_recs.insert(student_recs.begin(),record,student_recs.begin()+1);
  }
}

void students::delete_record(record::record_t record){
  for (size_t i = 0; i < student_recs.size(); i++) {
    if (record.ruid == student_recs[i].ruid) {
      //student_recs.erase(i);
    }
  }
}
record::record_t students::find_record(int ruid){
  record::record_t record;
  for (size_t i = 0; i < student_recs.size(); i++) {
    if (student_recs[i].ruid == ruid) {
      record = student_recs[i];
    }
  }
  return record;
}
void students::change_name(int ruid, string name){
  for (size_t i = 0; i < student_recs.size(); i++) {
    if (student_recs[i].ruid == ruid) {
      student_recs[i].first_name = name;
    }
  }
}
int main(){return 0;}
/*
int main(){
  students list;
  record::record_t studen1;
  studen1.first_name = "leonardo";
  studen1.last_name = "roman";
  studen1.ruid = 123;
  studen1.quiz_grades.push_back(100);
  studen1.exam_grades[0] =100;
  list.add_record(studen1);
  list.print_list();
  #if __cplusplus==201402L
       std::cout << "C++14" << std::endl;
       #elif __cplusplus==201103L
       std::cout << "C++11" << std::endl;
       #else
       std::cout << "C++" << std::endl;
       #endif

       return 0;
}
*/
