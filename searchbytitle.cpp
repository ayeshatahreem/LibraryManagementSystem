#include "searchbytitle.h"
#include "ui_searchbytitle.h"

SearchByTitle::SearchByTitle(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SearchByTitle)
{
    ui->setupUi(this);
    ui->comboBox->addItem("Book");
    ui->comboBox->addItem("DVD");
}

SearchByTitle::~SearchByTitle()
{
    delete ui;
}

void SearchByTitle::on_pushButton_clicked()
{
    int i = ui->comboBox->currentIndex();
    string t=ui->textEdit->toPlainText().toStdString();
    LMS_SingletonPattern *p=new LMS_SingletonPattern();
    vector <LibraryItem *> lmn =p->getSystem()->byTitle(t, i);
    QStandardItemModel *l = new QStandardItemModel(lmn.size(),4,this);
    l->setHorizontalHeaderItem(0, new QStandardItem(QString("ID")));
    l->setHorizontalHeaderItem(1, new QStandardItem(QString("Title")));
    l->setHorizontalHeaderItem(2, new QStandardItem(QString("Author")));
    l->setHorizontalHeaderItem(3, new QStandardItem(QString("Subject")));
    for (int i = 0; i < lmn.size(); i++)
    {
        LibraryItem *q=lmn.at(i);
        QStandardItem *t = new QStandardItem(QString::number(q->gi()));
        l->setItem(i,0,t);
        QStandardItem *t1 = new QStandardItem(QString::fromStdString(q->gt()));
        l->setItem(i,1,t1);
        QStandardItem *t2 = new QStandardItem(QString::fromStdString(q->ga()));
        l->setItem(i,2,t2);
        QStandardItem *t3 = new QStandardItem(QString::fromStdString(q->gs()));
        l->setItem(i,3,t3);
    }
    ui->tableView->setModel(l);
}

void SearchByTitle::on_pushButton_2_clicked()
{
    this->close();
}


