#include "mpkeyboard.h"
#include "ui_mpkeyboard.h"
#include "musescore.h"
#include "shortcut.h"

namespace Ms {

MpKeyboard::MpKeyboard(QWidget *parent) :
    QWidget(parent)
{
    setupUi(this);

// -----------------------
// Initialize
// -----------------------
    noteEntryOn = false;
    setFlat(KEY_NOTE,false);
    shiftOn = false;
    setFlat(KEY_SHIFT, false);
    cmdOn = false;
    setFlat(KEY_CMD, false);
    durationKey(KEY_4);
}

MpKeyboard::~MpKeyboard()
{
}

// -----------------------------
// Keyboard handlers
// -----------------------------
void MpKeyboard::resetModifiers()
{
    keyCmd->setChecked(false);
    cmdOn = false;
    keyShift->setChecked(false);
    shiftOn = false;
}

void MpKeyboard::pitchKey(int key)
{
    if (shiftOn)
        switch (key) {
        case KEY_A: emit keyAction("chord-a");
            break;
        case KEY_B: emit keyAction("chord-b");
            break;
        case KEY_C: emit keyAction("chord-c");
            break;
        case KEY_D: emit keyAction("chord-d");
            break;
        case KEY_E: emit keyAction("chord-e");
            break;
        case KEY_F: emit keyAction("chord-f");
            break;
        case KEY_G: emit keyAction("chord-g");
            break;
         }
    else
        switch (key) {
        case KEY_A: emit keyAction("note-a");
            break;
        case KEY_B: emit keyAction("note-b");
            break;
        case KEY_C: emit keyAction("note-c");
            break;
        case KEY_D: emit keyAction("note-d");
            break;
        case KEY_E: emit keyAction("note-e");
            break;
        case KEY_F: emit keyAction("note-f");
            break;
        case KEY_G: emit keyAction("note-g");
            break;
        case KEY_REST: emit keyAction("rest");
            break;
        case KEY_SHARP: emit keyAction("sharp");
            break;
        case KEY_FLAT: emit keyAction("flat");
            break;
        case KEY_NATURAL: emit keyAction("nat");
            break;
        default:
            break;
        }

    resetModifiers ();
}

void MpKeyboard::durationKey(int key)
{

// --------------------------
// Generate external signals for note duration
// --------------------------

    if (shiftOn)
        switch (key) {
        case KEY_128: emit keyAction("interval1");
            break;
        case KEY_64: emit keyAction("interval2");
            break;
        case KEY_32: emit keyAction("interval3");
            break;
        case KEY_16: emit keyAction("interval4");
            break;
        case KEY_8: emit keyAction("interval5");
            break;
        case KEY_4: emit keyAction("interval6");
            break;
        case KEY_2: emit keyAction("interval7");
            break;
        case KEY_1: emit keyAction("interval8");
            break;
        default:
            break;
        }
    else if (cmdOn)
        switch (key) {
        case KEY_128: emit keyAction("interval1");
            break;
        case KEY_64: emit keyAction("interval-2");
            break;
        case KEY_32: emit keyAction("interval-3");
            break;
        case KEY_16: emit keyAction("interval-4");
            break;
        case KEY_8: emit keyAction("interval-5");
            break;
        case KEY_4: emit keyAction("interval-6");
            break;
        case KEY_2: emit keyAction("interval-7");
            break;
        case KEY_1: emit keyAction("interval-8");
            break;
        default:
            break;
        }
    else
        switch (key) {
        case KEY_128: emit keyAction("pad-note-128");
            break;
        case KEY_64: emit keyAction("pad-note-64");
            break;
        case KEY_32: emit keyAction("pad-note-32");
            break;
        case KEY_16: emit keyAction("pad-note-16");
            break;
        case KEY_8: emit keyAction("pad-note-8");
            break;
        case KEY_4: emit keyAction("pad-note-4");
            break;
        case KEY_2: emit keyAction("pad-note-2");
            break;
        case KEY_1: emit keyAction("pad-note-1");
            break;
        case KEY_DOT:
                emit keyAction("pad-dot");
            break;
        default:
            break;
        }

// -------------------
// Ui handling
// -------------------

    if (key != KEY_DOT)
    {
        if (!cmdOn && !shiftOn)
        {
            setFlat(m_currenDuration, false);
            setFlat(key, true);
            m_currenDuration = key;
            setFlat(KEY_DOT, false);
            dotOn = false;
        }
    }
    else
    {
        if (!shiftOn && !cmdOn)
        {
            if (dotOn)
            {
                setFlat(KEY_DOT, false);
                dotOn = false;
            }
            else
            {
                setFlat(KEY_DOT, true);
                dotOn = true;
            }

        }
    }
    resetModifiers();
}

void MpKeyboard::specialKey (int key)
{
    switch (key)
        {
        case KEY_NOTE:
                resetModifiers ();
                emit keyAction("note-input");
                if (noteEntryOn)
                    {noteEntryOn = false; setFlat (KEY_NOTE, false);}
                else
                    {noteEntryOn = true; setFlat (KEY_NOTE, true);}
            break;
        case KEY_CMD:
            shiftOn = false; setFlat (KEY_SHIFT, false);
            if (cmdOn)
                {cmdOn = false; setFlat (KEY_CMD, false);}
            else
                {cmdOn = true; setFlat (KEY_CMD, true);}
            break;
        case KEY_SHIFT:
            cmdOn = false; setFlat (KEY_CMD, false);
            if (shiftOn)
                    {shiftOn = false; setFlat (KEY_SHIFT, false);}
                else
                    {shiftOn = true; setFlat (KEY_SHIFT, true);}
            break;
    default:
// --------------------------------------------------------
//  Arrow buttons
// --------------------------------------------------------
    if (!shiftOn || !cmdOn)
    {
        if (shiftOn)
            switch (key) {
            case KEY_UP:
                emit keyAction ("select-staff-above");
                break;
            case KEY_DOWN:
                emit keyAction ("select-staff-below");
                break;
            case KEY_LEFT:
                emit keyAction ("select-prev-measure");
                break;
            case KEY_RIGHT:
                emit keyAction ("select-next-measure");
                break;
            default:
                break;
            }
        else if (cmdOn)
            switch (key) {
            case KEY_UP:
                  emit keyAction ("pitch-up-octave");
                break;
            case KEY_DOWN:
                  emit keyAction ("pitch-down-octave");
                break;
            case KEY_LEFT:
                emit keyAction ("prev-measure");
                break;
            case KEY_RIGHT:
                emit keyAction ("next-measure");
                break;
            default:
                break;
            }
        else
            switch (key) {
            case KEY_UP:
                  emit keyAction ("pitch-up");
                break;
            case KEY_DOWN:
                  emit keyAction ("pitch-down");
                break;
            case KEY_LEFT:
                   emit keyAction ("prev-chord");
                break;
            case KEY_RIGHT:
                   emit keyAction ("next-chord");
                break;
            default:
                break;
            }
    }
    else
         resetModifiers();
    }
}

void MpKeyboard::functionKey(int key)
{
    if (cmdOn)
        switch (key) {
        case KEY_INS: emit keyAction("append-measure");
            break;
        case KEY_DEL: emit keyAction("delete-measures");
            break;
        case KEY_TUPLET:
//                    emit keyAction("tuplets-menu");
            getAction("tuplets-menu")->trigger();
            break;
        default:
            break;
        }
    else
        switch (key) {
        case KEY_INS: emit keyAction("insert-measure");
            break;
        case KEY_DEL: emit keyAction("delete");
            break;
        case KEY_TUPLET: emit keyAction("triplet");
            break;
        case KEY_FLIP: emit keyAction("flip");
            break;
        case KEY_TIE: emit keyAction("tie");
            break;
        case KEY_SLUR: emit keyAction("add-slur");
            break;
        default:
            break;
        }
        resetModifiers ();
}

void MpKeyboard::setFlat(int key, bool on)
      {

      switch (key) {
            case KEY_SHIFT: keyShift->setChecked(on);break;
            case KEY_CMD:   keyCmd->setChecked(on); break;
            case KEY_128:   key128->setFlat(on); break;
            case KEY_64:    key64->setFlat(on); break;
            case KEY_32:    key32->setFlat(on); break;
            case KEY_16:    key16->setFlat(on); break;
            case KEY_8:     key8->setFlat(on); break;
            case KEY_4:     key4->setFlat(on); break;
            case KEY_2:     key2->setFlat(on); break;
            case KEY_1:     key1->setFlat(on); break;
            case KEY_DOT:   keyDot->setFlat(on); break;
            default:
                  break;
            }
      }


// -----------------------------
// Keyboard events
// -----------------------------

void MpKeyboard::on_keyA_clicked()
      {
          pitchKey(KEY_A);
      }

void MpKeyboard::on_keyB_clicked()
      {
          pitchKey(KEY_B);
      }

void MpKeyboard::on_keyC_clicked()
      {
          pitchKey(KEY_C);
      }

void MpKeyboard::on_keyD_clicked()
      {
          pitchKey(KEY_D);
      }

void MpKeyboard::on_keyE_clicked()
      {
          pitchKey(KEY_E);
      }

