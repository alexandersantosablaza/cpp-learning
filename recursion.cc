#include <iostream>

inline void print(int times = 0)
{
  if (times == 0)
  {
    return;
  }
  std::cout << "C++: " << times << "\n";
  --times;
  print(times);
  std::cout << "reverse: " << times << "\n";
}
int main(void)
{
  print(3);
  return 0;
}