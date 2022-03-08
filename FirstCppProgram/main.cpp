#include <iostream>
// Data Ops

int main()
// Prefix & Postfix
{
  int value{5};

  // Increment + 1
  value = value + 1;
  std::cout << "The value is : " << value << std::endl; // 6

  value = 5; // Reset the value 5

  // Decrement - 1
  value = value - 1;
  std::cout << "The value is : " << value << std::endl; // 4
  std::cout << std::endl;
}
