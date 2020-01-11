#ifndef AVAILABLE_SINGLETONPATTERN_H
#define AVAILABLE_SINGLETONPATTERN_H

#include "available.h"
class available_singletonpattern
{
    static available* mySystem;
public:
    available_singletonpattern();
    available *getMySystem();
};

#endif // AVAILABLE_SINGLETONPATTERN_H
