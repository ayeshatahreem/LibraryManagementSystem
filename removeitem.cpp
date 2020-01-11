#include "removeitem.h"
#include "ui_removeitem.h"

RemoveItem::RemoveItem(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RemoveItem)
{
    ui->setupUi(this);
}

RemoveItem::~RemoveItem()
{
    delete ui;
}

void RemoveItem::on_pushButton_clicked()
{
    LibraryItem *p;
    LMS_SingletonPattern lms;
    link link;
    bool temp=true;
    QString a=ui->textEdit->toPlainText();
    if(!a.isEmpty())
        if((p=lms.getSystem()->byID(a.toInt(&temp,10)))!=NULL)
        {
            qDebug()<<QString::number(p->gi(),10);
            vector<Issue *> obj=p->get_i_pointer();
            if(obj.size()!=0)
                 QMessageBox::warning(this,("DELETION STATUS!"),("This item has been issued to student hence not deleting the item"));
            else
            {
                lms.getSystem()->popLib(p);
                link.removeLib(p->gi());
                QMessageBox::information(this,tr("DELETION STATUS"),tr("LibItem has been issued!"));
            }
        }
        else
            QMessageBox::warning(this,("INCORRECT DATA!"),("Enter correct library item ID"));
}

void RemoveItem::on_pushButton_2_clicked()
{
    QString a=ui->textEdit->toPlainText();
    LibraryItem *p;
    LMS_SingletonPattern lms;
    bool temp=true;
    if(!a.isEmpty())
    {
        if((p=lms.getSystem()->byID(a.toInt(&temp,10)))!=NULL)
        {
            vector<Issue *> obj=p->get_i_pointer();
            QStandardItemModel *k = new QStandardItemModel(obj.size(),3,this);
            k->setHorizontalHeaderItem(0, new QStandardItem(QString("RollNumber")));
            k->setHorizontalHeaderItem(1, new QStandardItem(QString("IssueDate")));
            k->setHorizontalHeaderItem(2, new QStandardItem(QString("ReturnDate")));
            for (int i = 0; i < obj.size(); i++)
            {
                Issue *j=obj.at(i);
                QStandardItem *m = new QStandardItem(QString::fromStdString(j->getter()->getr()));
                k->setItem(i,0,m);
                QStandardItem *n = new QStandardItem(QString::fromStdString(j->geti()));
                k->setItem(i,1,n);
                QStandardItem *o = new QStandardItem(QString::fromStdString(j->getr()));
                k->setItem(i,2,o);
            }
            ui->tableView->setModel(k);
        }
        else
            QMessageBox::warning(this,("INCORRECT DATA"),("Enter correct library item ID"));
    }
    else
        QMessageBox::warning(this,("FIELDS STATUS"),("Fill in all the missing fields"));
}

void RemoveItem::on_pushButton_3_clicked()
{
    this->close();
}