      void MpKeyboard::on_keyF_clicked()
      {
          pitchKey(KEY_F);
      }

      void MpKeyboard::on_keyG_clicked()
      {
          pitchKey(KEY_G);
      }

      void MpKeyboard::on_keySharp_clicked()
      {
          pitchKey(KEY_SHARP);
      }

      void MpKeyboard::on_keyFlat_clicked()
      {
          pitchKey(KEY_FLAT);
      }

      void MpKeyboard::on_keyNatural_clicked()
      {
          pitchKey(KEY_NATURAL);
      }

      void MpKeyboard::on_keyRest_clicked()
      {
          pitchKey(KEY_REST);
      }

      void MpKeyboard::on_key128_clicked()
      {
          durationKey(KEY_128);
      }

      void MpKeyboard::on_key64_clicked()
      {
          durationKey(KEY_64);
      }

      void MpKeyboard::on_key32_clicked()
      {
          durationKey(KEY_32);
      }

      void MpKeyboard::on_key16_clicked()
      {
          durationKey(KEY_16);
      }

      void MpKeyboard::on_key8_clicked()
      {
          durationKey(KEY_8);
      }

      void MpKeyboard::on_key4_clicked()
      {
          durationKey(KEY_4);
      }

      void MpKeyboard::on_key2_clicked()
      {
          durationKey(KEY_2);
      }

