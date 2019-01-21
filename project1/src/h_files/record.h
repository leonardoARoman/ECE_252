#include <iostream>
#include <vector>
namespace record{
  struct record_t{
    int ruid;
    std::string first_name;
    std::string last_name;
    std::vector<double> quiz_grades;
    double exam_grades[3];
  };
}
