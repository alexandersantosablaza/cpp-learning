#include <iostream>
#include "App.hh"
namespace x
{
  class A
  {
  private: // within class only
    int member1;

  protected: // with firend functions can be accessed
    int protectedMember;

  public: // outside class inside class
    int InputA;
  };
}

int main(void)
{
  x::A x;
  x.InputA = 23;
  App::Init();
  return 0;
}