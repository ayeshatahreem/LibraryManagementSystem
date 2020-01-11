#include "addlibraryitem.h"
#include "ui_addlibraryitem.h"

AddLibraryItem::AddLibraryItem(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddLibraryItem)
{
    ui->setupUi(this);
    ui->comboBox->addItem("Book");
    ui->comboBox->addItem("DVD");
}

AddLibraryItem::~AddLibraryItem()
{
    delete ui;
}

void AddLibraryItem::on_pushButton_2_clicked()
{
    this->close();
}

void AddLibraryItem::on_pushButton_clicked()
{
    link link;
    LibraryItem *p;
    LMS_SingletonPattern obj;
    QString title=ui->textEdit->toPlainText();
    QString author=ui->textEdit_2->toPlainText();
    QString subject=ui->textEdit_3->toPlainText();
    string t=title.toStdString();
    string a=author.toStdString();
    string s=subject.toStdString();
    if(!(title.isEmpty()||author.isEmpty()||subject.isEmpty()))
    {
        int i=link.pushLib(title,author,subject);
        if(ui->comboBox->currentIndex()==1)
            p=new DVD(1,i,t,a,s);
        else
            p=new Book(1,i,t,a,s);
        obj.getSystem()->pushLib(p);
        QMessageBox::information(this,tr("ADD STATUS"),tr("LibItem has been added in database!"));
    }
    else
        QMessageBox::warning(this,("FIELDS STATUS"),("Fill in all the missing fields!"));
}
