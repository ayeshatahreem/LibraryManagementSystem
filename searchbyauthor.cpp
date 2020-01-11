#include "searchbyauthor.h"
#include "ui_searchbyauthor.h"

SearchByAuthor::SearchByAuthor(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SearchByAuthor)
{
    ui->setupUi(this);
    ui->comboBox->addItem("Book");
    ui->comboBox->addItem("DVD");
}

SearchByAuthor::~SearchByAuthor()
{
    delete ui;
}

void SearchByAuthor::on_pushButton_clicked()
{
    int i = ui->comboBox->currentIndex();
    string a=ui->textEdit->toPlainText().toStdString();
    LMS_SingletonPattern *p=new LMS_SingletonPattern();
    vector <LibraryItem *> v =p->getSystem()->byAuthor(a, i);
    QStandardItemModel *k = new QStandardItemModel(v.size(),4,this);
    k->setHorizontalHeaderItem(0, new QStandardItem(QString("ID")));
    k->setHorizontalHeaderItem(1, new QStandardItem(QString("Title")));
    k->setHorizontalHeaderItem(2, new QStandardItem(QString("Author")));
    k->setHorizontalHeaderItem(3, new QStandardItem(QString("Subject")));
    for (int i = 0; i < v.size(); i++)
    {
        LibraryItem *q=v.at(i);
        QStandardItem *t = new QStandardItem(QString::number(q->gi()));
        k->setItem(i,0,t);
        QStandardItem *t1 = new QStandardItem(QString::fromStdString(q->gt()));
        k->setItem(i,1,t1);
        QStandardItem *t2 = new QStandardItem(QString::fromStdString(q->ga()));
        k->setItem(i,2,t2);
        QStandardItem *t3 = new QStandardItem(QString::fromStdString(q->gs()));
        k->setItem(i,3,t3);
    }
    ui->tableView->setModel(k);
}

void SearchByAuthor::on_pushButton_2_clicked()
{
    this->close();
}
