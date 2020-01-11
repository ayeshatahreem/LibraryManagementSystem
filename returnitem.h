#ifndef RETURNITEM_H
#define RETURNITEM_H
#include "lms_singletonpattern.h"
#include <QStandardItemModel>
#include <QMessageBox>
#include "date.h"
#include "user.h"
#include "libraryitem.h"
#include <QDialog>
#include <QtDebug>
namespace Ui {
class returnItem;
}

class returnItem : public QDialog
{
    Q_OBJECT

public:
    explicit returnItem(QWidget *parent = 0);
    ~returnItem();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::returnItem *ui;
};

#endif // RETURNITEM_H
