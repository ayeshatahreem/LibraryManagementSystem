#ifndef REFERENCE_H
#define REFERENCE_H
#include "state.h"
#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <QtDebug>

class Reference:public State
{
public:
    Reference();
     virtual int status();
   virtual int getloan(User * u,LibraryItem* l ,Date d);
};

#endif // REFERENCE_H

