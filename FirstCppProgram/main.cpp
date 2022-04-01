#include <iostream>

//Flow Control

int main()
//If Statement
{
  int number1 {65};
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
}

  //using "else" 
  std::cout << "using else clause" << std::endl;

  if(result == true) {
    std::cout << number1 << " is less than " << number2 << std::endl;
  } else {
    std::cout << number1 << " is NOT less than " << number2 << std::endl;
  }
  
  //use expression as condition directly
  std::cout << "Using expression as a condition : " << std::endl;

  if(number1 < number2) {
    std::cout << number1 << " is less than " << number2 << std::endl;
  } else {
    std::cout << number1 << " is NOT less than " << number2 << std::endl;
  }
*/
  //Nesting if statements
  std::cout << "Nesting `if` statements" << std::endl;

  bool red = false;
  bool green {true};
  bool yellow {false};
  bool police_stop {true};

  std::cout << "Police officer stops(verbose)" << std::endl;
  if(green) {
    if(police_stop) {
      std::cout << "Stop" << std::endl;
    }
    else {
      std::cout << "Go" << std::endl;
    }
  }
}
