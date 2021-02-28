#include <QApplication>
#include <QQmlApplicationEngine>
#include <QtQml>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QQmlApplicationEngine qmlApp;
    qmlApp.load(QUrl(QStringLiteral("qrc:/perf.qml")));
    return app.exec();
}
