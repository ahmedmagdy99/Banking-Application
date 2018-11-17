#include <iostream>
#include "Bank_account.h"
#include "Banking_Application.h"
#include "Client.h"
using namespace std;
int w=0;
Banking_Application::Banking_Application()
{

}
Banking_Application client[5];
void Banking_Application::print()
{
    loop:
    cout << "Welcome to FCI Banking Application and Information" << endl;
    cout << "1. Create a New Account" << endl;
    cout << "2. List Clients and Accounts" << endl;
    cout << "3. Withdraw Money" << endl;
    cout << "4. Deposit Money" << endl;
    int x;
    cout << "Please Enter Your Choice ====> ";
    cin >> x;
    cout << endl;
    switch (x)
    {
        case 1 :
           client[w].create_account();
            break;
        case 2 :
            for (int s=0 ; s<5 ; s++){
            client[s].List_account();
            }
            break;
        case 3 :
            if (client[w].flag == false)
           {
              client[w].withdraw();
            }
            else
            {
                client[w].withdraw1();
            }
            break;
        case 4 :
            if (client[w].flag == false)
            {
               client[w].deposite();
            }
            else
           {
               client[w].deposite1();
            }
            break;
    }
cout <<endl<< "Want to make another process ? "<<endl;
cout << "1- Yes ";
cout <<endl<<"2- NO ";
int o;
cout<< "Choose > ";
cin >>o;
if(o==1){
goto loop;
}
if(o==2){
w++;
goto loop;

}

}
