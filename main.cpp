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

}

int main()
{
  ::util::sample16();
  return 0;
}