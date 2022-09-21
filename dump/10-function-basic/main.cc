#include <iostream>
#include <iomanip>
#include <cmath>
#include "../ulib/app"

using std::string;

// custom power function
const auto pow(signed long long base, signed int exponent)
{
  unsigned int absolute_exponent = (std::abs(exponent)); // use cmath in abs!
  long double result = 1;
  struct
  {
    std::string res;
  } result_final;

  while (absolute_exponent)
  {
    result = result * base;
    absolute_exponent--;
  }

  std::ostringstream x; // this is function scope same below block scope
  x << result;
  result_final.res = x.str();

  if (exponent < 0)
  {
    result = 1 / result;
    std::ostringstream x; // notice that this block scope is ok
    x << result;
    result_final.res = x.str();
  }

  if (base == 0)
  {
    result_final.res = "Error inditerminate";
  }

  return result_final.res;
}

/*main app*/
int main()
{
  signed long long base;
  signed int exponent;
  std::cout << "enter base: ";
  std::cin >> base;
  std::cout << "enter exponent: ";
  std::cin >> exponent;
  std::cout << pow(base, exponent);

  return 0;
}
