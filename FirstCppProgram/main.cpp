#include <iostream>
// Data Ops

int main()
// Relational Ops
{
  int number1{45};
  int number2{60};
  std::cout << "number1 : " << number1 << std::endl;
  std::cout << "number2 : " << number2 << std::endl;

  std::cout << "-----------Comparing variables------------" << std::endl;

  std::cout << std::boolalpha; // True/false instead of 1 / 0

  std::cout << "number1 < number2 : " << (number1 < number2) << std::endl;
}