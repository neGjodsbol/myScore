#include "mpzoombox.h"
#include "ui_mpzoombox.h"

namespace Ms
{

MpZoomBox::MpZoomBox(QWidget *parent) :
      QDialog(parent)

      {
      setupUi(this);
      }

MpZoomBox::~MpZoomBox()
      {
      delete ui;
      }
}
