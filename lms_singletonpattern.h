#ifndef LMS_SINGLETONPATTERN_H
#define LMS_SINGLETONPATTERN_H
#include "lms.h"
#include <QtDebug>
class LMS;

class LMS_SingletonPattern
{
    static LMS *lms;
public:
    LMS_SingletonPattern();
    LMS *getSystem();
};

#endif // LMS_SINGLETONPATTERN_H


