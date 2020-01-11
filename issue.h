#ifndef ISSUE_H
#define ISSUE_H
#include <iostream>
#include <cstring>
#include <string>
#include <QtDebug>
#include <vector>
#include "date.h"
#include "User.h"
#include "link.h"
#include "LibraryItem.h"
using namespace std;
class User;
class LibraryItem;
class Issue
{
    User *u;
    LibraryItem *l;
    Date i,r;
    int f;
public:
    Issue(User *,LibraryItem *,Date,Date,int);
    string geti();
    string getr();
    int calFine(Date);
    User *getter()const;
    LibraryItem *get()const;
    bool status()const;
};

#endif // ISSUE_H

