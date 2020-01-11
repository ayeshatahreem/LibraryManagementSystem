#include "link.h"

link::link()
{
    db= QSqlDatabase::addDatabase("QODBC");
    db.setConnectOptions();
    db.setDatabaseName("DRIVER={SQL Server};Server=DESKTOP-AH88P91\\MSSQLSERVER1;Database=LMS;Trusted_connection=yes");
}
bool link::pushStd(QString a,QString b,QString c,QString d)
{
    if(db.open())
    {
        QSqlQuery x;
        if(x.exec("INSERT INTO users VALUES('"+a+"','"+b+"','"+c+"','"+d+"')"))
        {
            db.close();
            return true;
        }
        else
        {
            db.close();
            return false;
        }
    }
    return false;
}

int link::pushLib(QString a,QString b,QString c)
{
    if(db.open())
    {
        QSqlQuery x;
        x.exec("INSERT INTO libraryItem VALUES('"+a+"','"+b+"','"+c+"',1)");
        bool flag=false;
        QSqlQuery y;
        y.exec("SELECT TOP 1 itemID FROM libraryItem ORDER BY itemID desc");
        if(y.next())
        {
            int p=y.value(0).toInt(&flag);
            db.close();
            return p;
        }
    }
    return 0;
}

void link::function1()
{
    if(db.open())
    {
        LMS_SingletonPattern p;
        QSqlQuery a;
        a.exec("SELECT * FROM users");
        while(a.next())
        {
            User *u;
            QString rollNo=a.value(0).toString();
            QString password=a.value(1).toString();
            QString name=a.value(2).toString();
            QString dpt=a.value(3).toString();
            string w=dpt.toStdString();
            string x=rollNo.toStdString();
            string y=password.toStdString();
            string z=name.toStdString();
            if(rollNo.compare("librarian")==0)
                u=new Librarian(x,y,z);
            else if(rollNo.compare("clerk")==0)
                u=new Clerk(x,y,z);
            else
                u=new Student(x,y,z,w);
            p.getSystem()->reg(u);
        }
        db.close();
    }
}
void link::function2()
{
    if(db.open())
    {
        LMS_SingletonPattern j;
        QSqlQuery x;
        x.exec("SELECT * FROM libraryItem");
        while(x.next())
        {
            int i=0,r=x.value(0).toInt();
            QString title=x.value(1).toString();
            QString author=x.value(2).toString();
            QString subject=x.value(3).toString();
            string a=title.toStdString();
            string b=author.toStdString();
            string c=subject.toStdString();
            int y=x.value(4).toInt();
            LibraryItem *p;
            if(i==0)
                p=new DVD(y,r,a,b,c);
            else
                p=new Book(y,r,a,b,c);
            j.getSystem()->pushLib(p);
            //qDebug()<<j.getSystem()->byID(r)->gi();
        }
        db.close();
    }
}
void link::function3()
{
    if(db.open())
    {
        LMS_SingletonPattern j;
        QSqlQuery x;
        x.exec("SELECT * FROM recordList");
        while(x.next())
        {
            QString n=x.value(1).toString();
            string t=n.toStdString();
            User *u=j.getSystem()->find(t);
            int m=x.value(2).toInt();
            LibraryItem *p=j.getSystem()->byID(m);
            p->push_user(u);
        }
        db.close();
    }
}
void link::function4()
{
    if(db.open())
    {
        LMS_SingletonPattern j;
        QSqlQuery query4;
        query4.exec("SELECT rollNo,itemID,month(issueDate),day(issueDate),year(issueDate),month(returnDate),day(returnDate),year(returnDate),fine FROM issue");
        while(query4.next())
        {
            QString r=query4.value(0).toString();
            string g=r.toStdString();
            int s=query4.value(1).toInt();
            Date v(query4.value(2).toInt(),query4.value(3).toInt(),query4.value(4).toInt());
            Date x(query4.value(5).toInt(),query4.value(6).toInt(),query4.value(7).toInt());
            int fine=query4.value(8).toInt();
            LibraryItem *q=j.getSystem()->byID(s);
            User *p=j.getSystem()->find(g);
            Issue *t=new Issue(p,q,v,x,fine);
            p->push(t);
            q->push_issue_info(t);
        }
        db.close();
    }
}
void link::editLib(int a,QString b,QString c, QString d)
{
    if(db.open())
    {
        QSqlQuery query;
        query.exec("UPDATE libraryItem SET title='"+b+"',author='"+c+"',subject='"+d+"' WHERE itemID='"+a+"'");
        db.close();
    }
}

void link::editStudent(QString a,QString b,QString c)
{
    if(db.open())
    {
        QSqlQuery query;
        query.exec("UPDATE users SET name='"+b+"',dpt='"+c+"' WHERE rollNo='"+a+"'");
        db.close();
    }
}

void link::removeLib(int a)
{
    if(db.open())
    {
        QSqlQuery query;
        query.prepare("DELETE FROM libraryItem WHERE itemID=?");
        query.addBindValue(a);
        query.exec();
        db.close();
    }
}
void link::pushRecord(QString f,int g,QString h)
{
    if(db.open())
    {
        qDebug()<<"chl gya";
        QSqlQuery query;
        query.exec("INSERT INTO issue VALUES('"+f+"','"+g+"','"+h+"','1-1-1',0)");
        db.close();
    }
}

void link::popRecord(QString a,int b,QString c,int d)
{
    if(db.open())
    {
        QSqlQuery query;
        query.exec("UPDATE issue SET returnDate='"+c+"',fine='"+d+"' WHERE rollNo='"+a+"' AND itemID='"+b+"'");
        db.close();
    }
}

void link::push(QString a,int b)
{
    if(db.open())
    {
        QSqlQuery query;
        query.exec("INSERT INTO recordList VALUES('"+a+"','"+b+"')");
        db.close();
    }
}

void link::pop(QString x,int y)
{
    if(db.open())
    {
        QSqlQuery query;
        query.exec("DELETE FROM recordList WHERE rollNo='"+x+"' AND itemID='"+y+"'");
        db.close();
    }
}

void link::test(int r,int s)
{
    if(db.open())
    {
        QSqlQuery query;
        query.prepare("UPDATE libraryItem SET itemType=? WHERE itemID=?");
        query.addBindValue(s);
        query.addBindValue(r);
        query.exec();
        db.close();
    }
}
bool link::SignIn(QString a,QString b)
{
    if(db.open())
    {
        QSqlQuery query;
        query.exec("SELECT * FROM users WHERE rollNo='"+a+"' AND password='"+b+"'");
        if(query.next())
        {
            db.close();
            return true;
        }
        else
        {
            db.close();
            return false;
        }
    }

    return false;
}
