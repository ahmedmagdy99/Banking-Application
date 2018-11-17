#include <iostream>
#include <string>
#include "Bank_account.h"
#include "Banking_Application.h"
#include "Client.h"
using namespace std;
int y=0;


Client::Client ()
{
}

void Client::create_account()
{

    cout << "Please Enter Client Name ====> ";
    cin.ignore();
    getline(cin,name);
    cout << endl;
    cout << "Please Enter Client Address ====> ";
    cin.ignore();
    getline(cin,adress);
    cout << endl;
    cout << "Please Enter Client Phone ====> ";
    cin >> pnumber;
    cout << endl;
    cout << "What Type of Account Do You Like? (1) Basic (2) Saving – Type 1 or 2 ====> ";


    cin >> y;
    switch (y)
    {
        case 1:
            flag=false;
            cout <<endl<<"Please Enter the Starting Balance ====> ";
            setvalue();
            break;
        case 2:
            flag = true;
            cout << "Please Enter the Starting Balance ====> ";
            setvalue1();
            break;
    }

    cout << endl <<"An account was created with ID " << ID << " and Starting Balance " << Balance << " L.E." << endl;
}

void Client::List_account()
{
    cout << endl << endl;
    cout << "--------------------------" << name << "---------------------------" << endl;
    cout << "Address: " << adress << endl;
    cout << "Phone: " << pnumber << endl;
    if (y==1)
    {
    cout << "Account ID: " << ID << "(Basic)" << endl;
    }
    if(y==2)
    {
    cout << "Account ID: " << ID << "(Saving)" << endl;
    }
    cout << "Balance: " << Balance << endl;
    cout << "-------------------------------------------------------------------" << endl;
}
