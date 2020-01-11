#include "available.h"
#include"libraryitem.h"
#include"user.h"
#include"date.h"
#include"link.h"

int available::status()
{
    return 1;
}

int  available::getloan(User * l,LibraryItem * m ,Date n)
 {

     Issue *i=new Issue(l,m,n,Date(0,0,0),0);
     link lk;
     lk.pushRecord(QString::fromStdString(l->getr()),m->gi(),QString::fromStdString(n.print()));
     lk.test(m->gi(),0);
     l->push(i);
     m->pop_user(l);
     lk.pop(QString::fromStdString(l->getr()),m->gi());
     m->sflag(0);
     m->push_issue_info(i);
     m->sflag(0);
     return -1;

 }
 available::available()
 {

 }
