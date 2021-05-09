/********************************************************************************
** Form generated from reading UI file 'settingscom.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSCOM_H
#define UI_SETTINGSCOM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsCOM
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBoxCOM;
    QGroupBox *groupBoxShpindle;
    QSpinBox *spinBoxDelayAfterON;
    QLabel *label;
    QLabel *label_2;
    QSpinBox *spinBoxDelayAfterOFF;
    QSpinBox *spinBoxNumbOfTurns;
    QLabel *label_3;
    QPushButton *applyButton;
    QPushButton *canselButton;
    QPushButton *saveSettingsButton;
    QGroupBox *groupBoxSound;
    QCheckBox *checkBoxSoundAtEndProgramm;
    QCheckBox *checkBoxSoundAtEndCycle;
    QCheckBox *checkBoxSoundAtChangeTool;
    QCheckBox *checkBoxSoundAtChangeToolRepeat;
    QGroupBox *groupBoxLaser;
    QGroupBox *groupBoxAxis;
    QSpinBox *spinBoxFastMove;
    QSpinBox *spinBoxSlowMove;
    QLabel *label_4;
    QLabel *label_5;

    void setupUi(QMainWindow *SettingsCOM)
    {
        if (SettingsCOM->objectName().isEmpty())
            SettingsCOM->setObjectName(QStringLiteral("SettingsCOM"));
        SettingsCOM->resize(801, 558);
        centralwidget = new QWidget(SettingsCOM);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        groupBoxCOM = new QGroupBox(centralwidget);
        groupBoxCOM->setObjectName(QStringLiteral("groupBoxCOM"));
        groupBoxCOM->setGeometry(QRect(20, 10, 161, 231));
        groupBoxShpindle = new QGroupBox(centralwidget);
        groupBoxShpindle->setObjectName(QStringLiteral("groupBoxShpindle"));
        groupBoxShpindle->setGeometry(QRect(180, 10, 251, 231));
        spinBoxDelayAfterON = new QSpinBox(groupBoxShpindle);
        spinBoxDelayAfterON->setObjectName(QStringLiteral("spinBoxDelayAfterON"));
        spinBoxDelayAfterON->setGeometry(QRect(170, 20, 71, 22));
        spinBoxDelayAfterON->setMaximum(3600);
        label = new QLabel(groupBoxShpindle);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 20, 151, 16));
        label_2 = new QLabel(groupBoxShpindle);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 50, 151, 16));
        spinBoxDelayAfterOFF = new QSpinBox(groupBoxShpindle);
        spinBoxDelayAfterOFF->setObjectName(QStringLiteral("spinBoxDelayAfterOFF"));
        spinBoxDelayAfterOFF->setGeometry(QRect(170, 50, 71, 22));
        spinBoxDelayAfterOFF->setWrapping(false);
        spinBoxDelayAfterOFF->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        spinBoxDelayAfterOFF->setProperty("showGroupSeparator", QVariant(false));
        spinBoxDelayAfterOFF->setMaximum(3600);
        spinBoxNumbOfTurns = new QSpinBox(groupBoxShpindle);
        spinBoxNumbOfTurns->setObjectName(QStringLiteral("spinBoxNumbOfTurns"));
        spinBoxNumbOfTurns->setGeometry(QRect(10, 100, 111, 22));
        spinBoxNumbOfTurns->setMaximum(99999);
        label_3 = new QLabel(groupBoxShpindle);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 80, 111, 16));
        applyButton = new QPushButton(centralwidget);
        applyButton->setObjectName(QStringLiteral("applyButton"));
        applyButton->setGeometry(QRect(640, 530, 75, 23));
        canselButton = new QPushButton(centralwidget);
        canselButton->setObjectName(QStringLiteral("canselButton"));
        canselButton->setGeometry(QRect(720, 530, 75, 23));
        saveSettingsButton = new QPushButton(centralwidget);
        saveSettingsButton->setObjectName(QStringLiteral("saveSettingsButton"));
        saveSettingsButton->setGeometry(QRect(10, 530, 75, 23));
        groupBoxSound = new QGroupBox(centralwidget);
        groupBoxSound->setObjectName(QStringLiteral("groupBoxSound"));
        groupBoxSound->setGeometry(QRect(430, 10, 241, 231));
        checkBoxSoundAtEndProgramm = new QCheckBox(groupBoxSound);
        checkBoxSoundAtEndProgramm->setObjectName(QStringLiteral("checkBoxSoundAtEndProgramm"));
        checkBoxSoundAtEndProgramm->setGeometry(QRect(20, 20, 161, 17));
        checkBoxSoundAtEndCycle = new QCheckBox(groupBoxSound);
        checkBoxSoundAtEndCycle->setObjectName(QStringLiteral("checkBoxSoundAtEndCycle"));
        checkBoxSoundAtEndCycle->setGeometry(QRect(20, 40, 141, 17));
        checkBoxSoundAtChangeTool = new QCheckBox(groupBoxSound);
        checkBoxSoundAtChangeTool->setObjectName(QStringLiteral("checkBoxSoundAtChangeTool"));
        checkBoxSoundAtChangeTool->setGeometry(QRect(20, 60, 131, 17));
        checkBoxSoundAtChangeToolRepeat = new QCheckBox(groupBoxSound);
        checkBoxSoundAtChangeToolRepeat->setObjectName(QStringLiteral("checkBoxSoundAtChangeToolRepeat"));
        checkBoxSoundAtChangeToolRepeat->setGeometry(QRect(40, 80, 171, 17));
        groupBoxLaser = new QGroupBox(centralwidget);
        groupBoxLaser->setObjectName(QStringLiteral("groupBoxLaser"));
        groupBoxLaser->setGeometry(QRect(20, 240, 161, 80));
        groupBoxAxis = new QGroupBox(centralwidget);
        groupBoxAxis->setObjectName(QStringLiteral("groupBoxAxis"));
        groupBoxAxis->setGeometry(QRect(180, 240, 251, 151));
        spinBoxFastMove = new QSpinBox(groupBoxAxis);
        spinBoxFastMove->setObjectName(QStringLiteral("spinBoxFastMove"));
        spinBoxFastMove->setGeometry(QRect(10, 40, 131, 22));
        spinBoxFastMove->setMaximum(99999);
        spinBoxSlowMove = new QSpinBox(groupBoxAxis);
        spinBoxSlowMove->setObjectName(QStringLiteral("spinBoxSlowMove"));
        spinBoxSlowMove->setGeometry(QRect(10, 100, 131, 22));
        label_4 = new QLabel(groupBoxAxis);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 20, 141, 16));
        label_5 = new QLabel(groupBoxAxis);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 80, 121, 16));
        SettingsCOM->setCentralWidget(centralwidget);

        retranslateUi(SettingsCOM);
        QObject::connect(canselButton, SIGNAL(clicked()), SettingsCOM, SLOT(close()));

        QMetaObject::connectSlotsByName(SettingsCOM);
    } // setupUi

    void retranslateUi(QMainWindow *SettingsCOM)
    {
        SettingsCOM->setWindowTitle(QApplication::translate("SettingsCOM", "MainWindow", 0));
        groupBoxCOM->setTitle(QApplication::translate("SettingsCOM", "COM port", 0));
        groupBoxShpindle->setTitle(QApplication::translate("SettingsCOM", "Spindle", 0));
        label->setText(QApplication::translate("SettingsCOM", "\320\227\320\260\320\264\320\265\321\200\320\266\320\272\320\260 \320\277\320\276\321\201\320\273\320\265 \320\262\320\272\320\273\321\216\321\207\320\265\320\275\320\270\321\217", 0));
        label_2->setText(QApplication::translate("SettingsCOM", "\320\227\320\260\320\264\320\265\321\200\320\266\320\272\320\260 \320\277\320\276\321\201\320\273\320\265 \320\262\321\213\320\272\320\273\321\216\321\207\320\265\320\275\320\270\321\217", 0));
        spinBoxDelayAfterOFF->setSpecialValueText(QString());
        label_3->setText(QApplication::translate("SettingsCOM", "Max. \321\207\320\270\321\201\320\273\320\276 \320\276\320\261\320\276\321\200\320\276\321\202\320\276\320\262", 0));
        applyButton->setText(QApplication::translate("SettingsCOM", "OK", 0));
        canselButton->setText(QApplication::translate("SettingsCOM", "Cansel", 0));
        saveSettingsButton->setText(QApplication::translate("SettingsCOM", "Save", 0));
        groupBoxSound->setTitle(QApplication::translate("SettingsCOM", "Sound", 0));
        checkBoxSoundAtEndProgramm->setText(QApplication::translate("SettingsCOM", "\320\237\320\276 \320\276\320\272\320\276\320\275\321\207\320\260\320\275\320\270\321\216 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\321\213", 0));
        checkBoxSoundAtEndCycle->setText(QApplication::translate("SettingsCOM", "\320\237\320\276 \320\267\320\260\320\262\320\265\321\200\321\210\320\265\320\275\320\270\321\216 \321\206\320\270\320\272\320\273\320\260", 0));
        checkBoxSoundAtChangeTool->setText(QApplication::translate("SettingsCOM", "\320\241\320\274\320\265\320\275\320\260 \320\270\320\275\321\201\321\202\321\200\321\203\320\274\320\265\320\275\321\202\320\260", 0));
        checkBoxSoundAtChangeToolRepeat->setText(QApplication::translate("SettingsCOM", "\320\277\320\276\320\262\321\202\320\276\321\200\321\217\321\202\321\214 \321\201 \320\277\320\265\321\200\320\270\320\276\320\264\320\276\320\274 5 \321\201\320\265\320\272.", 0));
        groupBoxLaser->setTitle(QApplication::translate("SettingsCOM", "Laser", 0));
        groupBoxAxis->setTitle(QApplication::translate("SettingsCOM", "Axis", 0));
        label_4->setText(QApplication::translate("SettingsCOM", "\320\243\321\201\320\272\320\276\321\200\320\265\320\275\320\275\320\276\320\265 \320\277\320\265\321\200\320\265\320\274\320\265\321\211\320\265\320\275\320\270\320\265", 0));
        label_5->setText(QApplication::translate("SettingsCOM", "\320\237\320\265\321\200\320\265\320\274\320\265\321\211\320\265\320\275\320\270\320\265 \320\277\320\276\320\264\320\260\321\207\320\270", 0));
    } // retranslateUi

};

namespace Ui {
    class SettingsCOM: public Ui_SettingsCOM {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSCOM_H
