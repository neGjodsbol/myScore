#ifndef MPPALETTEBOX_H
#define MPPALETTEBOX_H

#include "palette.h"
#include "ui_mppalettebox.h"

namespace Ms {

class MpPaletteBox : public QWidget, Ui::MpPaletteBoxBase {
    Q_OBJECT

      QScrollArea *psa;

      struct PaletteItem {
            ~PaletteItem();
            QString label;           // used as index
            Palette* palette;
            };

      QList<PaletteItem*> paletteList;

      public slots:
         void mpSetPalette (QAction*);

      public:
            void addPalette(Palette* p, QString label);
         MpPaletteBox(QWidget *parent = 0);
            ~MpPaletteBox();
      };
}
#endif // MPPALETTEBOX_H
