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
  float number4(192400023.0f); // Error: narrowing conversion
  std::cout << "number 4 is : " << number4 << std::endl;
}