#include <iostream>

int main(void)
{
  int size{};
  std::cout << "Enter a number for size: \n";
  std::cin >> size;
  int *ptr;
  ptr = new int[size];
  for (int i = 0; i < size; i++)
  {
    std::cout << "enter num\n";
    std::cin >> ptr[i];
  }
  for (int i = 0; i < size; i++)
  {
    std::cout << ptr[i] << " ";
  }
  std::cout << "\n";

  delete ptr;

  return 0;
}

int main2(void)
{
  std::cout << "memory management\n";
  int *p1 = new int, *p2 = new int, *p3 = new int;
  std::cout << "Enter number 1 : \n";
  std::cin >> *p1;
  std::cout << "Enter number 2 : \n";
  std::cin >> *p2;
  std::cout << "Enter number 3 : \n";
  std::cin >> *p3;
  std::cout << "average: " << ((*p1 + *p2 + *p3) / 3);
  delete p1, p2, p3;
  // manual deleteion of a pointer memory referencing this will be deallocated.
  return 0;
}