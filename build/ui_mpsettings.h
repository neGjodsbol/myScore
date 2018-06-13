/********************************************************************************
** Form generated from reading UI file 'mpsettings.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MPSETTINGS_H
#define UI_MPSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MpSettings
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *noteEntryLayout;
    QRadioButton *singleNoteButton;
    QRadioButton *rePitchButton;
    QRadioButton *reRythmButton;
    QFrame *line;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *cPitchButton;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *helpButton;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *instrumentsButton;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *scoreInfoButton;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_5;
    QComboBox *scrollTypeButton;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_6;
    QFrame *line_2;

    void setupUi(QWidget *MpSettings)
    {
        if (MpSettings->objectName().isEmpty())
            MpSettings->setObjectName(QStringLiteral("MpSettings"));
        MpSettings->resize(88, 232);
        gridLayoutWidget = new QWidget(MpSettings);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 0, 81, 231));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        noteEntryLayout = new QVBoxLayout();
        noteEntryLayout->setObjectName(QStringLiteral("noteEntryLayout"));
        singleNoteButton = new QRadioButton(gridLayoutWidget);
        singleNoteButton->setObjectName(QStringLiteral("singleNoteButton"));

        noteEntryLayout->addWidget(singleNoteButton);

        rePitchButton = new QRadioButton(gridLayoutWidget);
        rePitchButton->setObjectName(QStringLiteral("rePitchButton"));

        noteEntryLayout->addWidget(rePitchButton);

        reRythmButton = new QRadioButton(gridLayoutWidget);
        reRythmButton->setObjectName(QStringLiteral("reRythmButton"));

        noteEntryLayout->addWidget(reRythmButton);

        line = new QFrame(gridLayoutWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        noteEntryLayout->addWidget(line);


        gridLayout->addLayout(noteEntryLayout, 2, 1, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        cPitchButton = new QPushButton(gridLayoutWidget);
        cPitchButton->setObjectName(QStringLiteral("cPitchButton"));
        cPitchButton->setCheckable(true);

        horizontalLayout_4->addWidget(cPitchButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        gridLayout->addLayout(horizontalLayout_4, 3, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        helpButton = new QPushButton(gridLayoutWidget);
        helpButton->setObjectName(QStringLiteral("helpButton"));
        helpButton->setFlat(true);

        horizontalLayout->addWidget(helpButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout, 8, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        instrumentsButton = new QPushButton(gridLayoutWidget);
        instrumentsButton->setObjectName(QStringLiteral("instrumentsButton"));
        instrumentsButton->setFlat(true);

        horizontalLayout_3->addWidget(instrumentsButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout_3, 6, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        scoreInfoButton = new QPushButton(gridLayoutWidget);
        scoreInfoButton->setObjectName(QStringLiteral("scoreInfoButton"));
        scoreInfoButton->setFlat(true);

        horizontalLayout_2->addWidget(scoreInfoButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        gridLayout->addLayout(horizontalLayout_2, 7, 1, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        scrollTypeButton = new QComboBox(gridLayoutWidget);
        scrollTypeButton->setObjectName(QStringLiteral("scrollTypeButton"));
        scrollTypeButton->setEnabled(true);

        horizontalLayout_5->addWidget(scrollTypeButton);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);


        gridLayout->addLayout(horizontalLayout_5, 4, 1, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        line_2 = new QFrame(gridLayoutWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout_6->addWidget(line_2);


        gridLayout->addLayout(horizontalLayout_6, 5, 1, 1, 1);


        retranslateUi(MpSettings);

        QMetaObject::connectSlotsByName(MpSettings);
    } // setupUi

    void retranslateUi(QWidget *MpSettings)
    {
        MpSettings->setWindowTitle(QApplication::translate("MpSettings", "Form", Q_NULLPTR));
        singleNoteButton->setText(QApplication::translate("MpSettings", "Single Note", Q_NULLPTR));
        rePitchButton->setText(QApplication::translate("MpSettings", "Re-Pitch", Q_NULLPTR));
        reRythmButton->setText(QApplication::translate("MpSettings", "Re-Rythm", Q_NULLPTR));
        cPitchButton->setText(QApplication::translate("MpSettings", "C-pitch", Q_NULLPTR));
        helpButton->setText(QApplication::translate("MpSettings", "Help", Q_NULLPTR));
        instrumentsButton->setText(QApplication::translate("MpSettings", "Instruments", Q_NULLPTR));
        scoreInfoButton->setText(QApplication::translate("MpSettings", "Score Info", Q_NULLPTR));
        scrollTypeButton->clear();
        scrollTypeButton->insertItems(0, QStringList()
         << QApplication::translate("MpSettings", "Page View", Q_NULLPTR)
         << QApplication::translate("MpSettings", "Horizontal", Q_NULLPTR)
         << QApplication::translate("MpSettings", "Vertical", Q_NULLPTR)
        );
    } // retranslateUi

};

namespace Ui {
    class MpSettings: public Ui_MpSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MPSETTINGS_H
