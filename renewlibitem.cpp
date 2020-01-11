#include "renewlibitem.h"
#include "ui_renewlibitem.h"

RenewLibItem::RenewLibItem(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RenewLibItem)
{
    ui->setupUi(this);
    ui->comboBox->addItem("Book");
    ui->comboBox->addItem("DVD");
}

RenewLibItem::~RenewLibItem()
{
    delete ui;
}

void RenewLibItem::on_pushButton_clicked()
{
    LibraryItem *p;
    LMS_SingletonPattern lms;
    bool temp=false;
    QString a=ui->textEdit->toPlainText();
    if(!a.isEmpty())
    {
        if((p=lms.getSystem()->byID(a.toInt(&temp,10)))!=NULL)
        {
            ui->textEdit_2->setText(QString::fromStdString(p->gt()));
            ui->textEdit_3->setText(QString::fromStdString(p->ga()));
            ui->textEdit_4->setText(QString::fromStdString(p->gs()));
            if(p->check().compare("DVD")==0)
                ui->comboBox->setCurrentIndex(1);
            else
                ui->comboBox->setCurrentIndex(0);
        }
        else
            QMessageBox::warning(this,("INCORRECT DATA!"),("Enter correct library item ID"));
    }
    else
        QMessageBox::warning(this,("FIELDS STATUS!"),("Fill in all the missing fields"));
}

void RenewLibItem::on_pushButton_2_clicked()
{
    //renew lib item
    LMS_SingletonPattern lms;
    link link;
    bool temp=false;
    QString ab=ui->textEdit->toPlainText();
    int id=ab.toInt(&temp,10);
    QString title=ui->textEdit_2->toPlainText();
    QString author=ui->textEdit_3->toPlainText();
    QString subject=ui->textEdit_4->toPlainText();
    string t=title.toStdString();
    string a=author.toStdString();
    string s=subject.toStdString();
    if(!(title.isEmpty() || author.isEmpty() || subject.isEmpty()||  ab.isEmpty()))
    {
        link.editLib(id,title,author,subject);
        LibraryItem *p=lms.getSystem()->byID(id);
        p->st(t);
        p->sa(a);
        p->ss(s);
        QMessageBox::information(this,tr("LIBITEM STATUS"),tr("Info has been updated!"));
    }
    else
        QMessageBox::warning(this,("FIELDS STATUS!"),("Fill in all the missing fields!"));
}

void RenewLibItem::on_pushButton_3_clicked()
{
    this->close();
}
