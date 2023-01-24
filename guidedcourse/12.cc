#include <iostream>

namespace entity
{
  class account
  {
  public:
    account()
    {
      balance = 0;
      id = ++nextId;
      std::cout << "you have created a new account with id: " << id << " and " << balance << " balance.\n";
    };
    account(double balance) : balance{balance}, id{++nextId}
    {
      std::cout << "you have created a new account with id: " << id << " and " << balance << " balance.\n";
    };
    account(account &o)
    {
      id = o.id ? o.id : ++nextId;
      balance = o.balance;
    };
    ~account()
    {
      std::cout << "account id: " << id << " is destroyed.\n";
    };
    int id;
    int inputAmount;
    const void state(){};
    const void print() { std::cout << "Account balance: " << balance << "\n"; };
    const void deposit()
    {
      std::cout << "deposit amount: ";
      std::cin >> inputAmount;
      if (inputAmount > 0)
      {
        balance = balance + inputAmount;
        std::cout << "your new balance is " << balance << "\n";
      }
      else
      {
        std::cout << "invalid entry, your balance is " << balance << "\n";
      }
    };
    const void withdraw()
    {
      std::cout << "withdraw amount: ";
      std::cin >> inputAmount;
      if (inputAmount > 0 && balance >= inputAmount)
      {
        balance = balance - inputAmount;
        std::cout << "you have withdrawn " << inputAmount << " your remaining balance is " << balance << "\n";
      }
      else
      {
        std::cout << "you can't withdraw this amount. Your balance is " << balance << "\n";
      }
    };

  protected:
    static int nextId;
    double balance;

  private:
  };
  int account::nextId = 0;
}

int main(void)
{
  entity::account a;
  entity::account b{30};
  std::cout << a.id << "\n";
  std::cout << b.id << "\n";
  entity::account c{a};
  std::cout << c.id << "\n";
  b.deposit();
  a.deposit();
  c.print();
  a.print();
  b.print();
  a.withdraw();
  b.withdraw();
  c.withdraw();
  return 0;
}