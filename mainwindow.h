#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtCore/QCoreApplication>
#include <QtDebug>
#include <QMessageBox>
#include <QtSql>
#include "link.h"
#include "clerkinterface.h"
#include "lms_singletonpattern.h"
#include "studentinterface.h"
#include "librarianinterface.h"
#include <QApplication>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QtSql/QSqlQuery>
#include "QtSql/qsql.h"
#include "QtSql/qsqldatabase.h"
#include "QtSql/qsqlquery.h"
#include "qsqldatabase.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);

    ~MainWindow();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    QSqlDatabase db;
};

#endif // MAINWINDOW_H
