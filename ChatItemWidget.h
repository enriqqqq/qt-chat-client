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
    ~ChatItemWidget();

private:
    Ui::ChatItemWidget *ui;
};

#endif // CHATITEMWIDGET_H
