#include "returnitem.h"
#include "ui_returnitem.h"

returnItem::returnItem(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::returnItem)
{
    ui->setupUi(this);
}

returnItem::~returnItem()
{
    delete ui;
}

void returnItem::on_pushButton_clicked()
{
    User *u;
    LibraryItem *p;
    bool f=true;
    LMS_SingletonPattern j;
    if((!ui->textEdit_2->toPlainText().isEmpty()) && (!ui->textEdit->toPlainText().isEmpty()))
    {
        if((p=j.getSystem()->byID(ui->textEdit_2->toPlainText().toInt(&f,10)))!=NULL)
        {
            if((u=j.getSystem()->find(ui->textEdit->toPlainText().toStdString()))!=NULL)
            {
                Date d(ui->dateEdit->date().month(),ui->dateEdit->date().day(),ui->dateEdit->date().year());
                int total=p->loan_manipulate(u,d);

                ui->textEdit_3->setText(QString::number(total*10,10));
                if(total==0)
                    QMessageBox::information(this,tr("FINE PAYMENT STATUS"),tr("No fine to pay!"));
                else
                    QMessageBox::warning(this,("INCORRECT ROLL NUMBER!"),("Enter correct roll number!"));
            }
            else
                QMessageBox::warning(this,("INCORRECT LIBITEM ID!!"),("Enter correct library item ID!"));
        }
        else
            QMessageBox::warning(this,("FIELDS STATUS"),("Fill in all the missing fields !"));
    }
}

void returnItem::on_pushButton_2_clicked()
{
    if(ui->textEdit_3->toPlainText().compare(ui->textEdit_4->toPlainText())==0)
        QMessageBox::information(this,tr("FINE PAYMENT STATUS"),tr("Fine paid!"));
    else
        QMessageBox::warning(this,("FINE PAYMENT STATUS"),("Please pay complete fine!"));
}

void returnItem::on_pushButton_3_clicked()
{
    this->close();
}
