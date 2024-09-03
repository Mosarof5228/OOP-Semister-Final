#include <iostream>
using namespace std;
class Account
{
public:
    double balance;

    Account(double initialBalance)
    {
        balance = initialBalance;
    }
    void DepositeMoney(double amount)
    {
        balance = balance + amount;
    }

    void WithDrawMoney(double amount)

    {
        balance = balance - amount;
    }

    double GetMoney()
    {
        return balance;
    }
};

class SavingsAccount : public Account
{
public:
    SavingsAccount(double initialBalance) : Account(initialBalance) {};
    void addInterest()
    {
        balance = balance + balance * 0.5;
    }
};

class CheckingAccount : public Account
{
public:
    CheckingAccount(double initialBalance) : Account(initialBalance) {};
    void deductFee()
    {
        balance = balance - 1.0;
    }
};

int main()
{

    Account s1(1000);
    s1.DepositeMoney(500);
    s1.WithDrawMoney(100);
    SavingsAccount s2(1000);
    s2.addInterest();
    CheckingAccount s3(1000);
    s3.deductFee();

    cout << "Total Money : " << s1.GetMoney() << endl;
}