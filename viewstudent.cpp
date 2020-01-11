#include "viewstudent.h"
#include "ui_viewstudent.h"

viewStudent::viewStudent(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::viewStudent)
{
    ui->setupUi(this);
}

viewStudent::~viewStudent()
{
    delete ui;
}

void viewStudent::on_pushButton_clicked()
{
    LMS_SingletonPattern lms;
    User *u;
    QString rollNum=ui->textEdit->toPlainText();
    if(!rollNum.isEmpty())
    {
        if((u=lms.getSystem()->find(rollNum.toStdString()))!=NULL)
        {
            QStandardItemModel *l = new QStandardItemModel(0,1,this);
            l->setHorizontalHeaderItem(0, new QStandardItem(QString("Name")));
            Student *s=dynamic_cast<Student *>(u);
            QStandardItem *j = new QStandardItem(QString::fromStdString(s->getn()));
            l->setItem(0,0,j);
            ui->tableView->setModel(l);
        }
        else
            QMessageBox::warning(this,("INCORRECT ROLL NUMBER"),("Enter correct roll number"));
    }
    else
        QMessageBox::warning(this,("FIELDS STATUS"),("Fill in all the missing fields"));
}

void viewStudent::on_pushButton_2_clicked()
{
    this->close();
}
