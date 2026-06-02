#include "module2.h"
void Account::deposit(double amount)
{
    balance+=amount;
}
void Account::withdraw(double money)
{
    balance-=money;
}