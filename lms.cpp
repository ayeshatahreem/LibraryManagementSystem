#include "lms.h"
LMS::LMS()
{

}

void LMS::reg(User *p)
{
    up.push_back(p);
}

User *LMS::find(string rollNum)
{
    for(int i=0;i<up.size();i++)
    {
        User *p = up.at(i);
        if(rollNum.compare(p->getr())==0)
            return p;
    }
    return NULL;
}
void LMS::pushLib(LibraryItem *p)
{
    lp.push_back(p);
}
void LMS::popLib(LibraryItem *m)
{
    for(int i=0;i<lp.size();i++)
    {
        LibraryItem *x=lp.at(i);
        if(x->gi()==m->gi())
            lp.erase(lp.begin()+i);
    }
}

LibraryItem *LMS::byID(int x)
{
    for(int i=0;i<lp.size();i++)
    {
        LibraryItem *l = lp.at(i);
        if(l->gi()== x)
            return l;
    }
    return NULL;
}
vector<LibraryItem *>LMS::byTitle(string t,int x)
{
    vector<LibraryItem *> v;
    for(int i=0;i<lp.size();i++)
    {
        LibraryItem *l= lp.at(i);

        if(l->gt().compare(t)==0)
            v.push_back(l);
        else if(l->gt().compare(t)==0)
            v.push_back(l);

          qDebug()<<v.size();
    }
    return v;
}
vector<LibraryItem *>LMS::byAuthor(string a,int x)
{
    vector<LibraryItem *> v;
    for(int i=0;i<lp.size();i++)
    {
        LibraryItem *l= lp.at(i);
        if((l->check().compare("Book")==0) && (l->ga().compare(a)==0)&& (x==0))
            v.push_back(l);
        else if((l->check().compare("DVD")==0)&&(l->ga().compare(a)==0)&& (x==1))
            v.push_back(l);
    }
    return v;
}

vector<LibraryItem *>LMS::bySubj(string s,int x)
{
    vector<LibraryItem *> v;
    for(int i=0;i<lp.size();i++)
    {
        LibraryItem *l= lp.at(i);
        if((l->check().compare("Book")==0) && (l->gs().compare(s)==0) && x==0)
            v.push_back(l);
        else if((l->check().compare("DVD")==0) && (l->gs().compare(s)==0)&& x==1)
            v.push_back(l);
    }
     return v;
}
