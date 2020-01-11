#ifndef REFERENCE_SINGLETONPATTERN_H
#define REFERENCE_SINGLETONPATTERN_H

#include "reference.h"
class reference_singletonpattern
{
    static Reference* mySystem;
public:
    reference_singletonpattern();
    Reference *getMySystem();
};

#endif // REFERENCE_SINGLETONPATTERN_H

