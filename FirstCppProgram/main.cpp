#include <iostream>
#include <string>

int main()
{
  // Data input with spaces
  std::string full_name;
  int age;

  std::cout << "Please type in your full name and age " << std::endl;

  std::getline(std::cin, full_name);
  std::cin >> age;

  std::cout << "Hello " << full_name << " you are " << age << " years old!" << std::endl;
}