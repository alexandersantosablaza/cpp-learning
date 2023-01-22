#include <iostream>

namespace dbo
{
  class Base
  {
  private:
    int x;
    int *ptr;

  public:
    Base()
    {
      std::cout << "Default constrctor call\n";
      x = 0;
    }
    Base(int a = 0, int *ptr = 0) : x{a}, ptr{ptr} { std::cout << " parameterized intializer cosntructor\n"; } // initializer
    ~Base()
    {
      std::cout << "Destruction\n";
      delete this->ptr;
    } // destructor
    const void print()
    {
      std::cout << "pointer: " << this->ptr << " pointer value: " << *ptr << " "
                << "value: "
                << this->x;
    }
  };
  class phone
  {
  private:
    std::string name;
    std::string size;

  public:
    phone()
    {
      name = "default";
      size = "default";
    }
    phone(std::string name, std::string size)
    {
      this->name = name;
      this->size = size;
    }; // constructor

    // constructor is a function of the class of same name used to init an object.

    void makeCall()
    {
      std::cout << "you have a call in " << name << "\n";
    };
    void receiveCall()
    {
      std::cout << "you have a recive call in " << name << "\n";
    };
  };
  class graph
  {
  private:
    double x;
    double y;

  public:
    graph()
    {
      this->x = 0;
      this->y = 0;
    } // default
    graph(double X, double Y)
    {
      this->x = X;
      this->y = Y;
    } // parameterized
    graph(const graph &g)
    {
      this->x = g.x;
      this->y = g.y;
    } // copy constructrors
    inline const void print()
    {
      std::cout << "The value of X: " << this->x << "\n"
                << "The valeu of Y: " << this->y << "\n";
    } // class members function
  };
}
int main()
{
  dbo::graph g1;
  g1.print();
  dbo::graph g2{1.3, 2.3};
  g2.print();
  dbo::graph g3{g2};
  g2.print();
  dbo::Base b(1, new int(2));
  b.print();
  return 0;
}
int xmain(void)
{
  ::dbo::phone newphone;
  newphone.makeCall();
  newphone.receiveCall();
  ::dbo::phone gi("Iphone12", "1000x1000");
  gi.makeCall();
  gi.receiveCall();
  dbo::phone pixel("google pixels", "129x128");
  pixel.makeCall();
  pixel.receiveCall();
  return 0;
}