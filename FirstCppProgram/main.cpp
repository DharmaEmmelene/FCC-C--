#include <iostream>
// Data Ops

int main()
// Logical Ops
{
  bool a{true};
  bool b{false};
  bool c{true};

  std::cout << std::boolalpha;

  // AND : Evaluates to true when all operands are true. A single false operand will drag the entire expression to evaluating false
  std::cout << "---------------Basic AND operations-----------------" << std::endl;
  std::cout << "a && b : " << (a && b) << std::endl;           // false
  std::cout << "a && c : " << (a && c) << std::endl;           // true
  std::cout << "a && b && c : " << (a && b && c) << std::endl; // false
}