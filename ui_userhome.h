/********************************************************************************
** Form generated from reading UI file 'userhome.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERHOME_H
#define UI_USERHOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_UserHome
{
public:
    QLabel *label;
    QFrame *line;
    QLabel *label_2;
    QPushButton *pushButton;
    QFrame *frame;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;

    void setupUi(QDialog *UserHome)
    {
        if (UserHome->objectName().isEmpty())
            UserHome->setObjectName(QStringLiteral("UserHome"));
        UserHome->resize(750, 505);
        label = new QLabel(UserHome);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 20, 201, 81));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/logo.png")));
        label->setScaledContents(true);
        line = new QFrame(UserHome);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(20, 90, 711, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_2 = new QLabel(UserHome);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(380, 70, 271, 20));
        QFont font;
        font.setPointSize(12);
        label_2->setFont(font);
        pushButton = new QPushButton(UserHome);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(669, 70, 61, 23));
        frame = new QFrame(UserHome);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(260, 150, 461, 311));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        pushButton_2 = new QPushButton(UserHome);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(30, 150, 181, 41));
        pushButton_3 = new QPushButton(UserHome);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(30, 190, 181, 41));
        pushButton_4 = new QPushButton(UserHome);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(30, 230, 181, 41));
        pushButton_5 = new QPushButton(UserHome);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(30, 270, 181, 41));
        pushButton_6 = new QPushButton(UserHome);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(30, 310, 181, 41));
        pushButton_7 = new QPushButton(UserHome);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(30, 350, 181, 41));

        retranslateUi(UserHome);

        QMetaObject::connectSlotsByName(UserHome);
    } // setupUi

    void retranslateUi(QDialog *UserHome)
    {
        UserHome->setWindowTitle(QApplication::translate("UserHome", "Dialog", 0));
        label->setText(QString());
        label_2->setText(QApplication::translate("UserHome", "You are logged in as ____________", 0));
        pushButton->setText(QApplication::translate("UserHome", "Logout", 0));
        pushButton_2->setText(QApplication::translate("UserHome", "Home", 0));
        pushButton_3->setText(QApplication::translate("UserHome", "Messaging", 0));
        pushButton_4->setText(QApplication::translate("UserHome", "Accounts Management", 0));
        pushButton_5->setText(QApplication::translate("UserHome", "Rates Management", 0));
        pushButton_6->setText(QApplication::translate("UserHome", "Connection Status", 0));
        pushButton_7->setText(QApplication::translate("UserHome", "History Logs", 0));
    } // retranslateUi

};

namespace Ui {
    class UserHome: public Ui_UserHome {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERHOME_H
