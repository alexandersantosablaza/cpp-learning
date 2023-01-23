#include <iostream> //call by references and value
int main(void)
{
  const auto references = [](int &a, int &b)
  {
    a = a + b;
    b = a - b;
    a = a - b;
  };
  // this is a good stuff because it is not expanding memory.
  int a{1};
  int b{2};
  std::cout << "The value of A is now: " << a << "\n";
  std::cout << "The value of B is now: " << b << "\n";
  const auto byvalue = [](int a, int b)
  {
    a = a + b;
    b = a - b;
    a = a - b;
  };
  // notice you did not swap it.
  byvalue(a, b);
  std::cout << "The value of A is now: " << a << "\n";
  std::cout << "The value of B is now: " << b << "\n";
  references(a, b); // swapping the actual value by reference call
  return 0;
}
