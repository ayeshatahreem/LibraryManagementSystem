#include "editstudent.h"
#include "ui_editstudent.h"

EditStudent::EditStudent(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EditStudent)
{
    ui->setupUi(this);
}

EditStudent::~EditStudent()
{
    delete ui;
}
void EditStudent::on_pushButton_3_clicked()
{
    this->close();
}


void EditStudent::on_pushButton_2_clicked()
{
    link link;
    User *u;
    LMS_SingletonPattern lms;
    QString a=ui->textEdit_2->toPlainText();
    QString b=ui->textEdit_4->toPlainText();
    QString c=ui->textEdit->toPlainText();
    string x=c.toStdString();
    string y=a.toStdString();
    string z=b.toStdString();
    if(!(a.isEmpty() || b.isEmpty()))
    {
        if(!c.isEmpty())
        {
            if((u=lms.getSystem()->find(x))!=NULL)
            {
                Student *s=dynamic_cast<Student *>(u);
                s->setn(y);
                s->setd(z);
                link.editStudent(c,a,b);
                QMessageBox::information(this,tr("ADD STATUS"),tr("Student info has been updated successfully in database!"));
            }
        }
        else
            QMessageBox::warning(this,("Roll number missing!"),("Fill the student's roll number field to update the student info!"));
    }
    else
        QMessageBox::warning(this,("FIELDS STATUS!"),("Fill in all the missing fields!"));
}

void EditStudent::on_pushButton_clicked()
{
    LMS_SingletonPattern lms;
    User *u;
    QString a=ui->textEdit->toPlainText();
    string b=a.toStdString();
    if(!a.isEmpty())
    {
        if((u=lms.getSystem()->find(b))!=NULL)
        {
            Student *s=dynamic_cast<Student *>(u);
            ui->textEdit_2->setText(QString::fromStdString(s->getn()));
            ui->textEdit_4->setText(QString::fromStdString(s->getd()));
        }
        else
            QMessageBox::warning(this,("Roll number not found in database!"),("Enter correct roll number!"));
    }
    else
        QMessageBox::warning(this,("Roll number missing!"),("Fill in all the missing fields!"));
}
