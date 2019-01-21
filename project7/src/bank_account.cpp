#include "bank_account.h"

Bank::Bank(){
  std::cout<<"Bank constructor!"<<std::endl;
}
Bank::~Bank(){}
void Bank::deposit(double amount){}
void Bank::withdraw(double amount){}
void Bank::addAccount(Account account){
  accounts.push_back(account);
}

SavingsAccount::SavingsAccount(int number,double amount){
  std::cout<<"Savings constructor!"<<std::endl;
  account_number = number;
  balance = amount;
}
int SavingsAccount::getAccountNumber(){
  return account_number;
}
double SavingsAccount::getBalance(){
  return balance;
}
void SavingsAccount::deposit(double amount){
  std::cout<<"deposit successful!"<<std::endl;
  balance+=amount;
}
void SavingsAccount::withdraw(double amount){
  if (balance-amount>10) {
    std::cout<<"withdraw successful!"<<std::endl;
    balance-=amount;
  }else{
    std::cout<<"Below the treshold!"<<std::endl;
    return;
  }
}

CheckingAccount::CheckingAccount(int number,double amount){
  std::cout<<"Checking constructor!"<<std::endl;
  account_number = number;
  balance = amount;
}
int CheckingAccount::getAccountNumber(){
  return account_number;
}
double CheckingAccount::getBalance(){
  return balance;
}
void CheckingAccount::deposit(double amount){
  std::cout<<"deposit successful!"<<std::endl;
  balance+=amount;
}
void CheckingAccount::withdraw(double amount){
  if (balance-amount>10) {
    std::cout<<"withdraw successful!"<<std::endl;
    balance-=amount;
  }else{
    std::cout<<"Below the treshold!"<<std::endl;
    return;
  }
}

Account::Account(int number,int account_t){
  if (account_t == 1) {
    type = new CheckingAccount(number,0);
  }else if (account_t == 2) {
    type = new SavingsAccount(number,0);
  }else{
    type = new Bank();
  }
}
Bank* Account::getBankAccount(){ return type; }
