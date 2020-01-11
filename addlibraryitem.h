#ifndef ADDLIBRARYITEM_H
#define ADDLIBRARYITEM_H
#include <QDialog>
#include <QtDebug>
#include <QMessageBox>
#include "lms_singletonpattern.h"
#include "libraryitem.h"
#include "link.h"
#include "book.h"
#include "dvd.h"
namespace Ui {
class AddLibraryItem;
}

class AddLibraryItem : public QDialog
{
    Q_OBJECT

public:
    explicit AddLibraryItem(QWidget *parent = 0);
    ~AddLibraryItem();

private slots:

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::AddLibraryItem *ui;
};

#endif // ADDLIBRARYITEM_H
