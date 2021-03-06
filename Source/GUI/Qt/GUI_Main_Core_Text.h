// AVI MetaEdit GUI - A GUI for AVI MetaEdit
//
// This code was created in 2010 for the Library of Congress and the
// other federal government agencies participating in the Federal Agencies
// Digitization Guidelines Initiative and it is in the public domain.
//
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

//---------------------------------------------------------------------------
#ifndef GUI_Main_Core_TextH
#define GUI_Main_Core_TextH
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
class Core;
#include <QtGui/QTextEdit>
class QEvent;
//---------------------------------------------------------------------------

//***************************************************************************
// GUI_Main_Core_Text
//***************************************************************************

class GUI_Main_Core_Text : public QTextEdit
{
    Q_OBJECT

public:
    //Constructor/Destructor
    GUI_Main_Core_Text(Core* C, QWidget* parent);

    //Events
    bool event (QEvent *Event);

private:
    //Internal
    Core* C;
};

#endif
