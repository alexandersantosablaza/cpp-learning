#include <iostream>

class Base
{
private:
public:
  int x;
  static int y;

public:
  Base()
  {
    x = 0;
    std::cout << "base(" << x << "," << y << ")\n";
  }
  Base(int x) : x{x}
  {
    std::cout << "base(" << x << "," << y << ")\n";
  }
  void print()
  {
    std::cout << "base(" << x << "," << y << ")\n";
  }
};
int Base::y;
int main(void)
{

  Base b;
  b.x = 10;
  Base b2;
  b2.x = 20;
  Base::y = 30;
  b.print();
  b2.print();

  return 0;
}