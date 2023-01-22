#include <iostream>

namespace g
{
  class Point
  {
  public:
    std::string name;
    int x, y;
    Point()
    {
      x = 0;
      y = 0;
      name = "";
    }
    Point(Point &p)
    {
      x = p.x;
      y = p.y;
    }
    Point(int x = 0, int y = 0, std::string name = "") : x{x}, y{y}, name{name}
    {
      std::cout << "Point(" << x << "," << y << ")\n";
    }
  };
}

int main(void)
{
  g::Point p1(1, 2);
  g::Point p2(2, 3);

  return 0;
}