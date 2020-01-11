#ifndef REMOVEITEM_H
#define REMOVEITEM_H
#include "lms_singletonpattern.h"
#include <QStandardItemModel>
#include "issue.h"
#include "link.h"
#include "libraryitem.h"
#include <QDialog>
#include <QtDebug>
#include <QMessageBox>
namespace Ui {
class RemoveItem;
}

class RemoveItem : public QDialog
{
    Q_OBJECT

public:
    explicit RemoveItem(QWidget *parent = 0);
    ~RemoveItem();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::RemoveItem *ui;
};

#endif // REMOVEITEM_H
