#ifndef LIBRARIAN_H
#define LIBRARIAN_H
#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include "user.h"
#include <QtDebug>
using namespace std;
class User;
class Librarian:public User
{
    string n;
public:
    Librarian(string,string,string);
    void print();
};

#endif // LIBRARIAN_H

