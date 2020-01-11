#ifndef ISSUEITEM_H
#define ISSUEITEM_H
#include <QDialog>
#include <QtDebug>
#include <QMessageBox>
#include <QStandardItemModel>
#include "lms_singletonpattern.h"
#include "libraryitem.h"
#include "mainwindow.h"
#include "student.h"
#include "link.h"
#include "user.h"
#include "date.h"
namespace Ui {
class IssueItem;
}

class IssueItem : public QDialog
{
    Q_OBJECT

public:
    explicit IssueItem(QWidget *parent = 0);
    ~IssueItem();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::IssueItem *ui;
};

#endif // ISSUEITEM_H
