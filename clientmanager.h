#ifndef CLIENTMANAGER_H
#define CLIENTMANAGER_H

#include <QObject>
#include <QWebSocket>

class ClientManager : public QObject {
    Q_OBJECT

public:
    explicit ClientManager(QObject *parent = nullptr);

    // Connect to the WebSocket server
    void connectToServer(const QUrl &url);

    // Send a message to the WebSocket server
    void sendMessage(const QString &message);

signals:
    // Signal emitted when a message is received from the server
    void messageReceived(const QString &message);

    // Signal emitted when connected to the server
    void connected();

    // Signal emitted when disconnected from the server
    void disconnected();

private slots:
    // Handle incoming messages
    void onMessageReceived(const QString &message);

private:
    QWebSocket m_webSocket; // WebSocket instance
};

#endif // CLIENTMANAGER_H
