#include <iostream>
// Data Ops

int main()
// Logical Ops
{
  bool a{true};
  bool b{false};
  bool c{true};

  std::cout << std::boolalpha;

  /*   // AND : Evaluates to true when all operands are true. A single false operand will drag the entire expression to evaluating false
    std::cout << "---------------Basic AND operations-----------------" << std::endl;
    std::cout << "a && b : " << (a && b) << std::endl;           // false
    std::cout << "a && c : " << (a && c) << std::endl;           // true
    std::cout << "a && b && c : " << (a && b && c) << std::endl; // false

    // OR : Evaluates to true when at least one operand is true. A single true operand will push the entire expression to evaluating as true
    std::cout << "-----------Basic OR operations-----------" << std::endl;
    std::cout << "a || b : " << (a || b) << std::endl;           // true
    std::cout << "a || c : " << (a || c) << std::endl;           // true
    std::cout << "a || b || c : " << (a || b || c) << std::endl; // true

    std::cout << "-----------------Basic NOT operations----------------" << std::endl;
    std::cout << "!a : " << !a << std::endl; // false
    std::cout << "!b : " << !b << std::endl; // true
    std::cout << "!c : " << !c << std::endl; // false

    std::cout << "------------Combining Logical Operators----------------" << std::endl;
    std::cout << "!(a && b) || c : " << (!(a && b) || c) << std::endl; // true */

  int d{45};
  int e{20};
  int f{11};

  std::cout << "----------Relational & logical operations on integers------------" << std::endl;

  std::cout << "(d > e) && (d > f) : " << ((d > e) && (d > f)) << std::endl;     // true
  std::cout << "(d == e) || (e <= f) : " << ((d == e) || (e <= f)) << std::endl; // false
  std::cout << "(d < e) || (d > f) : " << ((d < e) || (d > f)) << std::endl;     // true
  std::cout << "(f > e) || ( d < f) : " << ((f > e) || (d < f)) << std::endl;    // false
  std::cout << "(d > f) && (f <= d) : " << ((d > f) && (f <= d)) << std::endl;   // true
  std::cout << "(d > e) && (d <= f) : " << ((d > e) && (d <= f)) << std::endl;   // false
  std::cout << "(!a) && (d == e) : " << ((!a) && (d == e)) << std::endl;         // false
}