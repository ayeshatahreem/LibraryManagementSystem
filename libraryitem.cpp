#include "libraryitem.h"
#include "issue.h"
#include "user.h"
#include"available_singletonpattern.h"
#include"reference_singletonpattern.h"
#include"issueitem_singletonpattern.h"
#include"bookonhold_singletonpattern.h"

LibraryItem::LibraryItem(int a,int b,string c,string d,string e):id(b),t(c),a(d),s(e){
    if(e.compare("Reference"))
        a=-1;
    sflag(a);
}
void LibraryItem::st(string n)
{
    t=n;
}
void LibraryItem::sa(string n)
{
    a=n;
}
void LibraryItem::sflag(int p)
{
    if(p==1)
    {
        available_singletonpattern pt;
        stt=pt.getMySystem();
    }
    else if(p==0)
    {
        issueitem_singletonpattern pt;
        stt=pt.getMySystem();
    }
    else if(p==2)
        {
            bookOnHold_singletonpattern pt;
            stt=pt.getMySystem();

        }
    else if(p==-1)
        {
            reference_singletonpattern pt;
            stt=pt.getMySystem();
        }
}
void LibraryItem::ss(string n)
{
    s=n;
}
int LibraryItem::gi()const
{
    return id;
}
string LibraryItem::gt()const
{
    return t;
}
string LibraryItem::ga()const
{
    return a;
}
string LibraryItem::gs()const
{
    return s;
}
int LibraryItem::gflag()const
{
    return stt->status();
}
vector<User *> LibraryItem::get_u_object()const
{
    return u_object;
}
vector<Issue *> LibraryItem::get_i_pointer()const
{
    return i_pointer;
}
bool LibraryItem::push_user(User *u)
{
    for(int i=0;i<u_object.size();i++)
    {
        User *p=u_object.at(i);
        if(u->getr().compare(p->getr())==0)
            return false;
    }
    u_object.push_back(u);
    return true;
}

void LibraryItem::push_issue_info(Issue *p)
{
    i_pointer.push_back(p);
}

void LibraryItem::pop_user(User *u)
{
    for(int i=0;i<u_object.size();i++)
    {
        User *p=u_object.at(i);
        if(u->getr().compare(p->getr())==0)
            u_object.erase(u_object.begin()+i);
    }
}
int LibraryItem::loan_manipulate(User * u,Date d)
{
    return stt->getloan(u,this,d);
}

