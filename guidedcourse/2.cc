#include <iostream>
int main(void)
{
  std::cout << "Display data string\n";
  if (true)
  {
    std::cout << "entered with a true condition\n";
  }
  if (false)
  {
    std::cout << "entered not\n";
  }
  else
  {
    std::cout << "entered this yes\n";
  }
  if (1)
  {
    std::cout << "translated as a logical binary T\n";
  }
  if (0)
  {
    std::cout << "not printed this yes\n";
  }
  const unsigned int a{1};
  if (a)
  {
    std::cout << "this allows to get in\n";
  }

  int n1{}, n2{};
  std::cout << "enter some number:\n";
  std::cin >> n1 >> n2;
  std::cout << "Sum: " << (n1 + n2) << "\n";

  return 0;
}