#include <iostream>
#include <cmath>
// Data Ops

int main()
// Math functions
{
  double weight {7.7};

  //floor
  std::cout << "Weight rounded to floor is : " << std::floor(weight) << std::endl;
  std::cout << "---------------------------------------------" <<std::endl;

  //ceil
  std::cout << "Weight rounded to ceil is : " << std::ceil(weight) << std::endl;
  std::cout << "---------------------------------------------" <<std::endl;

  //abs
  double savings {-5000};

  std::cout << "Abs of weight is : " << std::abs(weight) << std::endl;
  std::cout << "Abd of savings is : " << std::abs(savings) << std::endl;
  std::cout << "---------------------------------------------" <<std::endl;

  //exp : f(x) = e ^ x , where e = 2.71828 
  double exponential = std::exp(10);
  std::cout << "The exponential of 10 is : " << exponential << std::endl;
  std::cout << "---------------------------------------------" <<std::endl;

  // pow
  std::cout << "3 ^ 4 is : " << std::pow(3, 4) <<std::endl;
  std::cout <<" 9 ^ 3 is : " << std::pow(9, 3) <<std::endl;
  std::cout << "---------------------------------------------" <<std::endl;
}
