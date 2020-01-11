#include "issuelibitem.h"
#include"libraryitem.h"
#include"user.h"
#include"date.h"
#include"link.h"

int issuelibItem::status()
{
    return 0;
}

 int  issuelibItem::getloan(User * l,LibraryItem* m,Date n)
 {
     Issue *i=l->pop(m);
     int fine=0;
     if(!i->status())
         fine=i->calFine(n);
     link link;
     link.popRecord(QString::fromStdString(l->getr()),m->gi(),QString::fromStdString(n.print()),fine*10);
     link.test(m->gi(),1);
     m->sflag(1);
     if(m->get_u_object().size()==0)
         m->sflag(1);
     else
        m->sflag(2);
     return fine;
 }
 issuelibItem::issuelibItem()
 {

 }
