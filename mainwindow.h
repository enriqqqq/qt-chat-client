#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidget>
#include "clientmanager.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btnSend_clicked();

    void on_btnSendPrivate_clicked();

    void on_actionExit_triggered();

    void on_actionPrivateMessage_triggered();

    void on_actionPublic_Chat_triggered();

private:
    Ui::MainWindow *ui;
    ClientManager *ClientManager; // Pointer to ClientManager
    QString m_clientId; // Client ID
    void postMessage(QString message, QString title, QListWidget *list);

};
#endif // MAINWINDOW_H
