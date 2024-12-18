#include "clientmanager.h"
#include <QDebug>

ClientManager::ClientManager(QObject *parent)
    : QObject(parent) {
    // connect websocket signals to slots
    connect(&m_webSocket, &QWebSocket::connected, this, &ClientManager::connected);
    connect(&m_webSocket, &QWebSocket::disconnected, this, &ClientManager::disconnected);
    connect(&m_webSocket, &QWebSocket::textMessageReceived, this, &ClientManager::onMessageReceived);
}

void ClientManager::onMessageReceived(const QString &message) {
    qDebug() << "Message received from server:" << message;
    emit messageReceived(message);
}

void ClientManager::connectToServer(const QUrl &url) {
    // Connect to the WebSocket server
    m_webSocket.open(url);
}

void ClientManager::sendMessage(const QString &message) {
    // Send a message to the WebSocket server
    if (m_webSocket.isValid()) {
        qDebug() << "Sending message: " << message;
        m_webSocket.sendTextMessage(message);
    } else {
        qDebug() << "Cannot send message. WebSocket is not connected.";
    }
}

