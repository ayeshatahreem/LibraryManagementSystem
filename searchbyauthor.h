#ifndef SEARCHBYAUTHOR_H
#define SEARCHBYAUTHOR_H
#include <QtDebug>
#include <QDialog>
#include "mainwindow.h"
#include "lms_singletonpattern.h"
#include "link.h"
#include "libraryitem.h"
#include <QDebug>
#include <QStandardItemModel>
namespace Ui {
class SearchByAuthor;
}

class SearchByAuthor : public QDialog
{
    Q_OBJECT

public:
    explicit SearchByAuthor(QWidget *parent = 0);
    ~SearchByAuthor();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::SearchByAuthor *ui;
};

#endif // SEARCHBYAUTHOR_H
