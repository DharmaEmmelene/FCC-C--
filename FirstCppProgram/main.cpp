#include <iostream>
#include <iomanip>
// Data Ops

int main()
// Output formatting
{
  // std::endl : places a newline character on the output stream. Same as placing '\n'
  /*   std::cout << "Hello";
    std::cout << "World!";

    std::cout << std::endl;
    std::cout << "------------" << std::endl;

    std::cout << "Hello" << std::endl;
    std::cout << "World!" << std::endl;

    std::cout << "------------" << std::endl;

    std::cout << "Hello\n";
    std::cout << "World!\n";

    std::cout << "------------" << std::endl;

    // std::flush : flushes the output buffer to its final destination
    std::cout << "This is a nice message...." << std::endl
              << std::flush; */

  // std::setw() : Adjusts the field width for the item to be printed
  // the setw() manipulator only affects the next value to be printed

  /* std::cout << "Unformatted table : " << std::endl;
  std::cout << "Daniel"
            << " "
            << "Gray"
            << " 25" << std::endl;
  std::cout << "Stanley"
            << " "
            << "Woods"
            << " 33" << std::endl;
  std::cout << "Jordan"
            << " "
            << "Parker"
            << " 45" << std::endl;
  std::cout << "Joe"
            << " "
            << "Ball"
            << " 21" << std::endl;
  std::cout << "Josh"
            << " "
            << "Carr"
            << " 27" << std::endl;
  std::cout << "Izaiah"
            << " "
            << "Robinson"
            << " 29" << std::endl;

  std::cout << "------------" << std::endl; */

  /*   std::cout << "Formatted table : " << std::endl;

    std::cout << std::setw(10) << "Firstname" << std::setw(10) << "Lastname" << std::setw(5) << "Age" << std::endl;
    std::cout << std::setw(10) << "Daniel" << std::setw(10) << "Gray" << std::setw(5) << "25" << std::endl;
    std::cout << std::setw(10) << "Stanley" << std::setw(10) << "Woods" << std::setw(5) << "33" << std::endl;
    std::cout << std::setw(10) << "Jordan" << std::setw(10) << "Parker" << std::setw(5) << "45" << std::endl;
    std::cout << std::setw(10) << "Joe" << std::setw(10) << "Ball" << std::setw(5) << "21" << std::endl;
    std::cout << std::setw(10) << "Josh" << std::setw(10) << "Carr" << std::setw(5) << "27" << std::endl;
    std::cout << std::setw(10) << "Izaiah" << std::setw(10) << "Robinson" << std::setw(5) << "29" << std::endl;

    std::cout
        << "------------" << std::endl;*/

  // setfill

  /*   std::cout << "Table with fill characters : " << std::endl;

    int col_width{20};
    std::cout << std::left;
    std::cout << std::setfill('-'); // fill char
    std::cout << std::setw(col_width) << "Lastname" << std::setw(col_width) << "Firstname" << std::setw(col_width) << "Age" << std::endl;
    std::cout << std::setw(col_width) << "Gray" << std::setw(col_width) << "Daniel" << std::setw(col_width) << "25" << std::endl;
    std::cout << std::setw(col_width) << "Woods" << std::setw(col_width) << "Stanley" << std::setw(col_width) << "33" << std::endl;
    std::cout << std::setw(col_width) << "Parker" << std::setw(col_width) << "Jordan" << std::setw(col_width) << "45" << std::endl;
    std::cout << std::setw(col_width) << "Ball" << std::setw(col_width) << "Joe" << std::setw(col_width) << "21" << std::endl;
    std::cout << std::setw(col_width) << "Carr" << std::setw(col_width) << "Josh" << std::setw(col_width) << "27" << std::endl;
    std::cout << std::setw(col_width) << "Robinson" << std::setw(col_width) << "Izaiah" << std::setw(col_width) << "29" << std::endl;

    std::cout
        << "------------" << std::endl; */

  /*   // Internal justified : sign is left justified, data is right justified
    std::cout << "Internal justified : " << std::endl;
    std::cout << std::right;
    std::cout << std::setw(10) << -123.45 << std::endl;
    std::cout << std::internal;
    std::cout << std::setw(10) << -123.45 << std::endl; */

  // positive

  int pos_num{34};
  int neg_num{-45};

  std::cout << "pos_num : " << pos_num << std::endl;
  std::cout << "neg_num : " << neg_num << std::endl;
  std::cout << std::showpos;
  std::cout << "pos_num : " << pos_num << std::endl;
  std::cout << "neg_num : " << neg_num << std::endl;
  std::cout << std::endl;
  std::cout << std::noshowpos;
  std::cout << "pos_num  : " << pos_num << std::endl;
  std::cout << "neg_num : " << neg_num << std::endl;
}