/********************************************************************************
** Form generated from reading UI file 'chatitemwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATITEMWIDGET_H
#define UI_CHATITEMWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChatItemWidget
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *senderLabel;
    QSpacerItem *horizontalSpacer;
    QLabel *timeLabel;
    QLabel *messageLabel;

    void setupUi(QWidget *ChatItemWidget)
    {
        if (ChatItemWidget->objectName().isEmpty())
            ChatItemWidget->setObjectName("ChatItemWidget");
        ChatItemWidget->resize(280, 50);
        gridLayout = new QGridLayout(ChatItemWidget);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        senderLabel = new QLabel(ChatItemWidget);
        senderLabel->setObjectName("senderLabel");

        horizontalLayout->addWidget(senderLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        timeLabel = new QLabel(ChatItemWidget);
        timeLabel->setObjectName("timeLabel");

        horizontalLayout->addWidget(timeLabel);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        messageLabel = new QLabel(ChatItemWidget);
        messageLabel->setObjectName("messageLabel");

        gridLayout->addWidget(messageLabel, 1, 0, 1, 1);


        retranslateUi(ChatItemWidget);

        QMetaObject::connectSlotsByName(ChatItemWidget);
    } // setupUi

    void retranslateUi(QWidget *ChatItemWidget)
    {
        ChatItemWidget->setWindowTitle(QCoreApplication::translate("ChatItemWidget", "Form", nullptr));
        senderLabel->setText(QCoreApplication::translate("ChatItemWidget", "Sender", nullptr));
        timeLabel->setText(QCoreApplication::translate("ChatItemWidget", "Time", nullptr));
        messageLabel->setText(QCoreApplication::translate("ChatItemWidget", "Message", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChatItemWidget: public Ui_ChatItemWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATITEMWIDGET_H
