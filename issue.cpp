#include "issue.h"

Issue::Issue(User *p,LibraryItem *q,Date x,Date y,int z):u(p),l(q),i(x),r(y),f(z)
{

}
int Issue::calFine(Date p)
{
    r=p;
    int a=0, d=i.check(r);
    if(d>14) a=d-14;
    f=a*10;
    return a;
}
string Issue::geti()
{
    return i.print();
}
string Issue::getr()
{
    if(!status())
    {
        string a="LibItem not returned!";
        return a;
    }
    else
    {
        string a=r.print();
        return a;
    }
}
User *Issue::getter()const
{
    return u;
}
LibraryItem *Issue::get()const
{
    return l;
}
bool Issue::status()const
{
    if(f==0)
        return false;
    else
        return true;
}
