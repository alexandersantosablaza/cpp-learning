#include <iostream>
int switci(void)
{
  int val{};
  std::cin >> val;
  switch (val)
  {
  case 1:
    std::cout << "case 1\n";
    break;
  case 2:
    std::cout << "case 2\n";
    break;
  case 3:
    std::cout << "case 3\n";
    break;
  case 4:
    std::cout << "case 4\n";
    break;
  }
  return 0;
}

int xmain()
{
  std::cout << "testing me\n";
  goto thisplaceloca;
  std::cout << "do\n";
  std::cout << "do not \n";
thisplaceloca:
  std::cout << "do excecuting\n";
  return 0;
}

void update(int &x)
{
  x = x + 1;
}
int maain()
{
  int val{10};
  std::cout << val << " before changes\n";
  update(val);
  std::cout << val << "after\n";
  return 0;
}

void change(int *n)
{
  *n = 10;
};
int fmain()
{
  int x{10};
  change(&x);
  return 0;
};

void onePassing(int arr[] = {}, int size = 0)
{
  for (int i{0}; i < size; i++)
  {
    std::cout << arr[i] << " ";
  }
  std::cout << "\n";
}
const int c{2};
void passby2D(int *arr, int r, int c)
{
}
int main(void)
{
  std::cout << "pass by 2d:!\n";
  int arr[3][3] = {{1, 2, 1}, {2, 2, 3}, {3, 5, 3}};
  const int rowsize{sizeof(arr) / sizeof(arr[0])};
  const int colsize{sizeof(arr[0]) / sizeof(arr[0][0])};
  passby2D((int *)arr, rowsize, colsize);
}
int mxadain(void)
{
  int arr[][2] = {12, 3, 4, 1231, 221};
  const int rowsize{sizeof(arr) / sizeof(arr[0])};
  const int colsize{sizeof(arr[0]) / sizeof(arr[0][0])};
  passby2D((int *)arr, rowsize, colsize);
  return 0;
}
