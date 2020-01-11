#include "user.h"
#include "issue.h"
#include "libraryitem.h"

User::User(string a,string b):r(a),p(b) {}

string User::getr()const
{
    return r;
}

string User::getp()const
{
    return p;
}
vector<Issue *> User::getarr()const
{
    return arr;
}
void User::push(Issue *x)
{
    arr.push_back(x);
}
Issue *User::pop(LibraryItem *x)
{
    Issue *p=NULL;
    for(int i=0; i<arr.size();i++)
    {
        Issue *b= arr.at(i);
        if(b->get()->gt().compare(x->gt())==0) p=b;
    }
    return p;
}

