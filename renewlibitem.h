#ifndef RENEWLIBITEM_H
#define RENEWLIBITEM_H
#include "mainwindow.h"
#include "lms_singletonpattern.h"
#include "link.h"
#include "libraryitem.h"
#include <QDialog>
#include <QtDebug>
#include <QMessageBox>
namespace Ui {
class RenewLibItem;
}

class RenewLibItem : public QDialog
{
    Q_OBJECT

public:
    explicit RenewLibItem(QWidget *parent = 0);
    ~RenewLibItem();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::RenewLibItem *ui;
};

#endif // RENEWLIBITEM_H
