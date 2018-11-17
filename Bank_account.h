#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H
#include <iostream>
#include <string>
using namespace std;

class Bank_account
{
    public:
        Bank_account(double money);
        Bank_account ();
        void setvalue();
        void setvalue1();
        void getvalue();
        void withdraw();
        void deposite();
        void withdraw1();
        void deposite1();
    protected:
        double Balance;
        string ID;
    private:

};

#endif // BANK_ACCOUNT_H
