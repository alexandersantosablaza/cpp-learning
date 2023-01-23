#include <iostream>

int main(void)
{
  unsigned short int counter{1};
  while (true)
  {
    std::cout << "printing" << counter << "times\n";
    counter++;
    if (counter == 10)
    {
      break;
    }
  }
  do
  {
    std::cout << "Entered this loop 1 times only\n";
  } while (false);
  for (unsigned int i = 0; i < 10; i++)
  {
    std::cout << "print inside for loops " << i << "times\n";
  }
  return 0;
}