#include<iostream>
#include<cstring>
using namespace std;
class Account 
{
  private :
    char name[10];
    int id;
    int balance;

  public :
    int SetAccount (char *accName, int accId, int accBal)
    {
      strcpy(name,accName);
      id = accId;
      balance = accBal;

    }
    int Deposit(int money) 
    {
      balance += money;
    }
    int Withdrawal (int money) {
      if(balance>=money){
        balance -= money;
      } else  cout << "잔액이 부족합니다";
    }
};