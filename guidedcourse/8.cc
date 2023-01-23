#include <iostream>

int main(void)
{
  int val{103};
  int *pointers = &val;
  std::cout << "Value of val: " << val << " address of val: " << &val << "\n"
            << "Value of pointer: " << *pointers << " address of pointer: " << pointers << "\n";
  delete pointers;
  std::cout << val;
  return 0;
}