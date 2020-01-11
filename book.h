#ifndef BOOK_H
#define BOOK_H
#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <QtDebug>
#include "libraryitem.h"
using namespace std;
class Book:public LibraryItem
{
public:
  Book(int,int,string,string,string);
  void print();
  string check();
};

#endif // BOOK_H



