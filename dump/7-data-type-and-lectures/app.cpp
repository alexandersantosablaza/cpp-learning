#include <iostream>
#include <cmath>
#include <iomanip>
/*
 * main app
 */
static int x;
int y;
int main()
{
  /*Core Feature

    data types
      int - return whole numbers
      double - a float that returns bigger precision
      float - a decimal that has precision of 7 significant decimal place --> 5.1234567
      char - a character let  `ter or number or any symbol that human can understand
      void - a return type that does not return any
      string - a data that is collection of char/number/special characters

    number system - this is a system that allows human to understand number functionalities.

    example:
      2371 = 2 X 10 ^ 3   +   3 X 10 ^ 2 +   7 X 10 ^ 1 + 1 X 10 ^ 0  --> this is a base 10 number
      0** where ** are number to make it octal
      0x.. as hexadeimal
    octal, base10, hex, binary, etc.. any format of a number that is existing we can add in the number system.

    The machine or computer is able to read binary ( 1 or 0 )


    Standard Library --> this is a feature of c++ for us to build something using this as starting point to communicate with a machine and write code

    STL --> part of the c++ standard library of container types or collections

    the standard library c9oin and cout is using bitwise shift << or >> in the statement to represent the functionality

  */
  int number = 15;          // base 10 or decimal
  int octal = 017;          // base8 or octal
  int hex = 0x0F;           // base16 or hexadecimal
  int binary = 0b000001111; // base2 or binary

  std::cout << number << std::endl;
  std::cout << octal << std::endl;
  std::cout << hex << std::endl;
  std::cout << binary << std::endl;
  // all of the above prints 15

  /******************NUMERICS******************/
  // contains 4 bytes typically in the memory
  // a variable is a named section or portion of the memory location

  const int implicitInteger = 2.9; // data is loss and boxed to int type implicitly

  std::cout << implicitInteger << std::endl;
  unsigned int x;
  // static int y;
  std::cout << x << std::endl;
  std::cout << y << std::endl;
  std::cout << pow(2, 16) << std::endl; // pow() came from cmath
  std::cout << 23E3;

  // any variable name that is declared using a type of specific data is
  // accessible in function scope in the lexical scope, block scope if inherited or in global scope

  /*
   * arithmetic of 2 value of a data that is assigned to the sum variable of type int to declaring the variable
   * the { } are scoping of the result of assignment,
   * inside a function scope it will be nothing or 0 if assignment is of type int
   */
  const int sum = {123 + 5};

  // NUMERIC arithmetic
  /*

   +  => add
   -  => minus
   *  => multiply
   /  => divide
   % => modulus - remainder of division

    order of precendence for arithmetic
    1.left to right
    2.parenthesis
    3.multiply / divide / modulus
    4.add / subtract

    example:  std::cout << 4 % 2 / 1 + 3 * 2 + 1;


    Logical operators

    5 > 3 ==== logical operation that gives boolean value of type 'bool'
    this 5 > 3 returns boolean value

    the value true or false which is logically 1 or 0 in truthy or falsy



    Equality conditional operators
    ==  => some value equals some other value
    !=  => some value not equals some other value
    >=  => greater than or equal
    <=  => less than or equal
    <=>  => compares to 0 for the LHS <=> RHS



  */

  std::cout << (0 == true) << std::endl; // returns 0
  std::cout << (1 == true) << std::endl; // returns 1
  std::cout << (true == 1) << std::endl; // returns 1
  std::cout << (true == 0) << std::endl; // returns 0

  std::cout << "linebreak" << std::endl;

  std::cout << (0 == false) << std::endl; // returns 1
  std::cout << (1 == false) << std::endl; // returns 0
  std::cout << (false == 1) << std::endl; // returns 0
  std::cout << (false == 0) << std::endl; // returns 1

  if (1) // This will work if it has a truthy value and if condition is 0 will return false
  {
    std::cout << "yes" << std::endl;
  }

  // int lhs = 1;
  // int rhs = 3;
  // auto x = (lhs <=> rhs);

  // if (x < 0)
  // {
  //   std::cout << "less than rhs" << std::endl;
  // }

  // if (x > 0)
  // {
  //   std::cout << "less than lhs" << std::endl;
  // }

  // (A <=> B) < 0 is true if A < B
  // (A <=> B) > 0 is true if A > B
  // (A <=> B) == 0 is true if A and B are equal/equivalent.

  // data = 23; <-- this one will yield to a compile time error unidentified variable identifier keyword clause

  // inside a function if declared a variable
  // -> int VariableName;  o
  // this yield to garbage random value can cause problem in code
  // this is dependent on the compiler what value will return

  // braces initialization will force Narrowing
  // Narrowing means that the data type is boxed
  // and strictly enforced without implicit conversion of type
  // so when declare an int type data value should only be int and not floating numeric
  // this will give compile time error if the data value is not same with data type

  int integerInit{};       // initialize to 0 ==> zero
  int integerInit1{10};    // initialize to 10
  int integerInit2{15};    // initialize to 15
  auto magicalNumeric{10}; // by declaration of this magical variable of type auto will find its type

  // Functional Initalization of the variable
  // wrapping the identifier with a parenthesis () and inside it a value
  { /*this is nothing but a block scope*/
  }

  int aFunctionalInitialization(5);
  int aFunctionalInitialization2(3);
  int aFunctionalInitialization3(aFunctionalInitialization + aFunctionalInitialization2);
  int narrowingFunctionalInit(2.9); // data value information will cause a loss it is implicitly assigned returns 2

  // Assignment Notation Initialization of the variable
  { /*this is nothing but a block scope*/
  }
  int assignmentNotation = 1;
  int assignmentNotation2 = 2;
  int assignmentNotation3 = assignmentNotation + assignmentNotation2; // returns 3
  int narrowingAssignmentNotation = 2.9;                              // returns 2

  // checking of size for variable in memory with -> sizeof()
  // the sizeof function is a standard library

  std::cout << sizeof(int) << ' ' << sizeof(assignmentNotation) << std::endl; // 4 bytes in memory

  // INTEGER MODIFIER
  // if we did not put signed or unsigned keyword modifier it is by default signed
  // unsigned means no negative number while the signed means all
  {
  }

  int postiveInt{10};
  int negativeInt{-10};

  std::cout << postiveInt << std::endl; // 4 bytes in memory
  std::cout << negativeInt << std::endl;

  unsigned int postiveInt1{10}; // adjust the minimum range and maximum range
  signed int negativeInt1{-10};

  std::cout << postiveInt1 << std::endl; // 4 bytes in memory
  std::cout << negativeInt1 << std::endl;

  // modifier long or short and signed or unsigned

  // short 2 bytes in memory
  // short int 2 bytes in memory
  // signed short 2 bytes in memory
  // signed short int 2 bytes in memory
  // unsigned short int 2 bytes in memory

  // (modifiers here) int - 4 bytes

  // long - 4 or 8 bytes
  // long int - 4 or 8 byte
  // signed long int

  // long long - 8 bytes
  // long long int - 8 bytes
  // signed long long int - 8 bytes

  /******************FRACTIONAL NUMERIC******************/
  // Floating Point Types  == represent number with fractional parts
  // float - size 4 byte - precision 7 decimal
  // double - size 8 byte - precision 15 decimal  - double is a Double of the Single float (twice of float)
  // long double - size is 12 byte - precision is more than double   - can contain a bigger value than double

  long double adoubleprecision{12345678912345.123456789L};

  // std::setprecision came from iomanip
  std::cout << std::setprecision(20) << adoubleprecision << std::endl; // prints the long double

  // division of a floating point will result to Positive or Negative Infinity (+/-)
  // 0.0 / 0.0 (anything divided by 0.0) will result to NaN

  const double num10{5.6};
  const double num11{};
  const double num12{};
  double result{num10 / num11};
  std::cout << num10 << "/" << num11 << " = " << result << std::endl;          // 5.6/0 = inf
  std::cout << result << "+" << num10 << " = " << result + num10 << std::endl; // +inf + 5.6 = inf

  // NaN
  result = num11 / num12;
  std::cout << num11 << "/" << num12 << " = " << result << std::endl; // 0/0 = nan

  /******************BOOLEAN******************/
  // true or false  that is logically 1 or 0

  bool red{true};
  bool green{false};
  if (red)
  {
    std::cout << "stop!" << std::endl;
  }
  if (green)
  {
    std::cout << "go!" << std::endl; // this wont print
  }

  std::cout
      << red
      << " "
      << green
      << std::boolalpha
      << std::endl
      << "changed the value to alphabetical using boolalpha"
      << std::endl
      << red << " " << green
      << std::endl
      << "check the size of bool: "
      << sizeof(bool) << " in byte"
      << std::endl;

  /******************STRINGS******************/

  const std::string letter = {};

  return 0;
}