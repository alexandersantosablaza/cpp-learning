#include <iostream>
const long long int factorial(int n)
{
  if (n < 1)
  {
    return 1;
  }
  return n * factorial(n - 1);
}

int sum(int n)
{
  if (n < 1)
  {
    return 0;
  }
  else
  {
    return n + sum(n - 1);
  }
}
int countFibSquence(int n);
void fib(int n)
{
  for (int i = 0; i < n; i++)
  {
    std::cout << countFibSquence(i);
  }
}
int countFibSquence(int n)
{
  if (n > 1)
  {
    return countFibSquence(n - 2) + countFibSquence(n - 1);
  }
  else
  {
    return n;
  }
}

int main(void)
{

  fib(5);
  //  std::cout << sum(5);
  //  std::cout << factorial(32);
  return 0;
}