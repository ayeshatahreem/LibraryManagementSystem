#ifndef EDITSTUDENT_H
#define EDITSTUDENT_H
#include <QtDebug>
#include <QDialog>
#include <QMessageBox>
#include "lms_singletonpattern.h"
#include "link.h"
#include "user.h"
#include "student.h"
namespace Ui {
class EditStudent;
}

class EditStudent : public QDialog
{
    Q_OBJECT

public:
    explicit EditStudent(QWidget *parent = 0);
    ~EditStudent();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::EditStudent *ui;
};

#endif // EDITSTUDENT_H
