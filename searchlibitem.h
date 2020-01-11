#ifndef SEARCHLIBITEM_H
#define SEARCHLIBITEM_H
#include <QtDebug>
#include <QDialog>
#include "mainwindow.h"
#include "lms_singletonpattern.h"
#include "link.h"
#include "libraryitem.h"
#include "searchbyauthor.h"
#include "searchbysubject.h"
#include "searchbytitle.h"
namespace Ui {
class SearchLibItem;
}

class SearchLibItem : public QDialog
{
    Q_OBJECT

public:
    explicit SearchLibItem(QWidget *parent = 0);
    ~SearchLibItem();

private slots:

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::SearchLibItem *ui;
};

#endif // SEARCHLIBITEM_H
