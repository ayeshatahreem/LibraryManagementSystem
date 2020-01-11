#ifndef LINK_H
#define LINK_H

#include <QtDebug>
#include <QtSql>
#include <QApplication>
#include <QtSql/QSqlQuery>
#include "QtSql/qsql.h"
#include "QtSql/qsqldatabase.h"
#include "QtSql/qsqlquery.h"
#include "qsqldatabase.h"
#include <QSqlQuery>
#include <QSqlQueryModel>
#include "issue.h"
#include "lms_singletonpattern.h"
#include "librarian.h"
#include "clerk.h"
#include "student.h"
#include "dvd.h"
#include "book.h"
class link
{
    QSqlDatabase db;
public:
    link();
    void push(QString,int);
    void pop(QString,int);
    void removeLib(int);
    void test(int,int);
    bool SignIn(QString,QString);
    bool pushStd(QString,QString,QString,QString);
    void pushRecord(QString,int,QString);
    int pushLib(QString,QString,QString);
    void editLib(int,QString,QString,QString);
    void editStudent(QString,QString,QString);
    void popRecord(QString,int,QString,int);
    void function1();
    void function2();
    void function3();
    void function4();
};
#endif // LINK_H
