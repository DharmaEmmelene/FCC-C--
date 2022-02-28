#include <iostream>

int main()
// Assignments
{
  int var1{123}; // Declare & init
  std::cout << "var1 : " << var1 << std::endl;

  var1 = 55; // Assign
  std::cout << "var1 : " << var1 << std::endl;

  std::cout << std::endl;

  double var2{44.55}; // Declare & init
  std::cout << "var2 : " << var2 << std::endl;

  var2 = 99.99; // Assign
  std::cout << "var2 : " << var2 << std::endl;

  std::cout << std::endl;

  bool state{false}; // Declare & init
  std::cout << std::boolalpha;
  std::cout << "state : " << state << std::endl;

  state = true;
  std::cout << "state : " << state << std::endl;
}
