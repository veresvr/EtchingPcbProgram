#include "mainwindow.h"
#include "ui_mainwindow.h"

#define OPENED true
#define CLOSED false

#define OUT_ARR_SIZE    15

bool state = OPENED;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    MainWindow::makePlot();

    //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    QThread *thread_New = new QThread;          //Создаем поток для порта платы
    Port *PortNew = new Port();                 //Создаем обьект по классу

    PortNew->SettingsPort.name = "COM2";
    PortNew->SettingsPort.baudRate = QSerialPort::Baud9600;
    PortNew->SettingsPort.dataBits = QSerialPort::Data8;
    PortNew->SettingsPort.parity = QSerialPort::NoParity;
    PortNew->SettingsPort.stopBits = QSerialPort::OneStop;
    PortNew->SettingsPort.flowControl = QSerialPort::NoFlowControl;

    PortNew->moveToThread(thread_New);                                          //помешаем класс  в поток
    PortNew->thisPort.moveToThread(thread_New);                                 //Помещаем сам порт в поток
    connect(PortNew, SIGNAL(error_(QString)), this, SLOT(Print(QString)));      //Лог ошибок
    connect(thread_New, SIGNAL(started()), PortNew, SLOT(process_Port()));      //Переназначения метода run
    connect(PortNew, SIGNAL(finished_Port()), thread_New, SLOT(quit()));        //Переназначение метода выход
    connect(thread_New, SIGNAL(finished()), PortNew, SLOT(deleteLater()));      //Удалить к чертям поток
    connect(PortNew, SIGNAL(finished_Port()), thread_New, SLOT(deleteLater()));     //Удалить к чертям поток
    connect(this,SIGNAL(savesettings(QString,int,int,int,int,int)),PortNew,SLOT(Write_Settings_Port(QString,int,int,int,int,int)));//Слот - ввод настроек!
    connect(ui->BtnConnect, SIGNAL(clicked()),PortNew,SLOT(ConnectPort()));
    connect(ui->BtnDisconect, SIGNAL(clicked()),PortNew,SLOT(DisconnectPort()));
    connect(PortNew, SIGNAL(outPort(QString)), this, SLOT(Print(QString)));     //Лог ошибок
    connect(this,SIGNAL(writeData(QByteArray)),PortNew,SLOT(WriteToPort(QByteArray)));

    thread_New->start();

    on_BtnSearch_clicked();         // automatically search all ports when programm is started

    connect(ui->BaudRateBox, SIGNAL(currentIndexChanged(int)) ,this, SLOT(checkCustomBaudRatePolicy(int)));
    ui->BaudRateBox->addItem(QLatin1String("9600"), QSerialPort::Baud9600);
    ui->BaudRateBox->addItem(QLatin1String("19200"), QSerialPort::Baud19200);
    ui->BaudRateBox->addItem(QLatin1String("38400"), QSerialPort::Baud38400);
    ui->BaudRateBox->addItem(QLatin1String("115200"), QSerialPort::Baud115200);

    // fill data bits
     ui->DataBitsBox->addItem(QLatin1String("5"), QSerialPort::Data5);
     ui->DataBitsBox->addItem(QLatin1String("6"), QSerialPort::Data6);
     ui->DataBitsBox->addItem(QLatin1String("7"), QSerialPort::Data7);
     ui->DataBitsBox->addItem(QLatin1String("8"), QSerialPort::Data8);
     ui->DataBitsBox->setCurrentIndex(3);

    // fill parity
     ui->ParityBox->addItem(QLatin1String("None"), QSerialPort::NoParity);
     ui->ParityBox->addItem(QLatin1String("Even"), QSerialPort::EvenParity);
     ui->ParityBox->addItem(QLatin1String("Odd"), QSerialPort::OddParity);
     ui->ParityBox->addItem(QLatin1String("Mark"), QSerialPort::MarkParity);
     ui->ParityBox->addItem(QLatin1String("Space"), QSerialPort::SpaceParity);

    // fill stop bits
     ui->StopBitsBox->addItem(QLatin1String("1"), QSerialPort::OneStop);
     #ifdef Q_OS_WIN
     ui->StopBitsBox->addItem(QLatin1String("1.5"), QSerialPort::OneAndHalfStop);
     #endif
     ui->StopBitsBox->addItem(QLatin1String("2"), QSerialPort::TwoStop);

    // fill flow control
     ui->FlowControlBox->addItem(QLatin1String("None"), QSerialPort::NoFlowControl);
     ui->FlowControlBox->addItem(QLatin1String("RTS/CTS"), QSerialPort::HardwareControl);
     ui->FlowControlBox->addItem(QLatin1String("XON/XOFF"), QSerialPort::SoftwareControl);
