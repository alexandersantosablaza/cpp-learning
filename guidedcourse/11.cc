#include <iostream>

class UniqueID
{
protected:
  static int nextID;

public:
  int id;
  UniqueID();
  UniqueID(const UniqueID &o);
  UniqueID &operator=(const UniqueID &o);
};
int UniqueID::nextID = 0;
UniqueID::UniqueID()
{
  id = ++nextID;
}
UniqueID::UniqueID(const UniqueID &o)
{
  id = o.id;
}
UniqueID &UniqueID::operator=(const UniqueID &o)
{
  id = o.id;
  return (*this);
}

int main()
{
  UniqueID a;
  UniqueID b;
  UniqueID c;
  UniqueID d = c;
  UniqueID e(c);
  UniqueID f{e};
  std::cout << a.id << "\n";
  std::cout << b.id << "\n";
  std::cout << c.id << "\n";
  std::cout << d.id << "\n";
  std::cout << e.id << "\n";
  std::cout << f.id << "\n";
  return 0;
}