#include <iostream>
#include <cmath>

using std::string;

namespace customMath {

const auto pow(signed long long base, signed int exponent)
{
 int absolute = (std::abs(exponent));
 long double result = 1;
 struct { string res; } result_final;
 std::ostringstream out;

 while(absolute)
{
 result = result * base;
 absolute--;
}

if(exponent < 0)
{
 result = 1 / result;
}

if(base == 0)
{
 result_final.res = "Error inditerminate";
}

out << result; // changes the type if true value to string
result_final.res = out.str();

return result_final.res;

}

}

int main()
{ 
 long long base{};
 int exponent{};

 std::cout << "enter base: ";
 std::cin >> base;
 std::cout << "enter exponent: ";
 std::cin >> exponent;

 // customMath is in same file!
 std::cout << customMath::pow(base, exponent);

 return 0;
}
