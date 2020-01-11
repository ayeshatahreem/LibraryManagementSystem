#ifndef SEARCHBYSUBJECT_H
#define SEARCHBYSUBJECT_H
#include <QtDebug>
#include <QDialog>
#include "mainwindow.h"
#include "lms_singletonpattern.h"
#include "link.h"
#include "libraryitem.h"
#include <QDebug>
#include <QStandardItemModel>

namespace Ui {
class SearchBySubject;
}

class SearchBySubject : public QDialog
{
    Q_OBJECT

public:
    explicit SearchBySubject(QWidget *parent = 0);
    ~SearchBySubject();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::SearchBySubject *ui;
};

#endif // SEARCHBYSUBJECT_H
