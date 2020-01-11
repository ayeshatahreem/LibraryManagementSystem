#ifndef STATE_H
#define STATE_H
#include <string>
#include <cstring>
using namespace std;
class User;
class LibraryItem;
class Date;

class State
{

public:
    State();
    virtual int status()=0;
    virtual int getloan(User * u,LibraryItem* l ,Date d)=0;
};

#endif // STATE_H
