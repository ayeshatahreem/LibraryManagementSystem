#ifndef ONHOLD_H
#define ONHOLD_H
#include "state.h"
#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <QtDebug>

class OnHold:public State
{
public:
    OnHold();
    virtual int status();
    virtual int getloan(User * u,LibraryItem * l ,Date d);
};

#endif // ONHOLD_H


