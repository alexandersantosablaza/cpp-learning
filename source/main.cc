#include <iostream>
#include <iomanip>
#include "../lib/app"

/*main app*/
int main()
{
  std::cout << "enter \"n\" to get the n! :";
  int input;
  std::cin >> input;
  factorial::execute(input);
  return 0;
}
