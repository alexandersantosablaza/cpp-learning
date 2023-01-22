#include <iostream>
class initializers
{

  char x;
  int y;

public:
  initializers()
  {
  }
  initializers(char a = 0, int z = 0) : x{a}, y{z} {}
  const void print()
  {
    std::cout << "X: " << x << " Y: " << y << "\n";
  }
};

int main()
{
  initializers b(100, 200);
  b.print();
  return 0;
}