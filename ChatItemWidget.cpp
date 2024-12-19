#include "ChatItemWidget.h"
#include "ui_chatitemwidget.h"

ChatItemWidget::ChatItemWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ChatItemWidget)
{
    ui->setupUi(this);
}

ChatItemWidget::~ChatItemWidget()
{
    delete ui;
}

void ChatItemWidget::setMessage(const QString &message)
{
    ui->messageLabel->setText(message);
}

void ChatItemWidget::setSender(const QString &sender)
{
    ui->senderLabel->setText(sender);
}

void ChatItemWidget::setTime(const QString &time)
{
    ui->timeLabel->setText(time);
}
