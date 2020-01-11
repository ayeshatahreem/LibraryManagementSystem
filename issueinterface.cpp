#include "issueinterface.h"
#include "ui_issueinterface.h"

IssueInterface::IssueInterface(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::IssueInterface)
{
    ui->setupUi(this);
}

IssueInterface::~IssueInterface()
{
    delete ui;
}
void IssueInterface::on_pushButton_2_clicked()
{
    this->close();
}
void IssueInterface::on_pushButton_clicked()
{
    LMS_SingletonPattern lms;
    User *u;
    QString a=ui->textEdit->toPlainText();
    string x=a.toStdString();
    if(!a.isEmpty())
    {
        if((u=lms.getSystem()->find(x))!=NULL)
        {
            vector<Issue *> po=u->getarr();
            QStandardItemModel *k = new QStandardItemModel(po.size(),3,this);
            k->setHorizontalHeaderItem(0, new QStandardItem(QString("LibItemID")));
            k->setHorizontalHeaderItem(1, new QStandardItem(QString("IssueDate")));
            k->setHorizontalHeaderItem(2, new QStandardItem(QString("ReturnDate")));
            for (int i = 0; i < po.size(); i++)
            {
                Issue *p=po.at(i);
                QStandardItem *z = new QStandardItem(QString::number(p->get()->gi(),10));
                k->setItem(i,0,z);
                QStandardItem *c = new QStandardItem(QString::fromStdString(p->geti()));
                k->setItem(i,1,c);
                QStandardItem *v = new QStandardItem(QString::fromStdString(p->getr()));
                k->setItem(i,2,v);
            }
            ui->tableView->setModel(k);
        }
        else
            QMessageBox::warning(this,("INCORRECT ROLL NUMBER"),("Enter correct roll number!"));
    }
    else
        QMessageBox::warning(this,("FIELDS STATUS"),("Fill in all the missing fields"));
}
