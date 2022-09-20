#include <iostream>

//summation of the numbers with use of a function
int add(int item1 = 0, int item2 = 0) {
  return item1 + item2;
}

/**
 * @brief main app
 */
int main()
{
  // a statement is a basic unit of compuation in a c++ program
  std::cout << "i am a statement ending in semicolon" << std::endl;

  int num = 3; // a variable that returns 3

  std::cout << "number is " << num << std::endl;

  std::cout << "total is: " << add(3,5) << std::endl; // print using the std cout with function call

  //sorry for too many comments lol
  return 0;
}