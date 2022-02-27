#include <iostream>
#include <string>

int main()
// Integer Types
{
  /*   // Braced Initializers
    int elephant_count; // Variable may contain random garbage value WARNING
    std::cout << "Elephant count : " << elephant_count << std::endl;

    int lion_count{}; // Inits to zero
    std::cout << "Lion count : " << lion_count << std::endl;

    int dog_count{10}; // Inits to 10
    std::cout << "dog count : " << dog_count << std::endl;

    int cat_count{15}; // Inits to 15
    std::cout << "Cat count : " << cat_count << std::endl;

    // Can use an expression as initializer
    int domesticated_animals{dog_count + cat_count};
    std::cout << "Domesticated animal count : " << domesticated_animals << std::endl; */

  // Functional Initialization
  /* int apple_count(5);
  int orange_count(10);

  int fruit_count(apple_count + orange_count);

  // Information lost. Less safe than braced inits
  int narrowing_conversion_functional(2.9);

  std::cout << "Apple count : " << apple_count << std::endl;
  std::cout << "Orange count : " << orange_count << std::endl;
  std::cout << "Fruit count : " << fruit_count << std::endl;
  std::cout << "Narrowing conversion : " << narrowing_conversion_functional << std::endl; */

  // Assignment Initialization
  int bike_count = 2;
  int truck_count = 7;
  int vehicle_count = bike_count + truck_count;

  int narrowing_conversion_assignment = 2.9;

  std::cout << "Bike count : " << bike_count << std::endl;
  std::cout << "Truck count : " << truck_count << std::endl;
  std::cout << "Vehicle count : " << vehicle_count << std::endl;
  std::cout << "Narrowing conversion : " << narrowing_conversion_assignment << std::endl;

  // Check the size with sizeof
  std::cout << "sizeof int : " << sizeof(int) << std::endl;
  std::cout << "sizeof truck_count : " << sizeof(truck_count) << std::endl;
}