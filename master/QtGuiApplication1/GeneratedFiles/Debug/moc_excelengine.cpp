/****************************************************************************
** Meta object code from reading C++ file 'excelengine.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../excelengine.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'excelengine.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ExcelEngine_t {
    QByteArrayData data[34];
    char stringdata0[345];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ExcelEngine_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ExcelEngine_t qt_meta_stringdata_ExcelEngine = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ExcelEngine"
QT_MOC_LITERAL(1, 12, 15), // "createExcelFile"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 8), // "fileName"
QT_MOC_LITERAL(4, 38, 15), // "setExcelVisible"
QT_MOC_LITERAL(5, 54, 7), // "visible"
QT_MOC_LITERAL(6, 62, 12), // "setSheetName"
QT_MOC_LITERAL(7, 75, 4), // "name"
QT_MOC_LITERAL(8, 80, 9), // "writeText"
QT_MOC_LITERAL(9, 90, 1), // "x"
QT_MOC_LITERAL(10, 92, 1), // "y"
QT_MOC_LITERAL(11, 94, 4), // "text"
QT_MOC_LITERAL(12, 99, 8), // "readText"
QT_MOC_LITERAL(13, 108, 12), // "setRowHeight"
QT_MOC_LITERAL(14, 121, 1), // "i"
QT_MOC_LITERAL(15, 123, 14), // "setColumnWidth"
QT_MOC_LITERAL(16, 138, 11), // "setWarpText"
QT_MOC_LITERAL(17, 150, 1), // "b"
QT_MOC_LITERAL(18, 152, 14), // "setBorderColor"
QT_MOC_LITERAL(19, 167, 5), // "color"
QT_MOC_LITERAL(20, 173, 13), // "setFontFamily"
QT_MOC_LITERAL(21, 187, 6), // "family"
QT_MOC_LITERAL(22, 194, 11), // "setFontSize"
QT_MOC_LITERAL(23, 206, 1), // "s"
QT_MOC_LITERAL(24, 208, 13), // "setFontItalic"
QT_MOC_LITERAL(25, 222, 11), // "setFontBold"
QT_MOC_LITERAL(26, 234, 18), // "setBackgroundColor"
QT_MOC_LITERAL(27, 253, 9), // "clearCell"
QT_MOC_LITERAL(28, 263, 14), // "setActiveExcel"
QT_MOC_LITERAL(29, 278, 16), // "closeActiveExcel"
QT_MOC_LITERAL(30, 295, 9), // "saveExcel"
QT_MOC_LITERAL(31, 305, 11), // "saveAsExcel"
QT_MOC_LITERAL(32, 317, 13), // "getExcelTitle"
QT_MOC_LITERAL(33, 331, 13) // "getExcelValue"

    },
    "ExcelEngine\0createExcelFile\0\0fileName\0"
    "setExcelVisible\0visible\0setSheetName\0"
    "name\0writeText\0x\0y\0text\0readText\0"
    "setRowHeight\0i\0setColumnWidth\0setWarpText\0"
    "b\0setBorderColor\0color\0setFontFamily\0"
    "family\0setFontSize\0s\0setFontItalic\0"
    "setFontBold\0setBackgroundColor\0clearCell\0"
    "setActiveExcel\0closeActiveExcel\0"
    "saveExcel\0saveAsExcel\0getExcelTitle\0"
    "getExcelValue"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ExcelEngine[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  119,    2, 0x0a /* Public */,
       4,    1,  122,    2, 0x0a /* Public */,
       6,    1,  125,    2, 0x0a /* Public */,
       8,    3,  128,    2, 0x0a /* Public */,
      12,    0,  135,    2, 0x0a /* Public */,
      13,    1,  136,    2, 0x0a /* Public */,
      15,    1,  139,    2, 0x0a /* Public */,
      16,    1,  142,    2, 0x0a /* Public */,
      18,    1,  145,    2, 0x0a /* Public */,
      20,    1,  148,    2, 0x0a /* Public */,
      22,    1,  151,    2, 0x0a /* Public */,
      24,    1,  154,    2, 0x0a /* Public */,
      25,    1,  157,    2, 0x0a /* Public */,
      26,    1,  160,    2, 0x0a /* Public */,
      27,    0,  163,    2, 0x0a /* Public */,
      28,    1,  164,    2, 0x0a /* Public */,
      29,    0,  167,    2, 0x0a /* Public */,
      30,    0,  168,    2, 0x0a /* Public */,
      31,    1,  169,    2, 0x0a /* Public */,
      32,    0,  172,    2, 0x0a /* Public */,
      33,    2,  173,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Bool, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Bool, QMetaType::Int, QMetaType::Int, QMetaType::QString,    9,   10,   11,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void, QMetaType::QColor,   19,
    QMetaType::Void, QMetaType::QString,   21,
    QMetaType::Void, QMetaType::Int,   23,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void, QMetaType::QColor,   19,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::QString,
    QMetaType::QString, QMetaType::Int, QMetaType::Int,    9,   10,

       0        // eod
};

void ExcelEngine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ExcelEngine *_t = static_cast<ExcelEngine *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { bool _r = _t->createExcelFile((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: _t->setExcelVisible((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 2: _t->setSheetName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: { bool _r = _t->writeText((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->readText();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: _t->setRowHeight((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 6: _t->setColumnWidth((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 7: _t->setWarpText((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 8: _t->setBorderColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 9: _t->setFontFamily((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->setFontSize((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 11: _t->setFontItalic((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 12: _t->setFontBold((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 13: _t->setBackgroundColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 14: _t->clearCell(); break;
        case 15: _t->setActiveExcel((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 16: _t->closeActiveExcel(); break;
        case 17: _t->saveExcel(); break;
        case 18: _t->saveAsExcel((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 19: { QString _r = _t->getExcelTitle();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 20: { QString _r = _t->getExcelValue((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject ExcelEngine::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ExcelEngine.data,
      qt_meta_data_ExcelEngine,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ExcelEngine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ExcelEngine::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ExcelEngine.stringdata0))
        return static_cast<void*>(const_cast< ExcelEngine*>(this));
    return QWidget::qt_metacast(_clname);
}

int ExcelEngine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 21)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 21;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