//     connect(ui->cBtnSend,SIGNAL(clicked()),this, SLOT(on_cEnterText_returnPressed()) );

     //set default values





     ui->labelNowTemperature->setText("0");

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
//


}

void MainWindow::on_pushButton_2_clicked()
{

}

//++++++++[Процедура пределения подключенных портов]+++++++++++++++++++++++++++++++++++
void MainWindow::on_BtnSearch_clicked()
{
    ui->PortNameBox->clear();
    foreach (const QSerialPortInfo &info, QSerialPortInfo::availablePorts())
    {
        ui->PortNameBox->addItem(info.portName());
    }
}

////+++++++++++++[Процедура ввода данных из строки]++++++++++++++++++++++++++++++++++++++++
//void MainWindow::on_cEnterText_returnPressed()
//{
//    QByteArray data; // Текстовая переменная
//    data = ui->cEnterText->text().toLocal8Bit() + '\r'; // Присвоение "data" значения из EnterText
//    writeData(data); // Отправка данных в порт
//    Print(data); // Вывод данных в консоль
//    qDebug("show sending data");
//}

void MainWindow::on_BtnDefault_clicked()
{
//    ui->BaudRateBox->setCurrentIndex(0);
//    ui->DataBitsBox->setCurrentIndex(3);
//    ui->ParityBox->setCurrentIndex(1);
//    ui->StopBitsBox->setCurrentIndex(0);
//    ui->FlowControlBox->setCurrentIndex(0);

//    savesettings(ui->PortNameBox->currentText(),
//                 ui->BaudRateBox->setCurrentIndex(2),
//                 ui->DataBitsBox->setCurrentIndex(2),
//                 ui->ParityBox->currentText().setNum(2),
//                 ui->StopBitsBox->currentText().at(2),
//                 ui->FlowControlBox->currentText().at(2) );
}

void MainWindow::on_BtnConnect_clicked()
{
    qDebug("connect");
    savesettings(ui->PortNameBox->currentText(),
                 ui->BaudRateBox->currentText().toInt(),
                 ui->DataBitsBox->currentText().toInt(),
                 ui->ParityBox->currentText().toInt(),
                 ui->StopBitsBox->currentText().toInt(),
                 ui->FlowControlBox->currentText().toInt() );
}

void MainWindow::on_BtnSave_clicked()
{

}

void MainWindow::on_BtnApply_clicked()
{
    savesettings(ui->PortNameBox->currentText(),
                 ui->BaudRateBox->currentText().toInt(),
                 ui->DataBitsBox->currentText().toInt(),
                 ui->ParityBox->currentText().toInt(),
                 ui->StopBitsBox->currentText().toInt(),
                 ui->FlowControlBox->currentText().toInt() );
}

void MainWindow::on_spinBoxMinutes_valueChanged(int arg1)
{
//    QString  str1;
//    int str = (ui->spinBoxMinutes->value());
//    str1 = ui->labelTime->setText(str.);

}

