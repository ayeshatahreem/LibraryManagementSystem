#include "lms_singletonpattern.h"

LMS_SingletonPattern::LMS_SingletonPattern()
{

}

LMS *LMS_SingletonPattern::getSystem()
{
    if(lms==nullptr)
        lms=new LMS();
    return lms;
}
LMS *LMS_SingletonPattern::lms = nullptr;
