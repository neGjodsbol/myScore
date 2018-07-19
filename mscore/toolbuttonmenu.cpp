//=============================================================================
//  toolbuttonmenu.cpp
//
//  Copyright (C) 2016 Peter Jonas <shoogle@users.noreply.github.com>
//
//  This program is free software; you can redistribute it and/or modify
//  it under the terms of the GNU General Public License version 2
//  as published by the Free Software Foundation and appearing in
//  the file LICENCE.GPL
//=============================================================================

#include "toolbuttonmenu.h"
#include "globals.h"

namespace Ms {

ToolButtonMenu::ToolButtonMenu(QString str,
                     TYPES type,
                     QAction* defaultAction,
                     QActionGroup* alternativeActions,
                     QWidget* parent) : AccessibleToolButton(parent, defaultAction)
      {
      // if, and only if, type is ACTION_SWAPPED then the default action is also an alternative action.
      Q_ASSERT((type == TYPES::ACTION_SWAPPED) == alternativeActions->actions().contains(defaultAction));

      _type = type;
      _alternativeActions = alternativeActions;

#ifndef TABLET
      setMenu(new QMenu(str, this));
      menu()->setToolTipsVisible(true);

      setPopupMode(QToolButton::MenuButtonPopup);

      if (_type != TYPES::ACTION_SWAPPED) {
            addAction(defaultAction);
            addSeparator();
            }

      for (QAction* a : _alternativeActions->actions()) {
            a->setCheckable(true);
            a->setIconVisibleInMenu(true);
            }

      _alternativeActions->setExclusive(true);
      addActions(_alternativeActions->actions());
#endif
      connect(_alternativeActions, SIGNAL(triggered(QAction*)), this, SLOT(handleAlternativeAction(QAction*)));
#ifndef TABLET
      if (_type != TYPES::ACTION_SWAPPED) {
            QAction* a = _alternativeActions->actions().first();
            a->setChecked(true);
            if (_type == TYPES::ICON_CHANGED)
                  changeIcon(a);
            }
#endif
      }

void ToolButtonMenu::handleAlternativeAction(QAction* a)
      {
      Q_ASSERT(_alternativeActions->actions().contains(a));
#ifdef TABLET
    changeIcon (a);
#else
      switch (_type) {
            case TYPES::FIXED:
                  break;
            case TYPES::ICON_CHANGED:
                  changeIcon(a);
                  break;
            case TYPES::ACTION_SWAPPED:
                  setDefaultAction(a);
                  break;
            }
#endif
      if (!defaultAction()->isChecked())
            defaultAction()->trigger();
      }

} // namespace Ms
