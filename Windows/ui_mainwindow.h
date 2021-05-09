/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGroupBox *groupBox_2;
    QComboBox *FlowControlBox;
    QLabel *lP;
    QLabel *lDB;
    QComboBox *ParityBox;
    QComboBox *StopBitsBox;
    QPushButton *BtnConnect;
    QComboBox *DataBitsBox;
    QLabel *lFC;
    QLabel *lBR;
    QPushButton *BtnDisconect;
    QPushButton *BtnSearch;
    QPushButton *BtnDefault;
    QComboBox *PortNameBox;
    QComboBox *BaudRateBox;
    QLabel *lSB;
    QToolButton *toolButton;
    QGroupBox *groupBox;
    QTextBrowser *textBrowserLog;
    QPushButton *BtnClearLog;
    QGroupBox *groupBoxTimer;
    QLabel *labelMin;
    QSpinBox *spinBoxSeconds;
    QSpinBox *spinBoxMinutes;
    QLabel *labelSec;
    QPushButton *BtnStartTimer;
    QPushButton *BtnStopTimer;
    QGroupBox *groupBoxHeaterAndAir;
    QSpinBox *spinBoxSettingHeaterTemper;
    QLabel *labelEstablTemperNotMatter;
    QLabel *labelCelsium2;
    QPushButton *BtnSetTemperature;
    QRadioButton *radioButtonAutoMode;
    QRadioButton *radioButtonManualMode;
    QPushButton *pushButtonWorkMode;
    QLabel *labelBlow;
    QPushButton *BtnBlowMode;
    QPushButton *BtnReadTemperature;
    QCheckBox *checkBox;
    QWidget *tab_2;
    QLabel *labelNowTemperNotMatter;
    QLabel *labelCelsium1;
    QLabel *labelNowTemperature;
    QLabel *labelEstablTemperNotMatter_2;
    QLabel *labelCelsium1_2;
    QLabel *labelNowTemperature_2;
    QLabel *labelTimeLeft;
    QLabel *labelForTimeLeft;
    QCustomPlot *customPlot;
    QWidget *tabDebug;
    QCheckBox *checkBox_2;
    QPushButton *findAndConnectButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(697, 325);
        QFont font;
        font.setFamily(QStringLiteral("Ubuntu Condensed"));
        font.setPointSize(10);
        MainWindow->setFont(font);
        MainWindow->setStyleSheet(QStringLiteral(""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setMinimumSize(QSize(440, 325));
        centralWidget->setMaximumSize(QSize(1000, 1000));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 671, 301));
        tabWidget->setStyleSheet(QStringLiteral(""));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(190, 0, 181, 271));
        FlowControlBox = new QComboBox(groupBox_2);
        FlowControlBox->setObjectName(QStringLiteral("FlowControlBox"));
        FlowControlBox->setEnabled(true);
        FlowControlBox->setGeometry(QRect(100, 170, 69, 20));
        lP = new QLabel(groupBox_2);
        lP->setObjectName(QStringLiteral("lP"));
        lP->setGeometry(QRect(20, 140, 32, 20));
        lDB = new QLabel(groupBox_2);
        lDB->setObjectName(QStringLiteral("lDB"));
        lDB->setGeometry(QRect(20, 80, 51, 20));
        ParityBox = new QComboBox(groupBox_2);
        ParityBox->setObjectName(QStringLiteral("ParityBox"));
        ParityBox->setEnabled(true);
        ParityBox->setGeometry(QRect(100, 140, 69, 20));
        StopBitsBox = new QComboBox(groupBox_2);
        StopBitsBox->setObjectName(QStringLiteral("StopBitsBox"));
        StopBitsBox->setEnabled(true);
        StopBitsBox->setGeometry(QRect(100, 110, 69, 20));
        BtnConnect = new QPushButton(groupBox_2);
        BtnConnect->setObjectName(QStringLiteral("BtnConnect"));
        BtnConnect->setEnabled(true);
        BtnConnect->setGeometry(QRect(20, 230, 71, 23));
        DataBitsBox = new QComboBox(groupBox_2);
        DataBitsBox->setObjectName(QStringLiteral("DataBitsBox"));
        DataBitsBox->setEnabled(true);
        DataBitsBox->setGeometry(QRect(100, 80, 69, 20));
        lFC = new QLabel(groupBox_2);
        lFC->setObjectName(QStringLiteral("lFC"));
        lFC->setGeometry(QRect(20, 170, 62, 20));
        lBR = new QLabel(groupBox_2);
        lBR->setObjectName(QStringLiteral("lBR"));
        lBR->setGeometry(QRect(20, 51, 51, 20));
        BtnDisconect = new QPushButton(groupBox_2);
        BtnDisconect->setObjectName(QStringLiteral("BtnDisconect"));
        BtnDisconect->setEnabled(true);
        BtnDisconect->setGeometry(QRect(100, 230, 71, 23));
        BtnSearch = new QPushButton(groupBox_2);
        BtnSearch->setObjectName(QStringLiteral("BtnSearch"));
        BtnSearch->setGeometry(QRect(20, 20, 72, 24));
        BtnSearch->setStyleSheet(QStringLiteral(""));
        BtnDefault = new QPushButton(groupBox_2);
        BtnDefault->setObjectName(QStringLiteral("BtnDefault"));
        BtnDefault->setGeometry(QRect(20, 200, 151, 23));
        PortNameBox = new QComboBox(groupBox_2);
        PortNameBox->setObjectName(QStringLiteral("PortNameBox"));
        PortNameBox->setGeometry(QRect(100, 21, 69, 22));
        BaudRateBox = new QComboBox(groupBox_2);
        BaudRateBox->setObjectName(QStringLiteral("BaudRateBox"));
        BaudRateBox->setEnabled(true);
        BaudRateBox->setGeometry(QRect(100, 51, 69, 20));
        lSB = new QLabel(groupBox_2);
        lSB->setObjectName(QStringLiteral("lSB"));
        lSB->setGeometry(QRect(20, 110, 51, 20));
        toolButton = new QToolButton(groupBox_2);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        toolButton->setGeometry(QRect(50, 160, 32, 19));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 191, 271));
        textBrowserLog = new QTextBrowser(groupBox);
        textBrowserLog->setObjectName(QStringLiteral("textBrowserLog"));
        textBrowserLog->setGeometry(QRect(10, 20, 171, 211));
        BtnClearLog = new QPushButton(groupBox);
        BtnClearLog->setObjectName(QStringLiteral("BtnClearLog"));
        BtnClearLog->setGeometry(QRect(10, 240, 75, 23));
        groupBoxTimer = new QGroupBox(tab);
        groupBoxTimer->setObjectName(QStringLiteral("groupBoxTimer"));
        groupBoxTimer->setGeometry(QRect(370, 0, 271, 81));
        labelMin = new QLabel(groupBoxTimer);
        labelMin->setObjectName(QStringLiteral("labelMin"));
        labelMin->setGeometry(QRect(40, 10, 32, 16));
        labelMin->setFrameShape(QFrame::NoFrame);
        spinBoxSeconds = new QSpinBox(groupBoxTimer);
        spinBoxSeconds->setObjectName(QStringLiteral("spinBoxSeconds"));
        spinBoxSeconds->setGeometry(QRect(83, 30, 63, 41));
        QFont font1;
        font1.setFamily(QStringLiteral("Titillium Web SemiBold"));
        font1.setPointSize(30);
        font1.setBold(true);
        font1.setWeight(75);
        spinBoxSeconds->setFont(font1);
        spinBoxSeconds->setWrapping(false);
        spinBoxSeconds->setAccelerated(false);
        spinBoxSeconds->setCorrectionMode(QAbstractSpinBox::CorrectToPreviousValue);
        spinBoxSeconds->setProperty("showGroupSeparator", QVariant(false));
        spinBoxSeconds->setMaximum(59);
        spinBoxMinutes = new QSpinBox(groupBoxTimer);
        spinBoxMinutes->setObjectName(QStringLiteral("spinBoxMinutes"));
        spinBoxMinutes->setGeometry(QRect(12, 30, 71, 41));
        spinBoxMinutes->setFont(font1);
        spinBoxMinutes->setLayoutDirection(Qt::LeftToRight);
        spinBoxMinutes->setWrapping(false);
        spinBoxMinutes->setFrame(true);
        spinBoxMinutes->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinBoxMinutes->setReadOnly(false);
        spinBoxMinutes->setAccelerated(false);
        spinBoxMinutes->setCorrectionMode(QAbstractSpinBox::CorrectToPreviousValue);
        spinBoxMinutes->setProperty("showGroupSeparator", QVariant(false));
        spinBoxMinutes->setMaximum(59);
        labelSec = new QLabel(groupBoxTimer);
        labelSec->setObjectName(QStringLiteral("labelSec"));
        labelSec->setGeometry(QRect(100, 10, 32, 16));
        BtnStartTimer = new QPushButton(groupBoxTimer);
        BtnStartTimer->setObjectName(QStringLiteral("BtnStartTimer"));
        BtnStartTimer->setGeometry(QRect(155, 20, 71, 23));
        BtnStopTimer = new QPushButton(groupBoxTimer);
        BtnStopTimer->setObjectName(QStringLiteral("BtnStopTimer"));
        BtnStopTimer->setGeometry(QRect(155, 48, 72, 23));
        groupBoxHeaterAndAir = new QGroupBox(tab);
        groupBoxHeaterAndAir->setObjectName(QStringLiteral("groupBoxHeaterAndAir"));
        groupBoxHeaterAndAir->setGeometry(QRect(370, 80, 271, 191));
        spinBoxSettingHeaterTemper = new QSpinBox(groupBoxHeaterAndAir);
        spinBoxSettingHeaterTemper->setObjectName(QStringLiteral("spinBoxSettingHeaterTemper"));
        spinBoxSettingHeaterTemper->setGeometry(QRect(15, 87, 71, 41));
        spinBoxSettingHeaterTemper->setFont(font1);
        spinBoxSettingHeaterTemper->setLayoutDirection(Qt::LeftToRight);
        spinBoxSettingHeaterTemper->setWrapping(false);
        spinBoxSettingHeaterTemper->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinBoxSettingHeaterTemper->setAccelerated(false);
        spinBoxSettingHeaterTemper->setCorrectionMode(QAbstractSpinBox::CorrectToPreviousValue);
        spinBoxSettingHeaterTemper->setProperty("showGroupSeparator", QVariant(false));
        spinBoxSettingHeaterTemper->setMaximum(59);
        labelEstablTemperNotMatter = new QLabel(groupBoxHeaterAndAir);
        labelEstablTemperNotMatter->setObjectName(QStringLiteral("labelEstablTemperNotMatter"));
        labelEstablTemperNotMatter->setGeometry(QRect(15, 67, 91, 16));
        labelCelsium2 = new QLabel(groupBoxHeaterAndAir);
        labelCelsium2->setObjectName(QStringLiteral("labelCelsium2"));
        labelCelsium2->setGeometry(QRect(87, 83, 51, 42));
        QFont font2;
        font2.setPointSize(30);
        labelCelsium2->setFont(font2);
        BtnSetTemperature = new QPushButton(groupBoxHeaterAndAir);
        BtnSetTemperature->setObjectName(QStringLiteral("BtnSetTemperature"));
        BtnSetTemperature->setGeometry(QRect(140, 70, 65, 30));
        QFont font3;
        font3.setPointSize(17);
        BtnSetTemperature->setFont(font3);
        radioButtonAutoMode = new QRadioButton(groupBoxHeaterAndAir);
        radioButtonAutoMode->setObjectName(QStringLiteral("radioButtonAutoMode"));
        radioButtonAutoMode->setGeometry(QRect(10, 20, 51, 17));
        radioButtonAutoMode->setChecked(true);
        radioButtonManualMode = new QRadioButton(groupBoxHeaterAndAir);
        radioButtonManualMode->setObjectName(QStringLiteral("radioButtonManualMode"));
        radioButtonManualMode->setGeometry(QRect(60, 20, 61, 17));
        pushButtonWorkMode = new QPushButton(groupBoxHeaterAndAir);
        pushButtonWorkMode->setObjectName(QStringLiteral("pushButtonWorkMode"));
        pushButtonWorkMode->setGeometry(QRect(126, 18, 53, 23));
        labelBlow = new QLabel(groupBoxHeaterAndAir);
        labelBlow->setObjectName(QStringLiteral("labelBlow"));
        labelBlow->setGeometry(QRect(10, 150, 32, 16));
        BtnBlowMode = new QPushButton(groupBoxHeaterAndAir);
        BtnBlowMode->setObjectName(QStringLiteral("BtnBlowMode"));
        BtnBlowMode->setGeometry(QRect(50, 150, 53, 23));
        BtnReadTemperature = new QPushButton(groupBoxHeaterAndAir);
        BtnReadTemperature->setObjectName(QStringLiteral("BtnReadTemperature"));
        BtnReadTemperature->setGeometry(QRect(140, 100, 65, 30));
        BtnReadTemperature->setFont(font3);
        checkBox = new QCheckBox(groupBoxHeaterAndAir);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(170, 153, 91, 17));
        checkBox->setStyleSheet(QStringLiteral(""));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tab_2->setStyleSheet(QStringLiteral(""));
        labelNowTemperNotMatter = new QLabel(tab_2);
        labelNowTemperNotMatter->setObjectName(QStringLiteral("labelNowTemperNotMatter"));
        labelNowTemperNotMatter->setGeometry(QRect(553, 4, 91, 16));
        labelCelsium1 = new QLabel(tab_2);
        labelCelsium1->setObjectName(QStringLiteral("labelCelsium1"));
        labelCelsium1->setGeometry(QRect(610, 20, 41, 41));
        labelCelsium1->setFont(font2);
        labelNowTemperature = new QLabel(tab_2);
        labelNowTemperature->setObjectName(QStringLiteral("labelNowTemperature"));
        labelNowTemperature->setGeometry(QRect(558, 20, 51, 41));
        labelNowTemperature->setFont(font2);
        labelNowTemperature->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelEstablTemperNotMatter_2 = new QLabel(tab_2);
        labelEstablTemperNotMatter_2->setObjectName(QStringLiteral("labelEstablTemperNotMatter_2"));
        labelEstablTemperNotMatter_2->setGeometry(QRect(553, 110, 91, 16));
        labelCelsium1_2 = new QLabel(tab_2);
        labelCelsium1_2->setObjectName(QStringLiteral("labelCelsium1_2"));
        labelCelsium1_2->setGeometry(QRect(610, 126, 41, 41));
        labelCelsium1_2->setFont(font2);
        labelNowTemperature_2 = new QLabel(tab_2);
        labelNowTemperature_2->setObjectName(QStringLiteral("labelNowTemperature_2"));
        labelNowTemperature_2->setGeometry(QRect(558, 126, 51, 41));
        labelNowTemperature_2->setFont(font2);
        labelNowTemperature_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelTimeLeft = new QLabel(tab_2);
        labelTimeLeft->setObjectName(QStringLiteral("labelTimeLeft"));
        labelTimeLeft->setGeometry(QRect(570, 200, 51, 16));
        labelForTimeLeft = new QLabel(tab_2);
        labelForTimeLeft->setObjectName(QStringLiteral("labelForTimeLeft"));
        labelForTimeLeft->setGeometry(QRect(560, 209, 111, 51));
        labelForTimeLeft->setFont(font2);
        customPlot = new QCustomPlot(tab_2);
        customPlot->setObjectName(QStringLiteral("customPlot"));
        customPlot->setGeometry(QRect(10, 10, 521, 251));
        tabWidget->addTab(tab_2, QString());
        tabDebug = new QWidget();
        tabDebug->setObjectName(QStringLiteral("tabDebug"));
        checkBox_2 = new QCheckBox(tabDebug);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(10, 40, 121, 21));
        findAndConnectButton = new QPushButton(tabDebug);
        findAndConnectButton->setObjectName(QStringLiteral("findAndConnectButton"));
        findAndConnectButton->setGeometry(QRect(10, 10, 91, 23));
        tabWidget->addTab(tabDebug, QString());
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);
        BaudRateBox->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "COM Port", 0));
        lP->setText(QApplication::translate("MainWindow", "Parity:", 0));
        lDB->setText(QApplication::translate("MainWindow", "Data bits:", 0));
        BtnConnect->setText(QApplication::translate("MainWindow", "Conect", 0));
        lFC->setText(QApplication::translate("MainWindow", "Flow control:", 0));
        lBR->setText(QApplication::translate("MainWindow", "BaudRate:", 0));
        BtnDisconect->setText(QApplication::translate("MainWindow", "Disconect", 0));
        BtnSearch->setText(QApplication::translate("MainWindow", "Search", 0));
        BtnDefault->setText(QApplication::translate("MainWindow", "Default Value", 0));
        lSB->setText(QApplication::translate("MainWindow", "Stop bits:", 0));
        toolButton->setText(QApplication::translate("MainWindow", "...", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "Log", 0));
        BtnClearLog->setText(QApplication::translate("MainWindow", "Clear", 0));
        groupBoxTimer->setTitle(QApplication::translate("MainWindow", "Timer", 0));
        labelMin->setText(QApplication::translate("MainWindow", "min", 0));
        labelSec->setText(QApplication::translate("MainWindow", "sec", 0));
        BtnStartTimer->setText(QApplication::translate("MainWindow", "Start", 0));
        BtnStopTimer->setText(QApplication::translate("MainWindow", "Stop", 0));
        groupBoxHeaterAndAir->setTitle(QApplication::translate("MainWindow", "Heater and Air", 0));
        labelEstablTemperNotMatter->setText(QApplication::translate("MainWindow", "Establised temper.", 0));
        labelCelsium2->setText(QApplication::translate("MainWindow", "\302\260C", 0));
        BtnSetTemperature->setText(QApplication::translate("MainWindow", "SET", 0));
        radioButtonAutoMode->setText(QApplication::translate("MainWindow", "Auto", 0));
        radioButtonManualMode->setText(QApplication::translate("MainWindow", "Manual", 0));
        pushButtonWorkMode->setText(QApplication::translate("MainWindow", "ON", 0));
        labelBlow->setText(QApplication::translate("MainWindow", "Blow", 0));
        BtnBlowMode->setText(QApplication::translate("MainWindow", "ON", 0));
        BtnReadTemperature->setText(QApplication::translate("MainWindow", "READ", 0));
        checkBox->setText(QApplication::translate("MainWindow", "Sound at end", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Settings", 0));
        labelNowTemperNotMatter->setText(QApplication::translate("MainWindow", "Now temperature", 0));
        labelCelsium1->setText(QApplication::translate("MainWindow", "\302\260C", 0));
        labelNowTemperature->setText(QApplication::translate("MainWindow", "0", 0));
        labelEstablTemperNotMatter_2->setText(QApplication::translate("MainWindow", "Establised temper.", 0));
        labelCelsium1_2->setText(QApplication::translate("MainWindow", "\302\260C", 0));
        labelNowTemperature_2->setText(QApplication::translate("MainWindow", "0", 0));
        labelTimeLeft->setText(QApplication::translate("MainWindow", "Time left: ", 0));
        labelForTimeLeft->setText(QApplication::translate("MainWindow", "00:00", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Graph", 0));
#ifndef QT_NO_ACCESSIBILITY
        tabDebug->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        checkBox_2->setText(QApplication::translate("MainWindow", "acceptanse for state", 0));
        findAndConnectButton->setText(QApplication::translate("MainWindow", "Find && Connect", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabDebug), QApplication::translate("MainWindow", "Debug", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
