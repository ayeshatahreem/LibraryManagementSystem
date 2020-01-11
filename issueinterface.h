#ifndef ISSUEINTERFACE_H
#define ISSUEINTERFACE_H
#include <QDialog>
#include <QtDebug>
#include <QMessageBox>
#include "lms_singletonpattern.h"
#include <QStandardItemModel>
#include "mainwindow.h"
#include "link.h"
#include "issue.h"
#include "user.h"
namespace Ui {
class IssueInterface;
}

class IssueInterface : public QDialog
{
    Q_OBJECT

public:
    explicit IssueInterface(QWidget *parent = 0);
    ~IssueInterface();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::IssueInterface *ui;
};

#endif // ISSUEINTERFACE_H
