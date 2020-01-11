#ifndef AVAILABLE_H
#define AVAILABLE_H
#include "state.h"
#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <QtDebug>

class available:public State
{
public:
    available();
    virtual int status();
    virtual int getloan(User * u,LibraryItem* l ,Date d);
};

#endif // AVAILABLE_H








