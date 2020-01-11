#ifndef STUDENT_H
#define STUDENT_H
#include <QtDebug>
#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include "user.h"
using namespace std;

class Student:public User
{
    string n,d;
public:
    void print();
    void setn(string);
    void setd(string);
    string getn()const;
    string getd()const;
    Student(string,string,string,string);
};

#endif // STUDENT_H

