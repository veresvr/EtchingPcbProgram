#ifndef SETTINGSCOM_H
#define SETTINGSCOM_H

#include <QMainWindow>

namespace Ui {
class SettingsCOM;
}

class SettingsCOM : public QMainWindow
{
    Q_OBJECT

public:
    explicit SettingsCOM(QWidget *parent = 0);
    ~SettingsCOM();
    void applySettingsFromForm();

signals:


private slots:


private:
    Ui::SettingsCOM *ui;
};

#endif // SETTINGSCOM_H
