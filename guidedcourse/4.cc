#include <iostream> //call by references and value
int main(void)
{
  const auto references = [](int &a, int &b)
  {
    a = a + b;
    b = a - b;
    a = a - b;
  };
  int a{1};
  int b{2};
  references(a, b); // swapping the actual value by reference call
  std::cout << "The value of A is now: " << a << "\n";
  std::cout << "The value of B is now: " << b << "\n";
  // this is a good stuff because it is not expanding memory.
  const auto byvalue = [](int a, int b)
  {
    a = a + b;
    b = a - b;
    a = a - b;
  };
  byvalue(a, b);
  std::cout << "The value of A is now: " << a << "\n";
  std::cout << "The value of B is now: " << b << "\n";
  // notice you did not swap it.
  return 0;
}
