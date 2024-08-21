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
    void DepositMoney(double amount)
    {
        balance = balance + amount;
    }

    void WithdrawMoney(double amount)
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
    SavingsAccount(double initialBalance) : Account(initialBalance) {}
    void addInterest()
    {
        DepositMoney(balance * 0.05);
    }
};

class CheckingAccount : public Account
{
public:
    CheckingAccount(double initialBalance) : Account(initialBalance) {}
    void deductFee()
    {
        WithdrawMoney(1.0);
    }
};

int main()
{
    Account s1(1000);
    s1.DepositMoney(500);
    s1.WithdrawMoney(100);

    SavingsAccount s2(1000);
    s2.DepositMoney(500);
    s2.addInterest();

    CheckingAccount s3(1000);
    s3.DepositMoney(500);
    s3.deductFee();

    cout << "Account Total Money: " << s1.GetMoney() << endl;
    cout << "Savings Account Total Money: " << s2.GetMoney() << endl;
    cout << "Checking Account Total Money: " << s3.GetMoney() << endl;

    return 0;
}
