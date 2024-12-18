#include "mainwindow.h"
#include "ui_mainwindow.h"

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

void MainWindow::handleConnected()
{
    qDebug() << "Connected to server";
}

void MainWindow::handleMessageReceived(const QString &message)
{
    qDebug() << "Message received: " << message;
}

void MainWindow::on_btnSend_clicked()
{

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

