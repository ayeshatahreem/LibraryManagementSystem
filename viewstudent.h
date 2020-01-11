#ifndef VIEWSTUDENT_H
#define VIEWSTUDENT_H
#include <QDialog>
#include <QtDebug>
#include <QMessageBox>
#include "mainwindow.h"
#include "lms_singletonpattern.h"
#include "link.h"
#include "user.h"
#include "student.h"
namespace Ui {
class viewStudent;
}

class viewStudent : public QDialog
{
    Q_OBJECT

public:
    explicit viewStudent(QWidget *parent = 0);
    ~viewStudent();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::viewStudent *ui;
};

#endif // VIEWSTUDENT_H
