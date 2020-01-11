#include "bookonhold.h"
#include "ui_bookonhold.h"

BookOnHold::BookOnHold(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BookOnHold)
{
    ui->setupUi(this);
}

BookOnHold::~BookOnHold()
{
    delete ui;
}

void BookOnHold::on_pushButton_2_clicked()
{
    //view holders
    LibraryItem *p;
    LMS_SingletonPattern lms;
    bool f=true;
    QString a=ui->textEdit_2->toPlainText();
    if(a.isEmpty())
        QMessageBox::warning(this,("FIELDS STATUS!"),("Fill in all the missing fields!"));
    else
    {
        if((p=lms.getSystem()->byID(a.toInt(&f,10)))==NULL)
            QMessageBox::warning(this,("INCORRECT LIBITEM ID!"),("Enter correct library item ID!"));
        else
        {
            vector<User *> obj=p->get_u_object();
            QStandardItemModel *k = new QStandardItemModel(obj.size(),2,this);
            k->setHorizontalHeaderItem(0, new QStandardItem(QString("ID")));
            k->setHorizontalHeaderItem(1, new QStandardItem(QString("Name")));
            for (int i=0; i<obj.size();i++)
            {
                Student *s=dynamic_cast<Student *>(obj.at(i));
                QStandardItem *g = new QStandardItem(QString::fromStdString(s->getr()));
                QStandardItem *h = new QStandardItem(QString::fromStdString(s->getn()));
                k->setItem(i,0,g);
                k->setItem(i,1,h);
            }
            ui->tableView->setModel(k);
        }
    }
}

void BookOnHold::on_pushButton_3_clicked()
{
    this->close();
}
void BookOnHold::on_pushButton_clicked()
{
    //place onhold
    LibraryItem *p;
    LMS_SingletonPattern lms;
    User *u;
    link link;
    bool temp=true;
    QString a=ui->textEdit->toPlainText();
    QString b=ui->textEdit_2->toPlainText();
    qDebug()<<a;
    qDebug()<<b;
    if((a.isEmpty()) || (b.isEmpty()))
    {
        QMessageBox::warning(this,("FIELDS STATUS!"),("Fill in all the missing fields!"));
    }
    else
    {
        if((p=lms.getSystem()->byID(b.toInt(&temp,10)))!=NULL)
        {
            if((u=lms.getSystem()->find(a.toStdString()))!=NULL)
            {
                if(p->push_user(u))
                {
                    if(p->gflag())
                        QMessageBox::warning(this,("Onhold STATUS!"),("!"));
                    else
                    {
                        link.push(a,p->gi());
                        QMessageBox::warning(this,("ONHOLD STATUS!"),("!"));
                    }
                }
                else
                    QMessageBox::warning(this,("STUDENT STATUS!"),("!"));
            }
            else
                QMessageBox::warning(this,("INCORRECT ROLL NUMBER!"),("!"));
        }
        else
            QMessageBox::warning(this,("INCORRECT LIBITEM ID!"),("!"));
    }
}
