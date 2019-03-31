#include <iostream>
/*
  * @author Leonardo Roman
  * Abstract class Shape
*/
class Shape{
protected:
  double width;
  std::string type;
public:
  // Pure virtual class (abstract class)
  virtual double getArea() = 0;
  virtual std::string getType() = 0;
};
