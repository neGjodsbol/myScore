#include "mpvoices.h"
#include "ui_mpvoices.h"
#include "musescore.h"
#include <QActionGroup>

namespace Ms {

MpVoices::MpVoices(QWidget* ) :
                   QDialog()
      {
//      this->setWindowFlag(Qt::FramelessWindowHint);
      this->setModal(false);

      setupUi(this);
      }

MpVoices::~MpVoices()
{
}


void MpVoices::on_voice1Button_clicked()
      {
      getAction("voice-1")->triggered();
      }

void MpVoices::on_voice2Button_clicked()
      {
      getAction("voice-2")->triggered();
      }

void MpVoices::on_voice3Button_clicked()
      {
      getAction("voice-3")->triggered();
      }

void MpVoices::on_voice4Button_clicked()
      {
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
void MpVoices::on_voice2Button_toggled(bool checked)
      {
      if (checked)
            emit voiceChanged(2);
      }
void MpVoices::on_voice3Button_toggled(bool checked)
      {
      if (checked)
            emit voiceChanged(3);
      }

void MpVoices::on_voice4Button_toggled(bool checked)
      {
      if (checked)
            emit voiceChanged(4);
      }
}



