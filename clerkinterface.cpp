#include "clerkinterface.h"
#include "ui_clerkinterface.h"

ClerkInterface::ClerkInterface(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ClerkInterface)
{
    ui->setupUi(this);
}

ClerkInterface::~ClerkInterface()
{
    delete ui;
}

void ClerkInterface::on_pushButton_6_clicked()
{
    EditStudent *p=new EditStudent(this->parentWidget());
    p->show();
}

void ClerkInterface::on_pushButton_clicked()
{
    this->close();
}

void ClerkInterface::on_pushButton_5_clicked()
{
    viewStudent *p=new viewStudent(this->parentWidget());
    p->show();
}

void ClerkInterface::on_pushButton_2_clicked()
{
    IssueInterface *p=new IssueInterface(this->parentWidget());
    p->show();
}

void ClerkInterface::on_pushButton_3_clicked()
{
    SearchLibItem *p=new SearchLibItem(this->parentWidget());
    p->show();
}

void ClerkInterface::on_pushButton_4_clicked()
{
    BookOnHold *p=new BookOnHold(this->parentWidget());
    p->show();
}

void ClerkInterface::on_pushButton_7_clicked()
{
    IssueItem *p=new IssueItem(this->parentWidget());
    p->show();
}

void ClerkInterface::on_pushButton_8_clicked()
{ 
    returnItem *p=new returnItem(this->parentWidget());
    p->show();
}

void ClerkInterface::on_pushButton_9_clicked()
{
    addStudent *p=new addStudent(this->parentWidget());
    p->show();
}
