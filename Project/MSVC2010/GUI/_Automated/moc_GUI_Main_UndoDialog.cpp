/****************************************************************************
** Meta object code from reading C++ file 'GUI_Main_UndoDialog.h'
**
** Created: Wed 18. Jan 22:05:46 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../Source/GUI/Qt/GUI_Main_UndoDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GUI_Main_UndoDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GUI_Main_UndoDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      38,   21,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_GUI_Main_UndoDialog[] = {
    "GUI_Main_UndoDialog\0\0Current,Previous\0"
    "currentItemChanged(QListWidgetItem*,QListWidgetItem*)\0"
};

void GUI_Main_UndoDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        GUI_Main_UndoDialog *_t = static_cast<GUI_Main_UndoDialog *>(_o);
        switch (_id) {
        case 0: _t->currentItemChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QListWidgetItem*(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GUI_Main_UndoDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GUI_Main_UndoDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_GUI_Main_UndoDialog,
      qt_meta_data_GUI_Main_UndoDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GUI_Main_UndoDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GUI_Main_UndoDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GUI_Main_UndoDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GUI_Main_UndoDialog))
        return static_cast<void*>(const_cast< GUI_Main_UndoDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int GUI_Main_UndoDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
