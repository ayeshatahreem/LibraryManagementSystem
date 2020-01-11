#ifndef LMS_H
#define LMS_H
#include <QDebug>
#include <QtDebug>
#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include "LibraryItem.h"
#include "link.h"
#include "User.h"
#include "date.h"
#include "issue.h"
using namespace std;
class User;
class LibraryItem;
class LMS
{
    vector<LibraryItem *> lp;
    vector<User *> up;
public:
    LMS();
    void reg(User *);
    User *find(string);
    LibraryItem *byID(int);
    void pushLib(LibraryItem *);
    void popLib(LibraryItem *);
    vector<LibraryItem *>byTitle(string,int);
    vector<LibraryItem *>byAuthor(string,int);
    vector<LibraryItem *>bySubj(string,int);
};

#endif // LMS_H
