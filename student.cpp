#include "student.h"

Student::Student(string a,string b,string c,string x):User(a,b),n(c),d(x){}

void Student::print(){}

void Student::setn(string a)
{
    n=a;
}

void Student::setd(string a)
{
    d=a;
}

string Student::getn()const
{
    return n;
}

string Student::getd()const
{
    return d;
}

