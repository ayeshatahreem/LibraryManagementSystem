#include "studentinterface.h"
#include "ui_studentinterface.h"

StudentInterface::StudentInterface(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::StudentInterface)
{
    ui->setupUi(this);
}

StudentInterface::~StudentInterface()
{
    delete ui;
}

void StudentInterface::on_pushButton_5_clicked()
{
    //view my profile
    viewStudent *p=new viewStudent(this->parentWidget());
    p->show();
}

void StudentInterface::on_pushButton_2_clicked()
{
    //view my loans
    IssueInterface *p=new IssueInterface(this->parentWidget());
    p->show();
}

void StudentInterface::on_pushButton_3_clicked()
{
    //search lib item
    SearchLibItem *p=new SearchLibItem(this->parentWidget());
    p->show();
}

void StudentInterface::on_pushButton_4_clicked()
{
    //place book on hold
    BookOnHold *p=new BookOnHold(this->parentWidget());
    p->show();
}

void StudentInterface::on_pushButton_clicked()
{
    //exit
    this->close();
}
