#include "issueitem.h"
#include "ui_issueitem.h"

IssueItem::IssueItem(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::IssueItem)
{
    ui->setupUi(this);
}

IssueItem::~IssueItem()
{
    delete ui;
}

void IssueItem::on_pushButton_clicked()
{
    LibraryItem *p;
    LMS_SingletonPattern lms;
    User *u;
    bool f=true;
    QString a=ui->textEdit_2->toPlainText();
    QString b=ui->textEdit->toPlainText();
    if(!(a.isEmpty()) && !(b.isEmpty()))
        if((p=lms.getSystem()->byID(a.toInt(&f,10)))!=NULL)
        {
            if((u=lms.getSystem()->find(b.toStdString()))!=NULL)
            {
                if(p->gflag()==1)
                {
                    Date d(ui->dateEdit->date().month(),ui->dateEdit->date().day(),ui->dateEdit->date().year());
                    p->loan_manipulate(u,d);
                    QMessageBox::information(this,tr("LIB ITEM STATUS!"),tr("LibItem has been issued!"));
                }
                else
                    QMessageBox::warning(this,("LIB ITEM STATUS"),("Lib item is not available/referenced/onhold"));
            }
            else
                QMessageBox::warning(this,("INCORRECT ROLL NUMBER"),("Enter correct roll number!"));
        }
        else
            QMessageBox::warning(this,("INCORRECT LIBITEM ID!"),("Enter correct library item ID!"));
}

void IssueItem::on_pushButton_2_clicked()
{
    //view on hold list
    LibraryItem *p;
    LMS_SingletonPattern lms;
    bool f=true;
    QString a=ui->textEdit_2->toPlainText();
    if(!a.isEmpty())
    {
        if((p=lms.getSystem()->byID(a.toInt(&f,10)))!=NULL)
        {
            vector<User *> obj=p->get_u_object();
            QStandardItemModel *k = new QStandardItemModel(obj.size(),2,this);
            k->setHorizontalHeaderItem(0, new QStandardItem(QString("ID")));
            k->setHorizontalHeaderItem(1, new QStandardItem(QString("Name")));
            for (int i = 0;i < obj.size(); i++)
            {
                Student *s=dynamic_cast<Student *>(obj.at(i));
                QStandardItem *u = new QStandardItem(QString::fromStdString(s->getr()));
                k->setItem(i,0,u);
                QStandardItem *v = new QStandardItem(QString::fromStdString(s->getn()));
                k->setItem(i,1,v);
            }
            ui->tableView->setModel(k);
        }
        else
            QMessageBox::warning(this,("INCORRECT LIBITEM ID!"),("Enter correct library item ID!"));
    }
    else
        QMessageBox::warning(this,("FIELDS STATUS"),("Fill in all the missing fields"));
}

void IssueItem::on_pushButton_3_clicked()
{
    this->close();
}
