#include <iostream>

/**
 * @brief main app
 */
int main()
{
  std::cout << "hello world!" << std::endl; //using c++ standard library the cout is pritinging or writing it on terminal
  
  std::cerr << "printing an error in the console" << std::endl; // using c++ standard library for printing error
  
  std::clog << "log message in the console" << std::endl; 
  
  int age;
  
  std::string name;

  std::cout << "Please enter your (1) name and (2) age separate by space" << std::endl;

  std::cin
    >> name 
    >> age;

  std::cout << "hello " << name << " and you're " << age << std::endl; 

  std::string fullName; 
  int anotherAgeVariable;

  std::cout << "please enter your full name and age: ";
  
  std::getline(std::cin, fullName);

  std::cin >> anotherAgeVariable;

  std::cout << "Hello " << fullName << " and " << anotherAgeVariable << std::endl;

  return 0;
}