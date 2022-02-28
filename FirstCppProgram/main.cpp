#include <iostream>
#include <iomanip>

int main()
// Fractional Numbers
{
  // Declare and init vars
  float number1{1.12345678901234567890f};
  double number2{1.12345678901234567890};
  long double number3{1.12345678901234567890L};

  // print out the sizes
  std::cout << "sizeof float : " << sizeof(float) << std::endl;             // Precision 7
  std::cout << "sizeof double : " << sizeof(double) << std::endl;           // Precision 17
  std::cout << "sizeof long double : " << sizeof(long double) << std::endl; // Precision 20

  // Precision
  std::cout << std::setprecision(20);                    // Control the precision from std::cout
  std::cout << "number 1 is : " << number1 << std::endl; // 7 digits
  std::cout << "number 2 is : " << number2 << std::endl; // 15ish digits
  std::cout << "number 3 is : " << number3 << std::endl; // 15+ digits

  // Float issues: Precision is too limited for most applications
  float number4 = 192400023.0f; // Error: narrowing conversion
  std::cout << "number 4 is : " << number4 << std::endl;

  std::cout << "------------------------------------------" << std::endl;

  // Scientific notation
  double number5{192400023};
  double number6{1.92400023e8}; // multiply 10 exp(8)
  double number7{1.924e8};      // omit the lower 00023 for simplicity
  double number8{0.00000000003498};
  double number9{3.498e-11}; // multiply 10 exp(-11)

  std::cout << "number 5 is : " << number5 << std::endl;
  std::cout << "number 6 is : " << number6 << std::endl;
  std::cout << "number 7 is : " << number7 << std::endl;
  std::cout << "number 8 is : " << number8 << std::endl;
  std::cout << "number 9 is : " << number9 << std::endl;

  double number10{-5.6}; // init to 0
  double number11{};     // init to 0
  double number12{};

  // Infinity
  double result{number10 / number11};

  std::cout << number10 << "/" << number11 << " yields " << result << std::endl;
  std::cout << result << " + " << number10 << " yields " << result + number10 << std::endl;

  // NaN
  result = number11 / number12;

  std::cout << number11 << "/" << number12 << " = " << result << std::endl;
}