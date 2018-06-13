/********************************************************************************
** Form generated from reading UI file 'mpvoices.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MPVOICES_H
#define UI_MPVOICES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MpVoices
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *voice1Button;
    QPushButton *voice2Button;
    QPushButton *voice3Button;
    QPushButton *voice4Button;

    void setupUi(QWidget *MpVoices)
    {
        if (MpVoices->objectName().isEmpty())
            MpVoices->setObjectName(QStringLiteral("MpVoices"));
        MpVoices->resize(108, 35);
        MpVoices->setMinimumSize(QSize(95, 35));
        MpVoices->setMaximumSize(QSize(110, 35));
        horizontalLayoutWidget = new QWidget(MpVoices);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 0, 101, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        voice1Button = new QPushButton(horizontalLayoutWidget);
        voice1Button->setObjectName(QStringLiteral("voice1Button"));

        horizontalLayout->addWidget(voice1Button);

        voice2Button = new QPushButton(horizontalLayoutWidget);
        voice2Button->setObjectName(QStringLiteral("voice2Button"));

        horizontalLayout->addWidget(voice2Button);

        voice3Button = new QPushButton(horizontalLayoutWidget);
        voice3Button->setObjectName(QStringLiteral("voice3Button"));

        horizontalLayout->addWidget(voice3Button);

        voice4Button = new QPushButton(horizontalLayoutWidget);
        voice4Button->setObjectName(QStringLiteral("voice4Button"));

        horizontalLayout->addWidget(voice4Button);


        retranslateUi(MpVoices);

        QMetaObject::connectSlotsByName(MpVoices);
    } // setupUi

    void retranslateUi(QWidget *MpVoices)
    {
        MpVoices->setWindowTitle(QApplication::translate("MpVoices", "Voices", Q_NULLPTR));
        voice1Button->setText(QApplication::translate("MpVoices", "1", Q_NULLPTR));
        voice2Button->setText(QApplication::translate("MpVoices", "2", Q_NULLPTR));
        voice3Button->setText(QApplication::translate("MpVoices", "3", Q_NULLPTR));
        voice4Button->setText(QApplication::translate("MpVoices", "4", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MpVoices: public Ui_MpVoices {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MPVOICES_H
