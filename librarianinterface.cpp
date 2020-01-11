#include "librarianinterface.h"
#include "ui_librarianinterface.h"

LibrarianInterface::LibrarianInterface(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LibrarianInterface)
{
    ui->setupUi(this);
}

LibrarianInterface::~LibrarianInterface()
{
    delete ui;
}

void LibrarianInterface::on_pushButton_2_clicked()
{
    //add lib item
    AddLibraryItem *p=new AddLibraryItem(this->parentWidget());
    p->show();
}

void LibrarianInterface::on_pushButton_8_clicked()
{
    //Search Lib Item
    SearchLibItem *p=new SearchLibItem(this->parentWidget());
    p->show();
}

void LibrarianInterface::on_pushButton_4_clicked()
{
    // Issue Lib Item
    IssueItem *p=new IssueItem(this->parentWidget());
    p->show();
}

void LibrarianInterface::on_pushButton_5_clicked()
{
    //Return Lib Item
    returnItem *p=new returnItem(this->parentWidget());
    p->show();
}

void LibrarianInterface::on_pushButton_6_clicked()
{
    //Remove Lib Item
    RemoveItem *p=new RemoveItem(this->parentWidget());
    p->show();
}

void LibrarianInterface::on_pushButton_9_clicked()
{
    //Edit Lib Item
    RenewLibItem *p=new RenewLibItem(this->parentWidget());
    p->show();
}

void LibrarianInterface::on_pushButton_3_clicked()
{
    //Add Student
    addStudent *p=new addStudent(this->parentWidget());
    p->show();
}

void LibrarianInterface::on_pushButton_10_clicked()
{
    //View Student
    viewStudent *p=new viewStudent(this->parentWidget());
    p->show();
}

void LibrarianInterface::on_pushButton_12_clicked()
{
    //Edit Student
    EditStudent *p=new EditStudent(this->parentWidget());
    p->show();
}

void LibrarianInterface::on_pushButton_11_clicked()
{
    //Place LibItem on hold
    BookOnHold *p=new BookOnHold(this->parentWidget());
    p->show();
}

void LibrarianInterface::on_pushButton_7_clicked()
{
    //View Loans
    IssueInterface *p=new IssueInterface(this->parentWidget());
    p->show();
}

void LibrarianInterface::on_pushButton_clicked()
{
    //logout
    this->close();
}
