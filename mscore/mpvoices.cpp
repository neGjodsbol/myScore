#include "mpvoices.h"
#include "ui_mpvoices.h"
#include "musescore.h"

namespace Ms {

MpVoices::MpVoices(QWidget *parent) :
                   QDialog(parent)
      {
      this->setWindowFlag(Qt::Tool);

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
        voice1Button->setDisabled(true);
        voice1Button->setFlat(true);
        break;
    case 2:
        voice2Button->setDisabled(true);
        voice2Button->setFlat(true);
        break;
    case 3:
        voice3Button->setDisabled(true);
        voice3Button->setFlat(true);
        break;
    case 4:
        voice4Button->setDisabled(true);
        voice4Button->setFlat(true);
        break;
    default:
        break;
    }
}

void MpVoices::resetButtons()
{
    voice1Button->setDisabled(false);
    voice1Button->setFlat(false);
    voice2Button->setDisabled(false);
    voice2Button->setFlat(false);
    voice3Button->setDisabled(false);
    voice3Button->setFlat(false);
    voice4Button->setDisabled(false);
    voice4Button->setFlat(false);
}

void MpVoices::on_voice1Button_clicked()
{
    resetButtons();
    setButtons(1);
    m_voiceSet = 1;
//    emit voiceChanged(m_voiceSet);
    getAction("voice-1")->triggered();
}

void MpVoices::on_voice2Button_clicked()
{
    resetButtons();
    setButtons(2);
    m_voiceSet = 2;
//    emit voiceChanged(m_voiceSet);
    getAction("voice-2")->triggered();
}

void MpVoices::on_voice3Button_clicked()
{
    resetButtons();
    setButtons(3);
    m_voiceSet = 3;
//    emit voiceChanged(m_voiceSet);
    getAction("voice-3")->triggered();
}

void MpVoices::on_voice4Button_clicked()
{
    resetButtons();
    setButtons(4);
    m_voiceSet = 4;
//    emit voiceChanged(m_voiceSet);
    getAction("voice-4")->triggered();
}
}
