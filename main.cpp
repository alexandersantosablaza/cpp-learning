#include <iostream>
#include <sstream>
#include <vector>

namespace util
{
  const void sample1()
  {
    std::cout << "i am a text that you can see\n";
    std::string data;
    std::cout << "enter some data: ";
    std::cin >> data;
    std::cout << "this is the data you entered: " << data << '\n';
    return;
  };
  const void sample2()
  {
    std::string input{};
    int sum{}, temp{};
    while (true)
    {
      std::cout << "Enter a number to add: ";
      std::cin >> input;
      std::stringstream ss;
      ss << input;
      ss >> temp;
      sum += temp;
      std::cin.clear();
      fflush(stdin);
      std::string choice{};
      do
      {
        std::cout << "Do you want to add more? y/n";
        std::cin >> choice;
        std::cin.clear();
        fflush(stdin);
      } while (choice != "n" && choice != "N" && choice != "Y" && choice != "y");
      if (choice == "n" || choice == "N")
      {
        std::cout << "Sum: " << sum << "\n";
        break;
      }
    }
  };
  const void sample3()
  {

    const std::string animmutableString{"123456789"};
    std::cout << animmutableString;
    std::string capital{"IAMCAPITALS"};
    std::cout << capital;
    // animmutableString = "1";
    return;
  };
  const void sample4()
  {
    std::cout << "I am a \r asd as \f asdasd \n";
    return;
  }
  const void sample5(void)
  {
    char a{'a'};
    char A{'A'};
    bool b{true};
    int i{10};
    float f = 1000.0;
    double d = 100.0;
    std::cout << a << '\n'
              << A << '\n'
              << b << '\n'
              << i << '\n'
              << f << '\n'
              << d << '\n';
    return;
  };
  const void sample6(void)
  {

    int x{10};
    int &r = x;
    std::cout << r << ' ' << x << '\n';
    r = 100;
    std::cout << r << ' ' << r;
    // references and pointers
    return;
  }
  const void sample7()
  {
    int s[]{1, 2, 3, 4, 5, 7, 8};
    for (int &i : s)
    {
      std::cout << "value: " << i << "\n";
      std::cout << "memory loc: " << &i << "\n";
    }
    std::cout << &s[0] << "\n";
    return;
  }
  const void sample8(void)
  {
    int number[] = {1, 2, 3, 42, 31, 212, 31};
    std::cout << "the meaning of life" << *(number + 3) << '\n';
    std::cout << "the meaning of life" << number[3] << '\n';
    std::cout << "the meaning of life" << 3 [number] << '\n';
    return;
  }
  const void sample9(void)
  {
    std::cout << "2D ARRAYS"
              << "\n";
    int matrix[2][3] = {
        {1, 3, 2},
        {1, 2, 3}}; // 2 row 3 col
    std::cout << matrix[0][1];
    int matrix2[][4] = {
        {1, 2, 3, 5},
        {1, 2, 3, 21},
        {2, 2, 1}};

    return;
  };
  const void sample10(void)
  {
    std::cout << 3 % 11 << '\n';
    std::cout << 10 % 2 << '\n';
    std::cout << 23 % 3 << '\n';
  }
  const void sample11(void)
  {
    std::cout << "";
    return;
  }
  void sample12(void)
  {
    int arr[] = {1, 2, 3, 4, 1, 2, 2, 3, 4, 5};
    int init[12]{};
    for (int &i : init)
    {
      std::cout << "Mem address: " << &i << " , value: " << i << "\n";
    }
    for (int &i : arr)
    {
      std::cout << "mem addrarr: " << &i << "  , value : " << i << "\n";
    }
  };
  void sampl13(void)
  {
    int sum{};
    int n{};
    std::cout << "addition of n numbers!\n";
    std::cout << "Enter n number of array: ";
    std::cin >> n;
    int arr[n]{};
    for (int i = 0; i < n; i++)
    {
      std::cout << "enter number for sum: ";
      std::cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
      sum += arr[i];
    }
    std::cout << "Sum: " << sum << "\n";
    return;
  }
  void sample14(void)
  {
    std::cout << "2d sample array! \n";
    int twoD[3][3]{
        {1, 2, 3},
        {1, 2}};

    std::cout << "displaying  matrix\n";
    for (int i = 0; i < (sizeof(twoD) / sizeof(twoD[i])); i++)
    {
      for (int &j : twoD[i])
      {
        std::cout << j << " ";
      }
      std::cout << "\n";
    }
    return;
  };
  int callback(int p1, int p2);
  void callback(int *p1, int *p2, int *out);
  void sample15(void)
  {
    // Built in , user defined
    int s{};
    s = callback(5, 5);
    std::cout << "sample invoke of a function\n"
              << "this returns the sum pass by value: " << s << "\n";
    int p1{1}, p2{2}, output{};
    callback(&p1, &p2, &output);
    std::cout << " Pass by reference and result is sum: " << output << "\n";
    return;
  };
  int callback(int p1 = 0, int p2 = 0)
  {
    return p1 + p2;
  }
  void callback(int *p1 = 0, int *p2 = 0, int *output = 0)
  {
    *output = *p1 + *p2;
    return;
  }
  void sample16(void)
  {
    std::cout << "Pointers in C++\n";
    int val{2};
    int *a{&val};
    float valf{(float)2.324};
    float *b{&valf};
    char valc{'a'};
    char *c{&valc};
    int *ptr = a;
    std::cout << "*a : " << *a << "\n"
              << "val : " << val << "\n"
              << " &val: " << &val << "\n"
              << "valf: " << valf << "\n"
              << "*b : " << *b << "&valf: " << &valf << "\n"
              << "valc : " << valc
              << "&valc: " << &valc << "\n"
              << "*c: " << *c << "\n"
              << "*ptr: " << *ptr << "\n"
              << "&a";
    return;
  }
  void sample17()
  {
    std::cout << "Enter string: ";
    std::string s;
    std::cin >> s;
    s.push_back('S');
    std::cout << s << "\n";
    s.insert(0, 2, 'S');
    std::cout << s << "\n";
    s.pop_back();
    std::cout << s << "\n";
    return;
  };
  void sampl18(void)
  {
    std::cout << "Welcom";
    int n1{}, n2{};
    std::cout << "Enter n: ";
    std::cin >> n1 >> n2;
    std::cout << "Sum: " << (n1 + n2) << "\n";
    return;
  }
  void sampl19(void)
  {
    std::cout << "Name onscreen\n";
    int count{10};
    while (count)
    {
      std::cout << "tentimes: " << count << "\n";
      count--;
    }
  }
  void sampl20(void)
  {
    int i{0};
    int j{};
    int k{};
    while (i < 10)
    {
      j = 0;
      k = 10;
      while (k >= i)
      {
        std::cout << " ";
        k--;
      }
      while (j <= i)
      {
        std::cout << "*";
        j++;
      }
      std::cout << "\n";
      i++;
    }
    return;
  }
  void smpl21(void)
  {
    int num{100};
    while (num >= 90)
    {
      if (num == 96)
      {
        num--;
        continue;
      }
      std::cout << "Value is " << num << "\n";
      num--;
    }
    return;
  }
  void customFnSwap(int *, int *);
  void smpl22()
  {
    std::cout << "changes in passing...\n";
    int a{23}, b{34};
    customFnSwap(&a, &b);
    std::cout << "value of a: " << a << "\n";
    std::cout << "value of b: " << b << "\n";
    return;
  }
  void customFnSwap(int *a, int *b)
  {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
  }
  void addsal(int &x)
  {
    x += 1000;
    std::cout << "total inside callback: " << x << "\n";
  }
  void smpl23(void)
  {
    int sal{800};
    addsal(sal);
    std::cout << "total outside callback: " << sal << "\n";
    return;
  }
  const unsigned long long int factor(int n)
  {
    if (n < 1)
    {
      return 1;
    }
    else
    {
      return n * factor(n - 1);
    }
  }
  const unsigned long long int fib(int num);
  void recurs(void)
  {
    int num{};
    std::cout << "function call enter num: \n";
    //   std::cin >> num;
    auto x = ::util::factor(num);
    std::cout << "return value: " << x << "\n";
    fib(-1);
  }
  const unsigned long long int fib(int num)
  {
    if (num <= 1)
    {
      return num;
    }
    else
    {
      return fib(num - 1) + fib(num - 2);
    }
  }
  void arrays(void)
  {
    std::cout << "intefacing arrays!\n";
    int allocated[6] = {5, 3, 2, 1, 2};
    for (int i{0}; i < (sizeof(allocated) / sizeof(allocated[i])); i++)
    {
      std::cout << allocated[i] << " ";
    } // there are only 5 defined constant the last one is default value of 6 lengths
    std::cout << "\n";
    std::cout << "Another\n";
    int arr[10];
    std::fill_n(arr, 10, 3);
    for (int i = 0; i < sizeof(arr) / sizeof(arr[i]); i++)
    {
      std::cout << arr[i] << " ";
    }
    std::cout << "\n";
    return;
  }
  void sampl1(void)
  {
    int multi[3][3] = {{1, 2, 3}, {4, 5, 6}};

    for (int i = 0; i < sizeof(multi) / sizeof(multi[i]); i++)
    {
      for (int j = 0; j < sizeof(multi[i]) / sizeof(multi[i][j]); j++)
      {
        std::cout << multi[i][j] << " ";
      }
      std::cout << "\n";
    }
    // this is a value type of this type.
    return;
  }
  void simpl()
  {
    // referencing!
    // std::cout << "Reference op/derefence op\n";

    return;
  };
  const int quadruple(int N, int a[])
  {
    int max{};
    int result{0};
    int siz = N * 2 * 4;
    int sumLeft[siz][siz];
    int sumRight[siz][siz];
    for (int i{0}; i < N; i++)
    {
      if (a[i] > max)
      {
        max = a[i];
      }
    }
    for (int i{0}; i < N; i++)
    {
      sumLeft[a[i]][i] = 1;
      sumRight[a[i]][i] = 1;
    }
    for (int i{0}; i <= max; i++)
    {
      for (int j{0}; j < N; j++)
      {
        sumLeft[i][j] = sumLeft[i][j - 1] + sumLeft[i][j];
      }
      for (int j{N - 2}; j >= 0; j--)
      {
        sumRight[i][j] = sumRight[i][j + 1] + sumRight[i][j];
      }
    }
    for (int i{1}; i < N; i++)
    {
      for (int j{i + 1}; j < N - 1; j++)
      {
        result = result + (sumLeft[a[j]][i - 1] * sumRight[a[j]][j + 1]);
      }
    }
    return result;

    // for (int i{0}, j{0}, k{0}, l{0}; i < N; i++)

    // {
    //   while (j < N)
    //   {
    //     j++;
    //     while (k < N)
    //     {
    //       k++;
    //       while (l < N)
    //       {
    //         if (a[i] == a[k] && a[j] == a[l])
    //           result = a[i]

    //               l++;
    //       }
    //     }
    //   }
    // }
    // return -1;
  }
  const int subsequence(int a[], int N)
  {
    int result{0};
    for (int i = 0; i < N; i++)
    {
      for (int j = i + 1; j < N; j++)
      {
        for (int k = j + 1; k < N; k++)
        {
          for (int l = k + 1; l < N; l++)
          {
            if (a[i] == a[k] && a[j] == a[l])
            {
              result++;
            }
          }
        }
      }
    }
    return result;
  }
}

int main()
{
  //  int a[] = {1, 2, 31, 532, 234, 234, 1, 2, 4, 7, 323, 532, 234, 4, 7, 1, 2};
  int a[] = {1, 2, 3, 2, 1, 3, 2};
  int x = ::util::subsequence(a, (sizeof(a) / sizeof(a[0])));
  std::cout << x;
  return 0;
}