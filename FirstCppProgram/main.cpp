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
  std::cout << "Postfix Increment & decrement" << std::endl;

  value = 5;                                                             // Reset value
  std::cout << "The value is (incrementing) : " << value++ << std::endl; // 5
  std::cout << "The value is : " << value << std::endl;                  // 6
  std::cout << std::endl;

  value = 5;                                                             // Reset value
  std::cout << "The value is (decrementing) : " << value-- << std::endl; // 5
  std::cout << "The value is : " << value << std::endl;                  // 4

  std::cout << "Prefix Increment & decrement" << std::endl;

  value = 5; // Reset value

  ++value;
  std::cout << "The value is (prefix++) : " << value << std::endl; // 6

  value = 5;                                                                  // Reset value
  std::cout << "The value is (prefix++ in place) : " << ++value << std::endl; // 6

  std::cout << std::endl;
}