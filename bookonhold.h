#ifndef BOOKONHOLD_H
#define BOOKONHOLD_H
#include <QDialog>
#include <QtDebug>
#include <QMessageBox>
#include "mainwindow.h"
#include <QStandardItemModel>
#include "lms_singletonpattern.h"
#include "link.h"
#include "student.h"
#include "user.h"
#include "libraryitem.h"
#include "book.h"
#include "dvd.h"
namespace Ui {
class BookOnHold;
}

class BookOnHold : public QDialog
{
    Q_OBJECT

public:
    explicit BookOnHold(QWidget *parent = 0);
    ~BookOnHold();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::BookOnHold *ui;
};

#endif // BOOKONHOLD_H
