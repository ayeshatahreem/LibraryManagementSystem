#ifndef ISSUELIBITEM_H
#define ISSUELIBITEM_H
#include "state.h"
#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <QtDebug>

class issuelibItem:public State
{
public:
    issuelibItem();
    virtual int status();
    virtual int getloan(User * u,LibraryItem* l ,Date d);
};

#endif // ISSUELIBITEM_H






