#include "mpvoices.h"
#include "ui_mpvoices.h"
#include "musescore.h"
#include <QActionGroup>

namespace Ms {

MpVoices::MpVoices(QWidget *parent) :
                   QDialog(parent)
      {
      this->setWindowFlag(Qt::FramelessWindowHint);
      this->setModal(false);

      setupUi(this);
      resetButtons();
      setButtons(1);
      }

MpVoices::~MpVoices()
{
}

void MpVoices::setButtons(int currentVoice)
{
    switch (currentVoice) {
    case 1:
            voice1Button->setChecked(true);
        break;
    case 2:
            voice2Button->setChecked(true);
        break;
    case 3:
            voice3Button->setChecked(true);
        break;
    case 4:
            voice4Button->setChecked(true);
        break;
    default:
        break;
    }
}

void MpVoices::resetButtons()
      {
      voice1Button->setChecked(false);
      voice2Button->setChecked(false);
      voice3Button->setChecked(false);
      voice4Button->setChecked(false);
      }

void MpVoices::on_voice1Button_clicked()
      {
      resetButtons();
      setButtons(1);
      m_voiceSet = 1;
      getAction("voice-1")->triggered();
      }

void MpVoices::on_voice2Button_clicked()
      {
      resetButtons();
      setButtons(2);
      m_voiceSet = 2;
      getAction("voice-2")->triggered();
      }

void MpVoices::on_voice3Button_clicked()
      {
      resetButtons();
      setButtons(3);
      m_voiceSet = 3;
      getAction("voice-3")->triggered();
      }

void MpVoices::on_voice4Button_clicked()
      {
      resetButtons();
      setButtons(4);
      m_voiceSet = 4;
      getAction("voice-4")->triggered();
      }

void MpVoices::voice1setChecked(bool state)
      {
      voice1Button->setChecked(state);
      }
void MpVoices::voice2setChecked(bool state)
      {
      voice2Button->setChecked(state);
      }
void MpVoices::voice3setChecked(bool state)
      {
      voice3Button->setChecked(state);
      }
void MpVoices::voice4setChecked(bool state)
      {
      voice4Button->setChecked(state);
      }

void MpVoices::on_voice1Button_toggled(bool checked)
      {
      if (checked)
            emit voiceChanged(1);
      }
void Ms::MpVoices::on_voice2Button_toggled(bool checked)
      {
      if (checked)
            emit voiceChanged(2);
      }
void Ms::MpVoices::on_voice3Button_toggled(bool checked)
      {
      if (checked)
            emit voiceChanged(3);
      }

void Ms::MpVoices::on_voice4Button_toggled(bool checked)
      {
      if (checked)
            emit voiceChanged(4);
      }
}



