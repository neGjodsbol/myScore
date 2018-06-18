#ifndef __MPTOOLBUTTON_H__
#define __MPTOOLBUTTON_H__

#include <QWidget>
#include <QToolBar>
#include <QToolButton>
#include <QKeyEvent>

namespace Ui {
class MpToolButton;
}

/*
 * This class inherits QToolButton and allows tabbing through the tool bar's buttons
 */

class MpToolButton : public QToolButton{
      Q_OBJECT
public:
      MpToolButton(QWidget* parent, QAction* defaultQAction );
      };



#endif // __MPTOOLBUTTON_H__
