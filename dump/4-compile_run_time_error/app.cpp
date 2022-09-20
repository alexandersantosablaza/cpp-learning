#include <iostream>

/**
 * @brief main app
 * 
 */
int main()
{
  // compile time err missing ; this is not ok during compile
  std::cout << "hello world" << std::endl

  //run time err division by 0 at the RHS - right hand side - this is ok after compile
  7/0;
  
  return 0;

}