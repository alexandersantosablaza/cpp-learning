#include<iostream>

consteval int get3() { return 3; }

int main() {
  constexpr int value = get3();
  std::cout << "value: " << value << std::endl;
  return 0;
}