#include <iostream>

//Flow Control

int main()
//If Statement
{
  int number1 {55};
  int number2 {60};
  
  bool result = (number1 < number2); //expression yielding the condition
  /*
  std::cout << std::boolalpha << "result : " << result << std::endl;
  std::cout <<"----------------------" <<std::endl;

  std::cout << "freestanding `if` statement" << std::endl;

  //if(result)
  if(result == true) {
    std::cout << number1 << " is less than "<< number2 << std::endl;
}

  //if(!result)
  if(!(result == true)) {
    std::cout << number1 << " is NOT less than "  << number2 << std::endl;
}*/

  //using "else" 
  std::cout << "using else clause" << std::endl;

  if(result == true) {
    std::cout << number1 << " is less than " << number2 << std::endl;
  } else {
    std::cout << number1 << " is NOT less than " << number2 << std::endl;
  }
}
