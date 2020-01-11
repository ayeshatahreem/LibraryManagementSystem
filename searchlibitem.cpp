#include "searchlibitem.h"
#include "ui_searchlibitem.h"

SearchLibItem::SearchLibItem(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SearchLibItem)
{
    ui->setupUi(this);
}

SearchLibItem::~SearchLibItem()
{
    delete ui;
}

void SearchLibItem::on_pushButton_2_clicked()
{
    this->close();
}

void SearchLibItem::on_pushButton_4_clicked()
{
    //by title
    SearchByTitle *p=new SearchByTitle(this->parentWidget());
    p->show();
}

void SearchLibItem::on_pushButton_5_clicked()
{
    //By Author
    SearchByAuthor *p=new SearchByAuthor(this->parentWidget());
    p->show();
}

void SearchLibItem::on_pushButton_6_clicked()
{
    //By Subject
   SearchBySubject *p=new SearchBySubject(this->parentWidget());
    p->show();
}
