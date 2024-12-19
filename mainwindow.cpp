#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ChatItemWidget.h"

#include <QDateTime>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->actionPublic_Chat->setVisible(false);
    ui->stackedWidget->setCurrentIndex(0);

    // create new client manager instance
    m_ClientManager = new ClientManager(this);

    // connect client manager signls to main window slots
    connect(m_ClientManager, &ClientManager::connected, this, &MainWindow::handleConnected);
    connect(m_ClientManager, &ClientManager::messageReceived, this, &MainWindow::handleMessageReceived);

    // connect to websocket server
    m_ClientManager->connectToServer(QUrl("ws://localhost:8080"));
    // ClientManager->connectToServer(QUrl("wss://simple-websocket-server-public-chat.glitch.me"));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::postMessage(QString message, QString title, QListWidget *list)
{
    // get time
    QString time = QDateTime::currentDateTime().toString("dd/MM/yyyy hh:mm");

    // new chat item
    ChatItemWidget *chatItem = new ChatItemWidget();

    // set labels
    chatItem->setMessage(message);
    chatItem->setSender(title);
    chatItem->setTime(time);

    // create new item
    QListWidgetItem *listItem = new QListWidgetItem(list);

    // set size
    listItem->setSizeHint(chatItem->sizeHint());

    // add widget to item
    list->setItemWidget(listItem, chatItem);

    // add item to list
    list->addItem(listItem);
}

void MainWindow::handleConnected()
{
    qDebug() << "Connected to server";
}

void MainWindow::handleMessageReceived(const QString &message)
{
    qDebug() << "Message received: " << message;
    // parse JSON
    QJsonDocument jsonDoc = QJsonDocument::fromJson(message.toUtf8());

    // change to object
    QJsonObject jsonObj = jsonDoc.object();

    // get type
    QString type = jsonObj["type"].toString();

    if(type == "welcome") {
        m_clientId = jsonObj["clientId"].toString();
    }

    if(type == "broadcast") {
        QString senderId = jsonObj["senderId"].toString();

        postMessage(
            jsonObj["message"].toString(),
            senderId == m_clientId ? senderId + " (Me)" : senderId,
            ui->lstMessages
        );
    }
}

void MainWindow::on_btnSend_clicked()
{
    // check if message is empty
    if(ui->lnMessage->text().isEmpty()) {
        return;
    }

    // send raw string
    m_ClientManager->sendMessage(ui->lnMessage->text());
}


void MainWindow::on_btnSendPrivate_clicked()
{

}


void MainWindow::on_actionExit_triggered()
{
    // exit application
    QApplication::quit();
}


void MainWindow::on_actionPrivateMessage_triggered()
{
    // go to index 1
    ui->stackedWidget->setCurrentIndex(1);

    // show public chat action
    ui->actionPublic_Chat->setVisible(true);

    // hide private message action
    ui->actionPrivateMessage->setVisible(false);
}


void MainWindow::on_actionPublic_Chat_triggered()
{
    // go to index 0
    ui->stackedWidget->setCurrentIndex(0);

    // hide public chat action
    ui->actionPublic_Chat->setVisible(false);

    // show private message action
    ui->actionPrivateMessage->setVisible(true);
}

