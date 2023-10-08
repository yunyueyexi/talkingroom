#ifndef CHATDIALOG_H
#define CHATDIALOG_H

#include <QDialog>
#include <QTcpSocket>

QT_BEGIN_NAMESPACE
namespace Ui { class ChatDialog; }
QT_END_NAMESPACE

class ChatDialog : public QDialog
{
    Q_OBJECT

public:
    ChatDialog(QWidget *parent = nullptr);
    ~ChatDialog();

private slots:
    void on_btnSendMsg_clicked();
    void connectedToServer();
    void recvMsg();
    void error(QAbstractSocket::SocketError socketError);

private:
    Ui::ChatDialog *ui;
    QTcpSocket sock;
};
#endif // CHATDIALOG_H
