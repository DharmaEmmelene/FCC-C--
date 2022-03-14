#include <iostream>
// Data Ops

int main()
// Output formatting
{
  // std::endl : places a newline character on the output stream. Same as placing '\n'
  std::cout << "Hello";
  std::cout << "World!";

  std::cout << std::endl;
  std::cout << "------------" << std::endl;

  std::cout << "Hello" << std::endl;
  std::cout << "World!" << std::endl;

  std::cout << "------------" << std::endl;

  std::cout << "Hello\n";
  std::cout << "World\n";
}