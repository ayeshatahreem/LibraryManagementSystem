#ifndef LIBRARYITEM_H
#define LIBRARYITEM_H
#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <QtDebug>
#include <QDebug>
#include"state.h"
using namespace std;
class User;
class Issue;

class LibraryItem
{
    int id;

    State * stt;
    string t,a,s;
    vector<User*> u_object;
    vector<Issue *> i_pointer;
public:
    LibraryItem(int,int,string,string,string);
    void st(string);
    void sa(string);
    void ss(string);
    void sflag(int);
    int gi()const;
    string gt()const;
    string ga()const;
    string gs()const;
    int gflag()const;
    void push_issue_info(Issue *);
    bool push_user(User *);  //place on hold
    void pop_user(User *); // remove on hold
    vector<Issue *>get_i_pointer()const;
    vector<User *>get_u_object()const;
    int loan_manipulate(User * u,Date d);
    virtual string check()=0;
    virtual void print()=0;
};

#endif // LIBRARYITEM_H
