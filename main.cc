#include <iostream>
namespace overloading
{
  void add(int x, int y, int &out)
  {
    out = x + y;
  }
  void add(double x, double y, double &out)
  {
    out = x + y;
  }
}
int main(void)
{
  double res{};
  int out{};
  overloading::add(1.3, 3.2, res);
  overloading::add(2, 3, out);
  std::cout << "doule overload: " << res << "\n";
  std::cout << "int overload: " << out << "\n";
  return 0;
}