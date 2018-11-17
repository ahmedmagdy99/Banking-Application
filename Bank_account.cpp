#include <iostream>
#include <string>
#include "Bank_account.h"
#include "Banking_Application.h"
using namespace std;
int i=0;
string arr[5]={"FCI-10","FCI-11","FCI-12","FCI-13","FCI-14"};
Bank_account::Bank_account(double money)
{
    Balance = money;
}

Bank_account::Bank_account()
{
    Balance = 0;
}

void Bank_account::setvalue()
{
    cin >> Balance;
    ID=arr[i];
    i++;
}
void Bank_account::setvalue1()
{
    loop2:
    cin >> Balance;
    if(Balance<1000)
    {
        cout << " Sorry. This is less than the minimum balance you should add"<<endl;
        cout << "Please Enter the Starting Balance ====> ";
        Balance -= Balance;
        goto loop2;
    }
    ID=arr[i];
    i++;
}

void Bank_account::getvalue()
{
    cout << Balance;
    cout << ID;
}

void Bank_account::withdraw()
{
    cout << "Account ID: " << ID << endl;
    cout << "Balance: " << Balance<<endl<<endl;
    double amount;
    cout << "Please Enter The Amount to Withdraw =========> " ;
    cin >> amount;
    if (amount > Balance)
    {
        cout << "Sorry. This is more than what you can withdraw." << endl<<endl;
    }
    else
    {
        Balance -= amount;
        cout << "Thank you." << endl;
        cout << "Account ID: " << ID << endl;
        cout << "New Balance: " << Balance<<endl<<endl;


    }
}



void Bank_account::withdraw1()
{   cout << "Account ID: " << ID << endl;
    cout << "Balance: " << Balance<<endl<<endl;
    double amount;
    cout << "Please Enter The Amount to Withdraw =========> " ;
    cin >> amount;
    if (amount > Balance || ((Balance-amount)<1000))
    {
        cout << "Sorry. This is more than what you can withdraw or (your balance could not be less than 1000)" << endl<<endl;
    }

    else
    {
        Balance -= amount;
        cout << "Thank you." << endl;
        cout << "Account ID: " << ID<<endl;
        cout << "New Balance: " << Balance<<endl<<endl;

    }

}

void Bank_account::deposite()
{
    double amount;
    cout << "Please Enter The Amount to Deposite =========> " ;
    cin >> amount;
    Balance += amount;
    cout << "Thank you." << endl;
    cout << "Account ID: " << ID<<endl;
    cout << "New Balance: " << Balance<<endl<<endl;

}
void Bank_account::deposite1()
{
    double amount;
    cout << "Please Enter The Amount to Deposite =========> " ;
    cin >> amount;
    if(amount<100)
    {
          cout << "Sorry. This is less than what you can deposite"<<endl;
    }
    else {
    Balance += amount;
    cout << "Thank you." << endl;
    cout << "Account ID: " << ID<<endl;
    cout << "New Balance: " << Balance<<endl<<endl;

    }
}
