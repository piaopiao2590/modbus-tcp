#include "widget.h"
#include "ui_widget.h"
#include <QMessageBox>
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    //设置客户端端口
    ui->setupUi(this);
    client = new QModbusTcpClient(this);
    client->setConnectionParameter(QModbusDevice::NetworkPortParameter, 502);

    //发送与接收标志位
    sendflag = false;
    receiveflag = false;
}

Widget::~Widget()
{
    delete ui;
}

//坐标发送
void Widget::on_sendaxispB_clicked()
{
    //设置寄存器地址，是保持寄存器（40000）偏移500位
    QModbusDataUnit unit(QModbusDataUnit::HoldingRegisters, 500 ,2);

    if (ui->axisLE->text() != nullptr){
        //横纵坐标
        QStringList valuersStr = ui->axisLE->text().split(',');
        QVector<uint16_t> values;

        if ((valuersStr.size()%3) != 0){
            QMessageBox::information(this, tr("错误"), tr("请输入一个纵坐标和两个横坐标!"));
        }
        else{
            sendflag = true;
            int axisnum = valuersStr.size()/3;

            for (int i = 0; i < valuersStr.size(); i=i+1){

                //坐标处理
                const QString valuerStr1 = valuersStr[i];
                quint32 value1 = valuerStr1.toULong();
                uint16_t value1high = (value1 >> 16)& 0xFFFF;
                uint16_t value1low = value1 & 0xFFFF;
                values.append(value1low);
                values.append(value1high);

            }

            //填充剩下的的坐标知道满足120个
            while (values.size() < 90){
                values.append(0);
            }

            //加入坐标数量
            values.append(axisnum);
            values.append(0);


            //加入发送标志位
            values.append(sendflag);
            values.append(0);

            //加入皮带一圈的长度
            if (ui->roubddistanceLE->text() != nullptr){
                quint32 roubd = ui->roubddistanceLE->text().toULong();
                uint16_t roubdl = (roubd >> 16)& 0xFFFF;
                uint16_t roubdh = roubd & 0xFFFF;
                values.append(roubdl);
                values.append(roubdh);
            }

            //加入喷气持续时间
            if (ui->timedurationLE->text() != nullptr){
                quint32 timedur = ui->timedurationLE->text().toULong();
                uint16_t timedurl = (timedur >> 16)& 0xFFFF;
                uint16_t timedurh = timedur & 0xFFFF;
                values.append(timedurl);
                values.append(timedurh);
            }

            // if (ui->axisLE->text() != nullptr&&ui->aimnumLE->text() != nullptr&&ui->roubddistanceLE->text() != nullptr&&)
            unit.setValues(values);


            QModbusReply *reply = client->sendWriteRequest(unit, 1);
            if (reply){
                reply->deleteLater();
            }

        }
    }
}


void Widget::on_readparameterpB_clicked()
{
    QModbusDataUnit unit(QModbusDataUnit::HoldingRegisters, 700 ,2);
    QModbusReply *reply = client->sendReadRequest(unit, 2);
    if (reply){
        if (!reply->isFinished()){
            connect(reply, &QModbusReply::finished, this, &Widget::replyData);
            return;
        }
        reply->deleteLater();
    }
    // connect(reply, &QModbusReply::finished, this, &Widget::replyData);
}

void Widget::replyData(){
    QModbusReply *reply = qobject_cast<QModbusReply*>(sender()) ;
    if (reply){
        QModbusDataUnit unit = reply->result();

        receiveflag = unit.value(0);
        uint16_t reg = unit.value(1);

        // quint32 combvalue3 = (static_cast<quint32>(reg6) << 16) | reg5;
        QString conbvaluestr3 =QString::number(reg, 10).toUpper();

        ui->speedLE->setText(conbvaluestr3);
    }
    reply->deleteLater();
}


//连接PLC
void Widget::on_connectpB_clicked()
{
    if (ui->connectpB->text() == nullptr){
        qDebug() << "请输入ip";
    }
    else{
        client->setConnectionParameter(QModbusDevice::NetworkAddressParameter, ui->ipadressLE->text());
        if (client->connectDevice() == true){
            // qDebug() << "connection success";
        }
        // client->connectDevice();
    }
}


//设置接收发送模式
void Widget::on_moderead_clicked()
{

    if (sendflag == false&& receiveflag == true){
        ui->sendmodeLE->setText("接收模式");
    }
    else if (sendflag == true&& receiveflag == false){
        ui->sendmodeLE->setText("发送模式");
    }
    else{
        QMessageBox::information(this, tr("错误"), tr("模式设置出错!"));
    }


}

