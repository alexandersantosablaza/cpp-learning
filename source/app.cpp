#include <iostream>
#include <iomanip>
/*main app*/
int main()
{

  /******************BOOLEAN******************/
  // true or false  that is logically 1 or 0

  bool red{true};
  bool green{false};
  if (red)
  {
    std::cout << "stop!" << std::endl;
  }
  if (green)
  {
    std::cout << "go!" << std::endl; // this wont print
  }

  std::cout
      << red
      << " "
      << green
      << std::boolalpha
      << std::endl
      << "changed the value to alphabetical using boolalpha"
      << std::endl
      << red << " " << green
      << std::endl
      << "check the size of bool: "
      << sizeof(bool) << " in byte"
      << std::endl;

  return 0;
}