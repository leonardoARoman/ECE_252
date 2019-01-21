#include <iostream>
#include <vector>

class Account;
class Bank{
private:
  std::vector<Account> accounts;
public:
  Bank();
  ~Bank();
  virtual void deposit(double);
  virtual void withdraw(double);
  void addAccount(Account);
};

class SavingsAccount: public Bank{
private:
  int account_number;
  double balance;
public:
  SavingsAccount(int,double);
  int getAccountNumber();
  double getBalance();
  void deposit(double);
  void withdraw(double);
};

class CheckingAccount:public Bank{
private:
  int account_number;
  double balance;
public:
  CheckingAccount(int,double);
  int getAccountNumber();
  double getBalance();
  void deposit(double);
  void withdraw(double);
};

class Account{
private:
  Bank *type;
public:
  Account(int,int);
  Bank* getBankAccount();
};
