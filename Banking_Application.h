#ifndef BANKING_APPLICATION_H
#define BANKING_APPLICATION_H
#include <iostream>
#include <string>
#include "Client.h"
using namespace std;

class Banking_Application : public Client
{
    public:
        Banking_Application();
        void print();
    protected:
    private:
};

#endif // BANKING_APPLICATION_H
