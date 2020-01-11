#ifndef SEARCHBYTITLE_H
#define SEARCHBYTITLE_H
#include <QtDebug>
#include <QDialog>
#include "mainwindow.h"
#include "lms_singletonpattern.h"
#include "link.h"
#include "libraryitem.h"
#include <QDebug>
#include <QStandardItemModel>

namespace Ui {
class SearchByTitle;
}

class SearchByTitle : public QDialog
{
    Q_OBJECT

public:
    explicit SearchByTitle(QWidget *parent = 0);
    ~SearchByTitle();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();


private:
    Ui::SearchByTitle *ui;
};

#endif // SEARCHBYTITLE_H
