#ifndef LIBRARIANINTERFACE_H
#define LIBRARIANINTERFACE_H
#include <QDialog>
#include <QtDebug>
#include "studentinterface.h"
#include "searchlibitem.h"
#include "bookonhold.h"
#include "viewstudent.h"
#include "issueinterface.h"
#include "issueitem.h"
#include "returnitem.h"
#include "addstudent.h"
#include "editstudent.h"
#include "addlibraryitem.h"
#include "renewlibitem.h"
#include "removeitem.h"
namespace Ui {
class LibrarianInterface;
}

class LibrarianInterface : public QDialog
{
    Q_OBJECT

public:
    explicit LibrarianInterface(QWidget *parent = 0);
    ~LibrarianInterface();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_clicked();

private:
    Ui::LibrarianInterface *ui;
};

#endif // LIBRARIANINTERFACE_H
