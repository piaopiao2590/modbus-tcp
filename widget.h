#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QModbusTcpClient>

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    bool sendflag, receiveflag;
    // void readbooltype();

private slots:
    void on_sendaxispB_clicked();

    // void on_readparameterpB_clicked();

    void on_connectpB_clicked();

    // void on_parametersetpB_clicked();

    void replyData();

    // void replyData2();

    void on_moderead_clicked();

private:
    Ui::Widget *ui;
    QModbusTcpClient *client;

};
#endif // WIDGET_H
