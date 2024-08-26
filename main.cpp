#include "mainwindow.h"

#include <QApplication>
#include <singleapplication.h>

void myMessageHandler(QtMsgType type, const QMessageLogContext &context, const QString &msg)
{
    // Suppress only messages from SQLite
    if (msg.contains("QSqlDatabase")) {
        return;  // Do nothing, effectively suppressing the message
    }

    // Otherwise, use the default message handler
    QByteArray localMsg = msg.toLocal8Bit();
    fprintf(stderr, "%s (%s:%u, %s)\n", localMsg.constData(), context.file, context.line, context.function);
}


int main(int argc, char *argv[])
{
    SingleApplication a(argc, argv);
    MainWindow w;
    qInstallMessageHandler(myMessageHandler);
    w.show();
    return a.exec();
}
