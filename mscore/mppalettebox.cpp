#include "mppalettebox.h"
#include "palette.h"

namespace Ms {


MpPaletteBox::MpPaletteBox(QWidget *parent) :
      QWidget(parent)
      {
      setupUi(this);

      psa = new QScrollArea (this);
      gridLayout->addWidget(psa);
      psa->setVisible(false);
}

MpPaletteBox::~MpPaletteBox()
{
}

void MpPaletteBox::addPalette(Palette* p, QString label)
      {
      PaletteItem *pi = new PaletteItem();
      pi->label = label;
      pi->palette = p;
      paletteList.append(pi);
      }

void MpPaletteBox::mpSetPalette(QAction* a)
      {
      QString s = a->data().toString();
      //    QMessageBox m; m.setText(s); m.exec();

      for (int i = 0; i < paletteList.size(); i++){
            if(s == paletteList[i]->label){
                  Palette* p = paletteList[i]->palette;
              QPushButton* b = new QPushButton (s);
  //                psa->setWidget(p);
              psa->setWidget(b);
                  this->setVisible(true);
                  psa->setVisible(true);
                  break;
                  }
            }
      }
}
