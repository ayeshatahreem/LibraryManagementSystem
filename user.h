#ifndef USER_H
#define USER_H

#include <iostream>
#include <cstring>
#include <string>
#include <vector>
using namespace std;
class Issue;
class LibraryItem;
class User
{
    string r, p;
    vector<Issue *>arr;
public:
    User(string,string);
    string getr()const;
    string getp()const;
    void push(Issue *);
    virtual void print()=0;
    Issue *pop(LibraryItem *);
    vector<Issue *> getarr()const;
};

#endif // USER_H


