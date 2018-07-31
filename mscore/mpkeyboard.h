#ifndef MPKEYBOARD_H
#define MPKEYBOARD_H

#include "ui_mpkeyboard.h"

namespace Ms {

class MpKeyboard : public QWidget, Ui::MpKeyboardBase {
      Q_OBJECT

      void pitchKey (int);
      void durationKey (int);
      void functionKey (int);
      void specialKey (int);
      void setFlat (int, bool);
      void resetModifiers ();
      void sendKey (int, int);

      bool shiftOn;
      bool cmdOn;
      bool dotOn;
      bool noteEntryOn;
      int  m_currenDuration;

      enum Key {
            KEY_NOTE,
            KEY_SHIFT,
            KEY_CMD,
            KEY_INS,
            KEY_DEL,
            KEY_LEFT,
            KEY_RIGHT,
            KEY_UP,
            KEY_DOWN,
            KEY_SLUR,
            KEY_FLIP,
            KEY_DOT,
            KEY_TIE,
            KEY_TUPLET,
            KEY_REST,
            KEY_A,
            KEY_B,
            KEY_C,
            KEY_D,
            KEY_E,
            KEY_F,
            KEY_G,
            KEY_SHARP,
            KEY_FLAT,
            KEY_NATURAL,
            KEY_128,
            KEY_64,
            KEY_32,
            KEY_16,
            KEY_8,
            KEY_4,
            KEY_2,
            KEY_1,
            KEY_NONE
            };

      public slots:
         void setVoice(int);

   private slots:

      void on_keyA_clicked();
      void on_keyB_clicked();
      void on_keyC_clicked();
      void on_keyD_clicked();
      void on_keyE_clicked();
      void on_keyF_clicked();
      void on_keyG_clicked();
      void on_keyRest_clicked();
      void on_keyTie_clicked();
      void on_keyIns_clicked();
      void on_key128_clicked();
      void on_key64_clicked();
      void on_key32_clicked();
      void on_key16_clicked();
      void on_key8_clicked();
      void on_key4_clicked();
      void on_key2_clicked();
      void on_key1_clicked();
      void on_keyDot_clicked();
      void on_keyDel_clicked();
      void on_keySlur_clicked();
      void on_keyFlip_clicked();
      void on_keyTriplet_clicked();
      void on_keySharp_clicked();
      void on_keyFlat_clicked();
      void on_keyNatural_clicked();
      void on_keyShift_clicked();
      void on_keyCmd_clicked();
      void on_keyLeft_clicked();
      void on_keyDown_clicked();
      void on_keyUp_clicked();
      void on_keyRight_clicked();
      void on_voiceButton_clicked();

signals:
      keyAction (QAction *);
      keyAction (const char *);
      keyAction (int, int);
      keyAction (QString, QString);

   public:
      MpKeyboard(QWidget *parent = 0);
      ~MpKeyboard();

      };
}
#endif // MPKEYBOARD_H