void MainWindow::on_BtnSetTemperature_clicked()
{
    uint8_t arr[OUT_ARR_SIZE] = {'[', 'M', 'S', 0xE4, ']' };
    writeData(QByteArray((char*)arr,5));
}
//+++++++++++++[Процедура вывода данных в консоль]++++++++++++++++++++++++++++++++++++++++
void MainWindow::Print(QString data)
{
    ui->textBrowserLog->append(data); //textCursor().insertText(data); // Вывод текста в консоль
//    ui->textBrowserLog->moveCursor(QTextCursor::End);//Scroll

}

void MainWindow::on_BtnReadTemperature_clicked()
{
    uint8_t arr[OUT_ARR_SIZE] = {'[', 'R', 'T', ']' };
    writeData(QByteArray((char*)arr,4));
}

void MainWindow::on_BtnClearLog_clicked()
{
    ui->textBrowserLog->clear();
}

void MainWindow::on_spinBoxMinutes_valueChanged(const QString &arg1)
{

}

void MainWindow::on_BtnBlowMode_clicked()
{
    if (ui->BtnBlowMode->text() == "ON")
    {
        uint8_t arr[OUT_ARR_SIZE] = {'[', 'B', 'E', ']' };
        writeData(QByteArray((char*)arr,4));
        ui->BtnBlowMode->setText("OFF");
    } else
    {
        uint8_t arr[OUT_ARR_SIZE] = {'[', 'B', 'D', ']' };
        writeData(QByteArray((char*)arr,4));
        ui->BtnBlowMode->setText("ON");
    }
}

void MainWindow::on_pushButtonWorkMode_clicked()
{
    if (ui->pushButtonWorkMode->text() == "ON")
    {
        uint8_t arr[OUT_ARR_SIZE] = {'[', 'H', 'E', ']' };
        writeData(QByteArray((char*)arr,4));
        ui->pushButtonWorkMode->setText("OFF");
    } else
    {
        uint8_t arr[OUT_ARR_SIZE] = {'[', 'H', 'D', ']' };
        writeData(QByteArray((char*)arr,4));
        ui->pushButtonWorkMode->setText("ON");
    }
}

void MainWindow::on_checkBox_toggled(bool checked)
{
    if (checked == true)
    {
        uint8_t arr[OUT_ARR_SIZE] = {'[', 'S', 'E', ']' };
        writeData(QByteArray((char*)arr,4));
    } else
    {
        uint8_t arr[OUT_ARR_SIZE] = {'[', 'S', 'D', ']' };
        writeData(QByteArray((char*)arr,4));
    }
}
void MainWindow::makePlot()
{
    // generate some data:
    QVector<double> x(101), y(101); // initialize with entries 0..100
    for (int i=0; i<101; ++i)
    {
      x[i] = i/50.0 - 1; // x goes from -1 to 1
      y[i] = x[i]*x[i]; // let's plot a quadratic function
    }
    // create graph and assign data to it:
    ui->customPlot->addGraph();
    ui->customPlot->graph(0)->setData(x, y);
    // give the axes some labels:
    ui->customPlot->xAxis->setLabel("x");
    ui->customPlot->yAxis->setLabel("y");
    // set axes ranges, so we see all data:
    ui->customPlot->xAxis->setRange(-1, 1);
    ui->customPlot->yAxis->setRange(0, 1);
    ui->customPlot->replot();
}

void MainWindow::on_checkBox_clicked()
{

}

void MainWindow::on_checkBox_2_toggled(bool checked)
{
    if (checked == true)
    {
        uint8_t arr[OUT_ARR_SIZE] = {'[', 'S', 'A', 'E', ']' };
        writeData(QByteArray((char*)arr,5));
    } else
    {
        uint8_t arr[OUT_ARR_SIZE] = {'[', 'S', 'A', 'D', ']' };
        writeData(QByteArray((char*)arr,5));
    }
}


void MainWindow::on_findAndConnectButton_clicked()
{

}

void MainWindow::on_BtnDisconect_clicked()
{

}

void MainWindow::on_BtnStartTimer_clicked()
{

}

void MainWindow::on_toolButton_clicked()
{

}
