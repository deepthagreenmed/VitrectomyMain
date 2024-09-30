#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "vaccum.h"
#include "keypad.h"
#include "settingswindow.h"
#include "footpedal.h"
#include "hwhandler.h"
#include "led.h"
#include "ltc2614.h"
#include "sensor.h"

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cmath>
#include <unistd.h>
#include <chrono>
#include <thread>

#include <QLabel>
#include <QSqlDatabase>
#include <QTimer>
#include <QMouseEvent>
#include <QPropertyAnimation>
#include <QMessageBox>
#include <QString>
#include <QProcess>
#include <QComboBox>

#define PATH "/home/vitrectomy.db"
//#define PATH2 "/home/vsodata10.txt"
#define PATH3 "/home/midlabs.txt"
#define PATH4 "/home/alcon.txt"
//#define PATH5 "/home/dorc.txt"
#define PATH6 "/home/data_casete3.txt"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

   QString surgeonid;
   int surgeonind;
    int vit_value=60; //period
    float resolution = 0.000000005; //5ns
    float freq=12000;   //12kHz

    void linearcall2();
    void linearcall3();
    void nonlinearcall2();
    void nonlinearcall3();

    bool eventFilter(QObject* object, QEvent* event);
    void updateLabelValue(QLabel* label, int dig, int value, int maxValue, int limit);
    void updateLabelValue2(QLabel *label, int limit);
    void switchled(LED *led, int choice);
    void footpedalbeep();

    void exportGPIO(int pin);
    void setGPIODirection(int pin, const std::string& direction);
    void writeGPIO(int pin, int value);
    void loadPresets();

    void reverseOnOff();
    void reverseOnOff2();
    void setLastSelectedValue();
    void onComboBoxIndexChanged(int index);


signals:

public slots:
    void comboboxload(const QStringList& items);

    void updateText(const QString &text);
    void receiveString(const QString& str);
    void receiveString0(QString val);
    void receiveString1(QString val);
    void receiveString2(QString val);
    void receiveString3(QString val);

    void led1val(QString str);
    void led2val(QString str);
    void vacval(QString str);
    void vaclnl(QString str);
    void vitval(QString str);
    void vitlnl(QString str);
    void typevit(QString str);
    void diaval(QString val);

    void on_clicked(const QString& digit);
     void on_clickedenter();
     void on_clickedbackspace();

     void vitvalset();
     void colorOn();




private slots:
     void setFPValues();
     void configOnOff();
     void transitionToNewScreen();
     void setZero();

     void siloil();
     void diathermy();
     void airinjectoroff();

     void ai_setvalue(int pin, int value);
     void led1_setvalue(int pin, int value);
     void led2_setvalue(int pin, int value);
     void vit_setvalue(int pin, int value);
     void dia_setvalue(int pin, int value);
     void siloil_setvalue(int pin, int value);



     void updateLabel();
     void updateLabel2();

     void updatetimedate();
     void timerCompleted();
     void showsetupscreen();
    void showsettingswindow();

    void increaseVaccumValue();
    void decreaseVaccumValue();
    void increaseVitrectomyValue();
    void decreaseVitrectomyValue();
    void increaseDiathermyValue();
    void decreaseDiathermyValue();
    void increaseAirInjectorValue();
    void decreaseAirInjectorValue();
    void increaseLED1Value();
    void decreaseLED1Value();
    void increaseLED2Value();
    void decreaseLED2Value();
    void increaseSiliconOilValue();
    void decreaseSiliconOilValue();


    void siloil_onoff();
    void vac_linear_nonlinear();
    void led1_onoff();
    void dia_onoff();
    void ai_onoff();
    void vit_onoff();
    void vit_linear_nonlinear();
    void led2_onoff();

private:
    Ui::MainWindow *ui;

    settingswindow *win2;
    hwHandler *hhandler;
    footpedal *fp;
    Vaccum *vac;
    keypad *key;
    ltc2614 *l;
    sensor *pres;
    LED *led1;
    LED *led2;

    QTimer *timerscreen;
    QTimer timeai;
    QTimer timerzero;
    QTimer timesiloil;
    QTimer *clicktimer;

    int vacc;
    int vitr;
    int so;
    int air;
    int diat;
    int l1;
    int l2;

    double idx;
    int avgfp=0;
    QString madtype;

    int vp;
    int ap;
    int vip;
    int vitp;
    int dp;
    int lp;
    int lp2;
    int sp;

    double fp0=2*40.95;
    double fp1=8*40.95;
    double fp2=45*40.95;
    double fp3=45*40.95;

    int beep_0to1=0;
    int beep_1to2=0;
    int beep_2to3=0;

    int flag=0;
    int flag2=0;

    bool safety_flag0=false;
    bool safety_flag1=false;
    bool safety_flag2=false;
    bool safety_flag3=false;

};
#endif // MAINWINDOW_H


