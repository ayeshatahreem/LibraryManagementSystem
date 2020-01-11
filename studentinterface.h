#ifndef STUDENTINTERFACE_H
#define STUDENTINTERFACE_H
#include <QtDebug>
#include <QDialog>
#include <QMessageBox>
#include "searchlibitem.h"
#include "bookonhold.h"
#include "viewstudent.h"
#include "issueinterface.h"
#include "mainwindow.h"
namespace Ui {
class StudentInterface;
}
class StudentInterface : public QDialog
{
    Q_OBJECT

public:
    explicit StudentInterface(QWidget *parent = 0);
    ~StudentInterface();

private slots:
    void on_pushButton_5_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_clicked();

private:
    Ui::StudentInterface *ui;
};

#endif // STUDENTINTERFACE_H
