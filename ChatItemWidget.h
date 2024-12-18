#ifndef CHATITEMWIDGET_H
#define CHATITEMWIDGET_H

#include <QWidget>

namespace Ui {
class ChatItemWidget;
}

class ChatItemWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ChatItemWidget(QWidget *parent = nullptr);

    void setMessage(const QString &message);

    void setSender(const QString &sender);

    void setTime(const QString &time);

    ~ChatItemWidget();

private:
    Ui::ChatItemWidget *ui;
};

#endif // CHATITEMWIDGET_H
