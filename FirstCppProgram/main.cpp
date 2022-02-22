#include <iostream> //3rd party library to recognise commands

int main() // main function --starting point of C++ program (entry point) executed in order
{
  for (int i = 0; i < 10; i++)
  {
    // compile time error
    std::cout << "Dharma" << std::endl;
    // Runtime error
    int value = 7 / 0;
    std::cout << "value : " << value << std::endl;
    return 0;
  }
}