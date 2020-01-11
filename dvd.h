#ifndef DVD_H
#define DVD_H
#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include "libraryitem.h"
#include <QtDebug>
using namespace std;
class DVD:public LibraryItem
{
public:
    DVD(int,int,string,string,string);
    void print();
    string check();
};

#endif // DVD_H

