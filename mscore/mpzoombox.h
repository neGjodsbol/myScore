#ifndef MPZOOMBOX_H
#define MPZOOMBOX_H

#include <QDialog>
#include "ui_mpzoombox.h"

namespace Ms {

class MpZoomBox : public QDialog, Ui::MpZoomBox
      {
      Q_OBJECT

public:
      explicit MpZoomBox(QWidget *parent = nullptr);
      ~MpZoomBox();

private:
      Ui::MpZoomBox *ui;
      };
}
#endif // MPZOOMBOX_H
