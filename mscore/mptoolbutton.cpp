
//#include <QGraphicsColorizeEffect>
//#include <QToolButton>
#include "mptoolbutton.h"



MpToolButton::MpToolButton(QWidget* parent, QAction* defaultQAction ): QToolButton(parent)
      {
      setDefaultAction(defaultQAction);
      setFocusPolicy(Qt::TabFocus);
      setPopupMode(QToolButton::InstantPopup);
}


