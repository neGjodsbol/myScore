#ifndef MPVOICES_H
#define MPVOICES_H

#include "ui_mpvoices.h"

namespace Ms {

class MpVoices : public QDialog, Ui::MpVoicesBase {
    Q_OBJECT

      public:
            explicit MpVoices(QWidget *parent = 0);
            ~MpVoices();

      public slots:
         void voice1setChecked(bool);
         void voice2setChecked(bool);
         void voice3setChecked(bool);
         void voice4setChecked(bool);

      private slots:
         void on_voice1Button_clicked();
         void on_voice2Button_clicked();
         void on_voice3Button_clicked();
         void on_voice4Button_clicked();

         void on_voice1Button_toggled(bool checked);
         void on_voice2Button_toggled(bool checked);
         void on_voice3Button_toggled(bool checked);
         void on_voice4Button_toggled(bool checked);

signals:
         void voiceChanged(int);
      };
}
#endif // MPVOICES_H
