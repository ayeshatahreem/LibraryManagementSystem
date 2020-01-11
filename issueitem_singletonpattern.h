#ifndef ISSUEITEM_SINGLETONPATTERN_H
#define ISSUEITEM_SINGLETONPATTERN_H
#include "issuelibitem.h"

class issueitem_singletonpattern
{
    static issuelibItem* mySystem;
public:
    issueitem_singletonpattern();
    issuelibItem *getMySystem();
};

#endif // ISSUEITEM_SINGLETONPATTERN_H
