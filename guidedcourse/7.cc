#include <vector>
#include <iostream>

int main(void)
{
  int arr[10]{1, 2, 3, 5, 6, 7, 8, 3, 1};
  for (int &i : arr)
  {
    std::cout << i << " ";
  }
  std::cout << "\n";

  for (int i = 0; i < (sizeof(arr) / sizeof(arr[i])); i++)
  {
    std::cout << arr[i] << " ";
  }

    return 0;
}