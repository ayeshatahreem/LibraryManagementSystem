#ifndef DATE_H
#define DATE_H
#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <math.h>
#include <stdlib.h>
#include <QtDebug>
using namespace std;

class Date
{
   int d;
   int m;
   int y;
public:
    Date();
    Date(int,int,int);
    int check(Date &);
    string print();
    int getm()const;
    int getd()const;
    int gety()const;
};

#endif // DATE_H
