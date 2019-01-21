#include "bank_account.h"
using namespace std;

void TEST_SAVINGS();
void TEST_CHECKING();

int main(){
  Bank bank;
  Account account(111,1);
  bank.addAccount(account);
  bank =
  TEST_SAVINGS();
  TEST_CHECKING();
  return 0;
}

void TEST_CHECKING(){
  Bank bank;
  CheckingAccount savings(123,100.0);
  std::cout<<"SavingsAccount instance test"<<std::endl;
  std::cout<<"account number: "<<savings.getAccountNumber()<<std::endl;
  std::cout<<"Checking: "<<savings.getBalance()<<std::endl;
  savings.deposit(20);
  std::cout<<"Checking: "<<savings.getBalance()<<std::endl;
  savings.withdraw(70);
  std::cout<<"Checking: "<<savings.getBalance()<<std::endl;
  Bank *savings2 = new CheckingAccount(321,300.0);
  std::cout<<"CheckingAccount poliformic instance test"<<std::endl;
  std::cout<<"account number: "<<dynamic_cast<CheckingAccount*>(savings2)->getAccountNumber()<<std::endl;
  std::cout<<"Checking: "<<dynamic_cast<CheckingAccount*>(savings2)->getBalance()<<std::endl;
  savings2->deposit(20);
  std::cout<<"Checking: "<<dynamic_cast<CheckingAccount*>(savings2)->getBalance()<<std::endl;
  savings2->withdraw(70);
  std::cout<<"Checking: "<<dynamic_cast<CheckingAccount*>(savings2)->getBalance()<<std::endl;
}
void TEST_SAVINGS(){
  Bank bank;
  SavingsAccount savings(12345,17000.0);
  std::cout<<"SavingsAccount instance test"<<std::endl;
  std::cout<<"account number: "<<savings.getAccountNumber()<<std::endl;
  std::cout<<"savings: "<<savings.getBalance()<<std::endl;
  savings.deposit(20);
  std::cout<<"savings: "<<savings.getBalance()<<std::endl;
  savings.withdraw(70);
  std::cout<<"savings: "<<savings.getBalance()<<std::endl;
  Bank *savings2 = new SavingsAccount(54321,37000.0);
  std::cout<<"SavingsAccount poliformic instance test"<<std::endl;
  std::cout<<"account number: "<<dynamic_cast<SavingsAccount*>(savings2)->getAccountNumber()<<std::endl;
  std::cout<<"savings: "<<dynamic_cast<SavingsAccount*>(savings2)->getBalance()<<std::endl;
  savings2->deposit(20);
  std::cout<<"savings: "<<dynamic_cast<SavingsAccount*>(savings2)->getBalance()<<std::endl;
  savings2->withdraw(70);
  std::cout<<"savings: "<<dynamic_cast<SavingsAccount*>(savings2)->getBalance()<<std::endl;
}
