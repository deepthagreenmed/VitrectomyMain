/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[70];
    char stringdata0[942];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 12), // "comboboxload"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 5), // "items"
QT_MOC_LITERAL(4, 31, 10), // "updateText"
QT_MOC_LITERAL(5, 42, 4), // "text"
QT_MOC_LITERAL(6, 47, 11), // "setFPValues"
QT_MOC_LITERAL(7, 59, 13), // "receiveString"
QT_MOC_LITERAL(8, 73, 3), // "str"
QT_MOC_LITERAL(9, 77, 14), // "receiveString0"
QT_MOC_LITERAL(10, 92, 3), // "val"
QT_MOC_LITERAL(11, 96, 14), // "receiveString1"
QT_MOC_LITERAL(12, 111, 14), // "receiveString2"
QT_MOC_LITERAL(13, 126, 14), // "receiveString3"
QT_MOC_LITERAL(14, 141, 7), // "led1val"
QT_MOC_LITERAL(15, 149, 7), // "led2val"
QT_MOC_LITERAL(16, 157, 6), // "vacval"
QT_MOC_LITERAL(17, 164, 6), // "vaclnl"
QT_MOC_LITERAL(18, 171, 6), // "vitval"
QT_MOC_LITERAL(19, 178, 6), // "vitlnl"
QT_MOC_LITERAL(20, 185, 7), // "typevit"
QT_MOC_LITERAL(21, 193, 6), // "diaval"
QT_MOC_LITERAL(22, 200, 10), // "on_clicked"
QT_MOC_LITERAL(23, 211, 5), // "digit"
QT_MOC_LITERAL(24, 217, 15), // "on_clickedenter"
QT_MOC_LITERAL(25, 233, 19), // "on_clickedbackspace"
QT_MOC_LITERAL(26, 253, 9), // "vitvalset"
QT_MOC_LITERAL(27, 263, 8), // "delete20"
QT_MOC_LITERAL(28, 272, 11), // "configOnOff"
QT_MOC_LITERAL(29, 284, 6), // "siloil"
QT_MOC_LITERAL(30, 291, 11), // "ai_setvalue"
QT_MOC_LITERAL(31, 303, 3), // "pin"
QT_MOC_LITERAL(32, 307, 5), // "value"
QT_MOC_LITERAL(33, 313, 13), // "led2_setvalue"
QT_MOC_LITERAL(34, 327, 12), // "vit_setvalue"
QT_MOC_LITERAL(35, 340, 12), // "dia_setvalue"
QT_MOC_LITERAL(36, 353, 15), // "siloil_setvalue"
QT_MOC_LITERAL(37, 369, 21), // "transitionToNewScreen"
QT_MOC_LITERAL(38, 391, 7), // "setZero"
QT_MOC_LITERAL(39, 399, 11), // "updateLabel"
QT_MOC_LITERAL(40, 411, 12), // "updateLabel2"
QT_MOC_LITERAL(41, 424, 9), // "diathermy"
QT_MOC_LITERAL(42, 434, 14), // "airinjectoroff"
QT_MOC_LITERAL(43, 449, 14), // "updatetimedate"
QT_MOC_LITERAL(44, 464, 19), // "increaseVaccumValue"
QT_MOC_LITERAL(45, 484, 19), // "decreaseVaccumValue"
QT_MOC_LITERAL(46, 504, 23), // "increaseVitrectomyValue"
QT_MOC_LITERAL(47, 528, 23), // "decreaseVitrectomyValue"
QT_MOC_LITERAL(48, 552, 22), // "increaseDiathermyValue"
QT_MOC_LITERAL(49, 575, 22), // "decreaseDiathermyValue"
QT_MOC_LITERAL(50, 598, 24), // "increaseAirInjectorValue"
QT_MOC_LITERAL(51, 623, 24), // "decreaseAirInjectorValue"
QT_MOC_LITERAL(52, 648, 17), // "increaseLED1Value"
QT_MOC_LITERAL(53, 666, 17), // "decreaseLED1Value"
QT_MOC_LITERAL(54, 684, 17), // "increaseLED2Value"
QT_MOC_LITERAL(55, 702, 17), // "decreaseLED2Value"
QT_MOC_LITERAL(56, 720, 23), // "increaseSiliconOilValue"
QT_MOC_LITERAL(57, 744, 23), // "decreaseSiliconOilValue"
QT_MOC_LITERAL(58, 768, 18), // "showsettingswindow"
QT_MOC_LITERAL(59, 787, 12), // "siloil_onoff"
QT_MOC_LITERAL(60, 800, 20), // "vac_linear_nonlinear"
QT_MOC_LITERAL(61, 821, 10), // "led1_onoff"
QT_MOC_LITERAL(62, 832, 9), // "dia_onoff"
QT_MOC_LITERAL(63, 842, 8), // "ai_onoff"
QT_MOC_LITERAL(64, 851, 9), // "vit_onoff"
QT_MOC_LITERAL(65, 861, 20), // "vit_linear_nonlinear"
QT_MOC_LITERAL(66, 882, 10), // "led2_onoff"
QT_MOC_LITERAL(67, 893, 17), // "onComboBoxClicked"
QT_MOC_LITERAL(68, 911, 14), // "timerCompleted"
QT_MOC_LITERAL(69, 926, 15) // "showsetupscreen"

    },
    "MainWindow\0comboboxload\0\0items\0"
    "updateText\0text\0setFPValues\0receiveString\0"
    "str\0receiveString0\0val\0receiveString1\0"
    "receiveString2\0receiveString3\0led1val\0"
    "led2val\0vacval\0vaclnl\0vitval\0vitlnl\0"
    "typevit\0diaval\0on_clicked\0digit\0"
    "on_clickedenter\0on_clickedbackspace\0"
    "vitvalset\0delete20\0configOnOff\0siloil\0"
    "ai_setvalue\0pin\0value\0led2_setvalue\0"
    "vit_setvalue\0dia_setvalue\0siloil_setvalue\0"
    "transitionToNewScreen\0setZero\0updateLabel\0"
    "updateLabel2\0diathermy\0airinjectoroff\0"
    "updatetimedate\0increaseVaccumValue\0"
    "decreaseVaccumValue\0increaseVitrectomyValue\0"
    "decreaseVitrectomyValue\0increaseDiathermyValue\0"
    "decreaseDiathermyValue\0increaseAirInjectorValue\0"
    "decreaseAirInjectorValue\0increaseLED1Value\0"
    "decreaseLED1Value\0increaseLED2Value\0"
    "decreaseLED2Value\0increaseSiliconOilValue\0"
    "decreaseSiliconOilValue\0showsettingswindow\0"
    "siloil_onoff\0vac_linear_nonlinear\0"
    "led1_onoff\0dia_onoff\0ai_onoff\0vit_onoff\0"
    "vit_linear_nonlinear\0led2_onoff\0"
    "onComboBoxClicked\0timerCompleted\0"
    "showsetupscreen"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      61,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  319,    2, 0x0a /* Public */,
       4,    1,  322,    2, 0x0a /* Public */,
       6,    0,  325,    2, 0x0a /* Public */,
       7,    1,  326,    2, 0x0a /* Public */,
       9,    1,  329,    2, 0x0a /* Public */,
      11,    1,  332,    2, 0x0a /* Public */,
      12,    1,  335,    2, 0x0a /* Public */,
      13,    1,  338,    2, 0x0a /* Public */,
      14,    1,  341,    2, 0x0a /* Public */,
      15,    1,  344,    2, 0x0a /* Public */,
      16,    1,  347,    2, 0x0a /* Public */,
      17,    1,  350,    2, 0x0a /* Public */,
      18,    1,  353,    2, 0x0a /* Public */,
      19,    1,  356,    2, 0x0a /* Public */,
      20,    1,  359,    2, 0x0a /* Public */,
      21,    1,  362,    2, 0x0a /* Public */,
      22,    1,  365,    2, 0x0a /* Public */,
      24,    0,  368,    2, 0x0a /* Public */,
      25,    0,  369,    2, 0x0a /* Public */,
      26,    0,  370,    2, 0x0a /* Public */,
      27,    0,  371,    2, 0x08 /* Private */,
      28,    0,  372,    2, 0x08 /* Private */,
      29,    0,  373,    2, 0x08 /* Private */,
      30,    2,  374,    2, 0x08 /* Private */,
      33,    2,  379,    2, 0x08 /* Private */,
      34,    2,  384,    2, 0x08 /* Private */,
      35,    2,  389,    2, 0x08 /* Private */,
      36,    2,  394,    2, 0x08 /* Private */,
      37,    0,  399,    2, 0x08 /* Private */,
      38,    0,  400,    2, 0x08 /* Private */,
      39,    0,  401,    2, 0x08 /* Private */,
      40,    0,  402,    2, 0x08 /* Private */,
      41,    0,  403,    2, 0x08 /* Private */,
      42,    0,  404,    2, 0x08 /* Private */,
      43,    0,  405,    2, 0x08 /* Private */,
      44,    0,  406,    2, 0x08 /* Private */,
      45,    0,  407,    2, 0x08 /* Private */,
      46,    0,  408,    2, 0x08 /* Private */,
      47,    0,  409,    2, 0x08 /* Private */,
      48,    0,  410,    2, 0x08 /* Private */,
      49,    0,  411,    2, 0x08 /* Private */,
      50,    0,  412,    2, 0x08 /* Private */,
      51,    0,  413,    2, 0x08 /* Private */,
      52,    0,  414,    2, 0x08 /* Private */,
      53,    0,  415,    2, 0x08 /* Private */,
      54,    0,  416,    2, 0x08 /* Private */,
      55,    0,  417,    2, 0x08 /* Private */,
      56,    0,  418,    2, 0x08 /* Private */,
      57,    0,  419,    2, 0x08 /* Private */,
      58,    0,  420,    2, 0x08 /* Private */,
      59,    0,  421,    2, 0x08 /* Private */,
      60,    0,  422,    2, 0x08 /* Private */,
      61,    0,  423,    2, 0x08 /* Private */,
      62,    0,  424,    2, 0x08 /* Private */,
      63,    0,  425,    2, 0x08 /* Private */,
      64,    0,  426,    2, 0x08 /* Private */,
      65,    0,  427,    2, 0x08 /* Private */,
      66,    0,  428,    2, 0x08 /* Private */,
      67,    0,  429,    2, 0x08 /* Private */,
      68,    0,  430,    2, 0x08 /* Private */,
      69,    0,  431,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QStringList,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   23,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   31,   32,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   31,   32,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   31,   32,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   31,   32,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   31,   32,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->comboboxload((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 1: _t->updateText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->setFPValues(); break;
        case 3: _t->receiveString((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->receiveString0((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->receiveString1((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->receiveString2((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->receiveString3((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->led1val((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->led2val((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->vacval((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->vaclnl((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->vitval((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 13: _t->vitlnl((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 14: _t->typevit((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 15: _t->diaval((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 16: _t->on_clicked((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 17: _t->on_clickedenter(); break;
        case 18: _t->on_clickedbackspace(); break;
        case 19: _t->vitvalset(); break;
        case 20: { bool _r = _t->delete20();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 21: _t->configOnOff(); break;
        case 22: _t->siloil(); break;
        case 23: _t->ai_setvalue((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 24: _t->led2_setvalue((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 25: _t->vit_setvalue((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 26: _t->dia_setvalue((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 27: _t->siloil_setvalue((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 28: _t->transitionToNewScreen(); break;
        case 29: _t->setZero(); break;
        case 30: _t->updateLabel(); break;
        case 31: _t->updateLabel2(); break;
        case 32: _t->diathermy(); break;
        case 33: _t->airinjectoroff(); break;
        case 34: _t->updatetimedate(); break;
        case 35: _t->increaseVaccumValue(); break;
        case 36: _t->decreaseVaccumValue(); break;
        case 37: _t->increaseVitrectomyValue(); break;
        case 38: _t->decreaseVitrectomyValue(); break;
        case 39: _t->increaseDiathermyValue(); break;
        case 40: _t->decreaseDiathermyValue(); break;
        case 41: _t->increaseAirInjectorValue(); break;
        case 42: _t->decreaseAirInjectorValue(); break;
        case 43: _t->increaseLED1Value(); break;
        case 44: _t->decreaseLED1Value(); break;
        case 45: _t->increaseLED2Value(); break;
        case 46: _t->decreaseLED2Value(); break;
        case 47: _t->increaseSiliconOilValue(); break;
        case 48: _t->decreaseSiliconOilValue(); break;
        case 49: _t->showsettingswindow(); break;
        case 50: _t->siloil_onoff(); break;
        case 51: _t->vac_linear_nonlinear(); break;
        case 52: _t->led1_onoff(); break;
        case 53: _t->dia_onoff(); break;
        case 54: _t->ai_onoff(); break;
        case 55: _t->vit_onoff(); break;
        case 56: _t->vit_linear_nonlinear(); break;
        case 57: _t->led2_onoff(); break;
        case 58: _t->onComboBoxClicked(); break;
        case 59: _t->timerCompleted(); break;
        case 60: _t->showsetupscreen(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 61)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 61;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 61)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 61;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
