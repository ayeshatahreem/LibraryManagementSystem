#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    db= QSqlDatabase::addDatabase("QODBC");
    db.setConnectOptions();
    db.setDatabaseName("DRIVER={SQL Server};Server=DESKTOP-AH88P91\\MSSQLSERVER1;Database=LMS;Trusted_connection=yes");
    ui->comboBox->addItem("Librarian");
    ui->comboBox->addItem("Clerk");
    ui->comboBox->addItem("Student");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_2_clicked()
{
    close();
}

void MainWindow::on_pushButton_clicked()
{
    QString a=ui->textEdit->toPlainText();
    QString b=ui->lineEdit->text();
    if(a.isEmpty() || b.isEmpty())
        QMessageBox::warning(this,("Empty Fields"),("All fields must be filled"));
    else
    {
        link *p=new link();
        if(ui->comboBox->currentIndex()==0)
        {
            if(p->SignIn(a,b))
            {
                LibrarianInterface *p=new LibrarianInterface(this->parentWidget());
                this->hide();
                p->show();
            }
            else
                QMessageBox::warning(this,("INCORRECT USER NAME/PASSWORD"),("Enter correct info in order to be logged in"));
        }
        else if(ui->comboBox->currentIndex()==1)
        {
            if(p->SignIn(a,b))
            {
                ClerkInterface *p=new ClerkInterface(this->parentWidget());
                this->hide();
                p->show();
            }
            else
                QMessageBox::warning(this,("INCORRECT USER NAME/PASSWORD"),("Enter correct info in order to be logged in"));
        }
        else if(ui->comboBox->currentIndex()==2)
        {
            if(p->SignIn(a,b))
            {
                StudentInterface *p=new StudentInterface(this->parentWidget());
                this->hide();
                p->show();
            }
            else
                QMessageBox::warning(this,("INCORRECT USER NAME/PASSWORD"),("Enter correct info in order to be logged in"));
        }
        else
            QMessageBox::warning(this,("INCORRECT DATA!"),("Enter correct info in order to be logged in"));
    }
}
