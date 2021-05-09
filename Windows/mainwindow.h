#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include "port.h"
#include <QtGui>
#include <QtCore>
#include <QLabel>
#include <QProgressBar>
#include "settingscom.h"
#include <QFileDialog>
#include <QShortcut>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

signals:
    void writeData(QByteArray data);
    void savesettings(QString name, int baudrate, int DataBits, int Parity, int StopBits, int FlowControl);

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_BtnSearch_clicked();
    void Print(QString data);
    void on_BtnDefault_clicked();

    void on_BtnConnect_clicked();

    void on_BtnSave_clicked();

    void on_BtnApply_clicked();

    void on_spinBoxMinutes_valueChanged(int arg1);

    void on_BtnSetTemperature_clicked();

    void on_BtnReadTemperature_clicked();

    void on_BtnClearLog_clicked();

    void on_spinBoxMinutes_valueChanged(const QString &arg1);

    void on_BtnBlowMode_clicked();

    void on_pushButtonWorkMode_clicked();

    void on_checkBox_toggled(bool checked);

    void makePlot();
    void on_checkBox_clicked();

    void on_checkBox_2_toggled(bool checked);

    void on_findAndConnectButton_clicked();

    void on_BtnDisconect_clicked();

    void on_BtnStartTimer_clicked();

    void on_toolButton_clicked();

private:
    Ui::MainWindow *ui;
    QLabel *StatLabelCOM;
    QLabel *RunTimeLabel;
    QLabel *StatProgramm;
};

#endif // MAINWINDOW_H
