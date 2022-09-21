#include <iostream>
#include <iomanip>
#include "../lib/app"

/*main app*/
int main()
{
  int input;
  std::cout << "enter \"n\" to get the n! :";
  std::cin >> input;
  factorial::execute(input);
  return 0;
}
