#ifndef ADDSTUDENT_H
#define ADDSTUDENT_H
#include <QDialog>
#include <QtDebug>
#include <QMessageBox>
#include "lms_singletonpattern.h"
#include "link.h"
#include "user.h"
#include "student.h"
namespace Ui {
class addStudent;
}

class addStudent : public QDialog
{
    Q_OBJECT

public:
    explicit addStudent(QWidget *parent = 0);
    ~addStudent();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::addStudent *ui;
};

#endif // ADDSTUDENT_H
