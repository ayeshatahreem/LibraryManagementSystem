#ifndef ADDLIBITEM_H
#define ADDLIBITEM_H

#include <QDialog>

namespace Ui {
class AddLibItem;
}

class AddLibItem : public QDialog
{
    Q_OBJECT

public:
    explicit AddLibItem(QWidget *parent = 0);
    ~AddLibItem();

private:
    Ui::AddLibItem *ui;
};

#endif // ADDLIBITEM_H
