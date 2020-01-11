#ifndef CLERK_H
#define CLERK_H
#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <QtDebug>
#include "user.h"
using namespace std;
class User;
class Clerk:public User
{
    string n;
public:
    Clerk(string,string,string);
    void print();
};

#endif // CLERK_H

