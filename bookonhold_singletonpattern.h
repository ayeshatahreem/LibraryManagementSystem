#ifndef BOOKONHOLD_SINGLETONPATTERN_H
#define BOOKONHOLD_SINGLETONPATTERN_H

#include "onhold.h"
class bookOnHold_singletonpattern
{
    static OnHold* mySystem;
public:
    bookOnHold_singletonpattern();
    OnHold *getMySystem();
};

#endif // BOOKONHOLD_SINGLETONPATTERN_H


