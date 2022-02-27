#include <iostream>
#include <string>

int main()
// Integer Modifiers
{
  signed int value1{10};
  signed int value2{-300};

  unsigned int value3{4};
  unsigned value4{-5}; // compiler error

  std::cout << "Value1 : " << value1 << std::endl;
  std::cout << "Value2 : " << value2 << std::endl;
  std::cout << "sizeof(value1) : " << sizeof(value1) << std::endl;
  std::cout << "sizeof(value2) : " << sizeof(value1) << std::endl;
}