#ifndef CLIENT_H
#define CLIENT_H
#include <iostream>
#include <string>
#include "Bank_account.h"
#include "Banking_Application.h"
using namespace std;

class Client : public Bank_account
{
    public:
        Client();
        void create_account();
        void List_account();
    protected:
       bool flag ;
    private:
        string name;
        string adress;
        string pnumber;
};

#endif // CLIENT_H
