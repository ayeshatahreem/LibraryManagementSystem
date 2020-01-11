#ifndef CLERKINTERFACE_H
#define CLERKINTERFACE_H
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
namespace Ui {
class ClerkInterface;
}

class ClerkInterface : public QDialog
{
    Q_OBJECT

public:
    explicit ClerkInterface(QWidget *parent = 0);
    ~ClerkInterface();

private slots:
    void on_pushButton_6_clicked();

    void on_pushButton_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

private:
    Ui::ClerkInterface *ui;
};

#endif // CLERKINTERFACE_H
