#ifndef MPVOICES_H
#define MPVOICES_H

#include "ui_mpvoices.h"

namespace Ms {

class MpVoices : public QDialog, Ui::MpVoicesBase
{
    Q_OBJECT

public:
    explicit MpVoices(QWidget *parent = 0);
    ~MpVoices();

private slots:
    void on_voice1Button_clicked();

    void on_voice2Button_clicked();

    void on_voice3Button_clicked();

    void on_voice4Button_clicked();

signals:
    voiceChanged (int);

private:
    void setButtons(int);
    void resetButtons();
    int m_voiceSet;
};
}
#endif // MPVOICES_H
