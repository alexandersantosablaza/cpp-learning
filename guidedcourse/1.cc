#include <iostream>
using namespace std;
int main(void)
{
  std::cout << "Entering names of string and display\n";
  std::string s;
  std::cout << "Enter string: ";
  std::getline(std::cin, s);
  std::cout << "You entered the name" << s << "\n";
  s.push_back('A');
  std::cout << "Added at end of string: " << s << "\n";
  s.pop_back();
  std::cout << "Removal at end of string: " << s << "\n";
  return 0;
}