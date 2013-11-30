#ifndef USERHOME_H
#define USERHOME_H

#include <QDialog>

namespace Ui {
class UserHome;
}

class UserHome : public QDialog
{
    Q_OBJECT

public:
    explicit UserHome(QWidget *parent = 0);
    ~UserHome();

private:
    Ui::UserHome *ui;
};

#endif // USERHOME_H
