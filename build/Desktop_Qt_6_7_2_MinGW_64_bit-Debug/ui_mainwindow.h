/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionPrivateMessage;
    QAction *actionExit;
    QAction *actionPublic_Chat;
    QWidget *centralwidget;
    QGridLayout *gridLayout_3;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QListWidget *lstMessages;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lnMessage;
    QPushButton *btnSend;
    QWidget *page_2;
    QGridLayout *gridLayout_4;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_5;
    QListWidget *userLst;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lnPrivate;
    QPushButton *btnSend_2;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_6;
    QListWidget *lstPrivate;
    QMenuBar *menubar;
    QMenu *menuOption;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(683, 487);
        actionPrivateMessage = new QAction(MainWindow);
        actionPrivateMessage->setObjectName("actionPrivateMessage");
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName("actionExit");
        actionPublic_Chat = new QAction(MainWindow);
        actionPublic_Chat->setObjectName("actionPublic_Chat");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout_3 = new QGridLayout(centralwidget);
        gridLayout_3->setObjectName("gridLayout_3");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        page = new QWidget();
        page->setObjectName("page");
        gridLayout_2 = new QGridLayout(page);
        gridLayout_2->setObjectName("gridLayout_2");
        groupBox = new QGroupBox(page);
        groupBox->setObjectName("groupBox");
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        lstMessages = new QListWidget(groupBox);
        lstMessages->setObjectName("lstMessages");

        gridLayout->addWidget(lstMessages, 0, 1, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(page);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        lnMessage = new QLineEdit(page);
        lnMessage->setObjectName("lnMessage");

        horizontalLayout->addWidget(lnMessage);

        btnSend = new QPushButton(page);
        btnSend->setObjectName("btnSend");

        horizontalLayout->addWidget(btnSend);


        gridLayout_2->addLayout(horizontalLayout, 1, 0, 1, 1);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        gridLayout_4 = new QGridLayout(page_2);
        gridLayout_4->setObjectName("gridLayout_4");
        groupBox_2 = new QGroupBox(page_2);
        groupBox_2->setObjectName("groupBox_2");
        gridLayout_5 = new QGridLayout(groupBox_2);
        gridLayout_5->setObjectName("gridLayout_5");
        userLst = new QListWidget(groupBox_2);
        userLst->setObjectName("userLst");

        gridLayout_5->addWidget(userLst, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        lnPrivate = new QLineEdit(groupBox_2);
        lnPrivate->setObjectName("lnPrivate");

        horizontalLayout_2->addWidget(lnPrivate);

        btnSend_2 = new QPushButton(groupBox_2);
        btnSend_2->setObjectName("btnSend_2");

        horizontalLayout_2->addWidget(btnSend_2);


        gridLayout_5->addLayout(horizontalLayout_2, 1, 0, 1, 1);


        gridLayout_4->addWidget(groupBox_2, 0, 0, 1, 1);

        groupBox_3 = new QGroupBox(page_2);
        groupBox_3->setObjectName("groupBox_3");
        gridLayout_6 = new QGridLayout(groupBox_3);
        gridLayout_6->setObjectName("gridLayout_6");
        lstPrivate = new QListWidget(groupBox_3);
        lstPrivate->setObjectName("lstPrivate");

        gridLayout_6->addWidget(lstPrivate, 0, 0, 1, 1);


        gridLayout_4->addWidget(groupBox_3, 0, 1, 1, 1);

        stackedWidget->addWidget(page_2);

        gridLayout_3->addWidget(stackedWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 683, 17));
        menuOption = new QMenu(menubar);
        menuOption->setObjectName("menuOption");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuOption->menuAction());
        menuOption->addSeparator();
        menuOption->addAction(actionPrivateMessage);
        menuOption->addAction(actionPublic_Chat);
        menuOption->addSeparator();
        menuOption->addAction(actionExit);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Client", nullptr));
        actionPrivateMessage->setText(QCoreApplication::translate("MainWindow", "Private Message", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        actionPublic_Chat->setText(QCoreApplication::translate("MainWindow", "Public Chat", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Messages", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Message:", nullptr));
        btnSend->setText(QCoreApplication::translate("MainWindow", "Send", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Users", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Message:", nullptr));
        btnSend_2->setText(QCoreApplication::translate("MainWindow", "Send", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "Messages", nullptr));
        menuOption->setTitle(QCoreApplication::translate("MainWindow", "Option", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