      void MpKeyboard::on_key1_clicked()
      {
          durationKey(KEY_1);
      }

      void MpKeyboard::on_keyDot_clicked()
      {
          durationKey(KEY_DOT);
      }

      void MpKeyboard::on_keyTie_clicked()
      {
          functionKey(KEY_TIE);
      }

      void MpKeyboard::on_keySlur_clicked()
      {
          functionKey(KEY_SLUR);
      }

      void MpKeyboard::on_keyFlip_clicked()
      {
          functionKey(KEY_FLIP);
      }

      void MpKeyboard::on_keyTriplet_clicked()
      {
          functionKey(KEY_TUPLET);
      }


      void MpKeyboard::on_keyShift_clicked()
      {
          specialKey(KEY_SHIFT);
      }

      void MpKeyboard::on_keyCmd_clicked()
      {
          specialKey(KEY_CMD);
      }

      void MpKeyboard::on_keyIns_clicked()
      {
          functionKey(KEY_INS);
      }

      void MpKeyboard::on_keyDel_clicked()
      {
          functionKey(KEY_DEL);
      }

      void MpKeyboard::on_keyLeft_clicked()
      {
          specialKey(KEY_LEFT);
      }

      void MpKeyboard::on_keyDown_clicked()
      {
          specialKey(KEY_DOWN);
      }

      void MpKeyboard::on_keyUp_clicked()
      {
          specialKey(KEY_UP);
      }

      void MpKeyboard::on_keyRight_clicked()
      {
          specialKey(KEY_RIGHT);
      }

      void MpKeyboard::on_voiceButton_clicked()
            {
            getAction("toggle-voices")->trigger();
            }

void MpKeyboard::setVoice (int voice)
      {
      if (voice == 1)
           voiceButton->setText("1");
      else if (voice == 2)
            voiceButton->setText("2");
      else if (voice == 3)
            voiceButton->setText("3");
      else if (voice == 4)
            voiceButton->setText("4");
      }
}
