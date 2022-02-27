#include <iostream>
#include <string>

int main()
// Integer Modifiers
{
  signed int value1{10};
  signed int value2{-300};

  unsigned int value3{4};
  // unsigned value4{-5}; // compiler error

  /*  std::cout << "Value1 : " << value1 << std::endl;
   std::cout << "Value2 : " << value2 << std::endl;
   std::cout << "sizeof(value1) : " << sizeof(value1) << std::endl;
   std::cout << "sizeof(value2) : " << sizeof(value1) << std::endl; */

  // long and short mods
  short short_var{-32768}; // 2 bytes
  short int short_int{455};
  signed short signed_short{122};
  signed short int signed_short_int{-456};
  unsigned short int unsigned_short_int{456};

  std::cout << "Short variable  : " << short_var << " ,  size : " << sizeof(short) << std::endl;
  std::cout << "Short int  : " << short_int << " ,  size : " << sizeof(short int) << std::endl;
  std::cout << "Signed short  : " << signed_short << " ,  size : " << sizeof(signed short) << std::endl;
  std::cout << "Signed short int  : " << signed_short_int << " ,  size : " << sizeof(signed short int) << std::endl;
  std::cout << "Unsigned short int  : " << unsigned_short_int << " ,  size : " << sizeof(unsigned short int) << std::endl;
  std::cout << "---------------------------" << std::endl;

  int int_var{55}; // 4 bytes
  signed signed_var{66};
  signed int signed_int{77};
  unsigned int unsigned_int{77};

  std::cout << "Int  : " << int_var << " ,  size : " << sizeof(int) << std::endl;
  std::cout << "Signed  : " << signed_var << " ,  size : " << sizeof(signed) << std::endl;
  std::cout << "Signed int  : " << signed_int << " ,  size : " << sizeof(signed int) << std::endl;
  std::cout << "Unsigned int : " << unsigned_int << " ,  size : " << sizeof(unsigned int) << std::endl;
  std::cout << "---------------------------" << std::endl;

  long long_var{88}; // 4 OR 8 bytes
  long int long_int{33};
  signed long signed_long{44};
  signed long int signed_long_int{44};
  unsigned long int unsigned_long_int{44};

  std::cout << "Long variable  : " << long_var << " ,  size : " << sizeof(long) << std::endl;
  std::cout << "Long int  : " << long_int << " ,  size : " << sizeof(long int) << std::endl;
  std::cout << "Signed long  : " << signed_long << " ,  size : " << sizeof(signed long) << std::endl;
  std::cout << "Signed long int  : " << signed_long_int << " ,  size : " << sizeof(signed long int) << std::endl;
  std::cout << "Unsigned long in  : " << unsigned_long_int << " ,  size : " << sizeof(unsigned long int) << std::endl;
  std::cout << "---------------------------" << std::endl;

  long long long_long{888}; // 8 bytes
  long long int long_long_int{999};
  signed long long signed_long_long{444};
  signed long long int signed_long_long_int{1234};
  unsigned long long int unsigned_long_long_int{1234};

  std::cout << "Long long variable  : " << long_long << " ,  size : " << sizeof(long long) << std::endl;
  std::cout << "Long long int  : " << long_long_int << " ,  size : " << sizeof(long long int) << std::endl;
  std::cout << "Signed long long : " << signed_long_long << " ,  size : " << sizeof(signed long long) << std::endl;
  std::cout << "Signed long long int  : " << signed_long_long_int << " ,  size : " << sizeof(signed long long int) << std::endl;
  std::cout << "Unsigned long long in  : " << unsigned_long_long_int << " ,  size : " << sizeof(unsigned long long int) << std::endl;
  std::cout << "---------------------------" << std::endl;
};