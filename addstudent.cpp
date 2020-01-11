#include "addstudent.h"
#include "ui_addstudent.h"

addStudent::addStudent(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addStudent)
{
    ui->setupUi(this);
}

addStudent::~addStudent()
{
    delete ui;
}

void addStudent::on_pushButton_2_clicked()
{
    this->close();
}

void addStudent::on_pushButton_clicked()
{
    LMS_SingletonPattern obj;
    link link;
    QString rollNo=ui->textEdit->toPlainText();
    QString pass=ui->textEdit_2->toPlainText();
    QString name=ui->textEdit_3->toPlainText();
    QString dpt=ui->textEdit_4->toPlainText();
    string r=rollNo.toStdString();
    string p=pass.toStdString();
    string n=name.toStdString();
    string d=dpt.toStdString();
    if(!(pass.isEmpty() || dpt.isEmpty() || rollNo.isEmpty() || name.isEmpty()))
    {
        User *s=new Student(r,p,n,d);
        obj.getSystem()->reg(s);
        link.pushStd(rollNo,pass,name,dpt);
        QMessageBox::information(this,tr("ADD STATUS"),tr("Student has been added in database!"));
    }
    else
        QMessageBox::warning(this,("FIELDS STATUS!"),("Fill in all the missing fields!"));
}
