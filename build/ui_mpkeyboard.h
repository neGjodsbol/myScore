/********************************************************************************
** Form generated from reading UI file 'mpkeyboard.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MPKEYBOARD_H
#define UI_MPKEYBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MpKeyboard
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *softKeyLayout;
    QPushButton *keyFlip;
    QPushButton *keyG;
    QPushButton *key8;
    QPushButton *keyTriplet;
    QPushButton *key2;
    QPushButton *keyF;
    QPushButton *keyLeft;
    QPushButton *key1;
    QPushButton *keyDown;
    QPushButton *keyRest;
    QPushButton *keyNatural;
    QPushButton *key16;
    QPushButton *keySharp;
    QPushButton *key4;
    QPushButton *keyDot;
    QPushButton *keyE;
    QPushButton *keySlur;
    QPushButton *keyCmd;
    QPushButton *keyB;
    QPushButton *keyD;
    QPushButton *keyFlat;
    QPushButton *keyC;
    QPushButton *key64;
    QPushButton *key32;
    QPushButton *keyShift;
    QPushButton *noteEntry;
    QPushButton *key128;
    QPushButton *keyA;
    QPushButton *keyDel;
    QPushButton *keyTie;
    QPushButton *keyIns;
    QPushButton *keyUp;
    QPushButton *keyRight;

    void setupUi(QWidget *MpKeyboard)
    {
        if (MpKeyboard->objectName().isEmpty())
            MpKeyboard->setObjectName(QStringLiteral("MpKeyboard"));
        MpKeyboard->resize(300, 95);
        MpKeyboard->setMinimumSize(QSize(0, 95));
        MpKeyboard->setMaximumSize(QSize(300, 95));
        gridLayoutWidget = new QWidget(MpKeyboard);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 0, 301, 91));
        softKeyLayout = new QGridLayout(gridLayoutWidget);
        softKeyLayout->setSpacing(6);
        softKeyLayout->setContentsMargins(11, 11, 11, 11);
        softKeyLayout->setObjectName(QStringLiteral("softKeyLayout"));
        softKeyLayout->setContentsMargins(0, 0, 0, 0);
        keyFlip = new QPushButton(gridLayoutWidget);
        keyFlip->setObjectName(QStringLiteral("keyFlip"));

        softKeyLayout->addWidget(keyFlip, 3, 5, 1, 1);

        keyG = new QPushButton(gridLayoutWidget);
        keyG->setObjectName(QStringLiteral("keyG"));

        softKeyLayout->addWidget(keyG, 1, 7, 1, 1);

        key8 = new QPushButton(gridLayoutWidget);
        key8->setObjectName(QStringLiteral("key8"));

        softKeyLayout->addWidget(key8, 2, 5, 1, 1);

        keyTriplet = new QPushButton(gridLayoutWidget);
        keyTriplet->setObjectName(QStringLiteral("keyTriplet"));

        softKeyLayout->addWidget(keyTriplet, 3, 6, 1, 1);

        key2 = new QPushButton(gridLayoutWidget);
        key2->setObjectName(QStringLiteral("key2"));

        softKeyLayout->addWidget(key2, 2, 7, 1, 1);

        keyF = new QPushButton(gridLayoutWidget);
        keyF->setObjectName(QStringLiteral("keyF"));

        softKeyLayout->addWidget(keyF, 1, 6, 1, 1);

        keyLeft = new QPushButton(gridLayoutWidget);
        keyLeft->setObjectName(QStringLiteral("keyLeft"));

        softKeyLayout->addWidget(keyLeft, 3, 7, 1, 1);

        key1 = new QPushButton(gridLayoutWidget);
        key1->setObjectName(QStringLiteral("key1"));

        softKeyLayout->addWidget(key1, 2, 8, 1, 1);

        keyDown = new QPushButton(gridLayoutWidget);
        keyDown->setObjectName(QStringLiteral("keyDown"));

        softKeyLayout->addWidget(keyDown, 3, 8, 1, 1);

        keyRest = new QPushButton(gridLayoutWidget);
        keyRest->setObjectName(QStringLiteral("keyRest"));

        softKeyLayout->addWidget(keyRest, 1, 8, 1, 1);

        keyNatural = new QPushButton(gridLayoutWidget);
        keyNatural->setObjectName(QStringLiteral("keyNatural"));

        softKeyLayout->addWidget(keyNatural, 3, 3, 1, 1);

        key16 = new QPushButton(gridLayoutWidget);
        key16->setObjectName(QStringLiteral("key16"));

        softKeyLayout->addWidget(key16, 2, 4, 1, 1);

        keySharp = new QPushButton(gridLayoutWidget);
        keySharp->setObjectName(QStringLiteral("keySharp"));

        softKeyLayout->addWidget(keySharp, 3, 1, 1, 1);

        key4 = new QPushButton(gridLayoutWidget);
        key4->setObjectName(QStringLiteral("key4"));

        softKeyLayout->addWidget(key4, 2, 6, 1, 1);

        keyDot = new QPushButton(gridLayoutWidget);
        keyDot->setObjectName(QStringLiteral("keyDot"));

        softKeyLayout->addWidget(keyDot, 2, 9, 1, 1);

        keyE = new QPushButton(gridLayoutWidget);
        keyE->setObjectName(QStringLiteral("keyE"));

        softKeyLayout->addWidget(keyE, 1, 5, 1, 1);

        keySlur = new QPushButton(gridLayoutWidget);
        keySlur->setObjectName(QStringLiteral("keySlur"));

        softKeyLayout->addWidget(keySlur, 3, 4, 1, 1);

        keyCmd = new QPushButton(gridLayoutWidget);
        keyCmd->setObjectName(QStringLiteral("keyCmd"));
        keyCmd->setCheckable(true);

        softKeyLayout->addWidget(keyCmd, 3, 0, 1, 1);

        keyB = new QPushButton(gridLayoutWidget);
        keyB->setObjectName(QStringLiteral("keyB"));

        softKeyLayout->addWidget(keyB, 1, 2, 1, 1);

        keyD = new QPushButton(gridLayoutWidget);
        keyD->setObjectName(QStringLiteral("keyD"));

        softKeyLayout->addWidget(keyD, 1, 4, 1, 1);

        keyFlat = new QPushButton(gridLayoutWidget);
        keyFlat->setObjectName(QStringLiteral("keyFlat"));

        softKeyLayout->addWidget(keyFlat, 3, 2, 1, 1);

        keyC = new QPushButton(gridLayoutWidget);
        keyC->setObjectName(QStringLiteral("keyC"));

        softKeyLayout->addWidget(keyC, 1, 3, 1, 1);

        key64 = new QPushButton(gridLayoutWidget);
        key64->setObjectName(QStringLiteral("key64"));

        softKeyLayout->addWidget(key64, 2, 2, 1, 1);

        key32 = new QPushButton(gridLayoutWidget);
        key32->setObjectName(QStringLiteral("key32"));

        softKeyLayout->addWidget(key32, 2, 3, 1, 1);

        keyShift = new QPushButton(gridLayoutWidget);
        keyShift->setObjectName(QStringLiteral("keyShift"));
        keyShift->setCheckable(true);

        softKeyLayout->addWidget(keyShift, 2, 0, 1, 1);

        noteEntry = new QPushButton(gridLayoutWidget);
        noteEntry->setObjectName(QStringLiteral("noteEntry"));
        noteEntry->setCheckable(true);

        softKeyLayout->addWidget(noteEntry, 1, 0, 1, 1);

        key128 = new QPushButton(gridLayoutWidget);
        key128->setObjectName(QStringLiteral("key128"));

        softKeyLayout->addWidget(key128, 2, 1, 1, 1);

        keyA = new QPushButton(gridLayoutWidget);
        keyA->setObjectName(QStringLiteral("keyA"));

        softKeyLayout->addWidget(keyA, 1, 1, 1, 1);

        keyDel = new QPushButton(gridLayoutWidget);
        keyDel->setObjectName(QStringLiteral("keyDel"));

        softKeyLayout->addWidget(keyDel, 2, 10, 1, 1);

        keyTie = new QPushButton(gridLayoutWidget);
        keyTie->setObjectName(QStringLiteral("keyTie"));

        softKeyLayout->addWidget(keyTie, 1, 9, 1, 1);

        keyIns = new QPushButton(gridLayoutWidget);
        keyIns->setObjectName(QStringLiteral("keyIns"));

        softKeyLayout->addWidget(keyIns, 1, 10, 1, 1);

        keyUp = new QPushButton(gridLayoutWidget);
        keyUp->setObjectName(QStringLiteral("keyUp"));

        softKeyLayout->addWidget(keyUp, 3, 9, 1, 1);

        keyRight = new QPushButton(gridLayoutWidget);
        keyRight->setObjectName(QStringLiteral("keyRight"));

        softKeyLayout->addWidget(keyRight, 3, 10, 1, 1);


        retranslateUi(MpKeyboard);

        QMetaObject::connectSlotsByName(MpKeyboard);
    } // setupUi

    void retranslateUi(QWidget *MpKeyboard)
    {
        MpKeyboard->setWindowTitle(QApplication::translate("MpKeyboard", "SoftKeyboard", Q_NULLPTR));
        keyFlip->setText(QApplication::translate("MpKeyboard", "x", Q_NULLPTR));
        keyG->setText(QApplication::translate("MpKeyboard", "G", Q_NULLPTR));
        key8->setText(QApplication::translate("MpKeyboard", "5", Q_NULLPTR));
        keyTriplet->setText(QApplication::translate("MpKeyboard", "(3", Q_NULLPTR));
        key2->setText(QApplication::translate("MpKeyboard", "7", Q_NULLPTR));
        keyF->setText(QApplication::translate("MpKeyboard", "F", Q_NULLPTR));
        keyLeft->setText(QApplication::translate("MpKeyboard", "<", Q_NULLPTR));
        key1->setText(QApplication::translate("MpKeyboard", "8", Q_NULLPTR));
        keyDown->setText(QApplication::translate("MpKeyboard", "D", Q_NULLPTR));
        keyRest->setText(QApplication::translate("MpKeyboard", "0", Q_NULLPTR));
        keyNatural->setText(QApplication::translate("MpKeyboard", "na", Q_NULLPTR));
        key16->setText(QApplication::translate("MpKeyboard", "4", Q_NULLPTR));
        keySharp->setText(QApplication::translate("MpKeyboard", "sh", Q_NULLPTR));
        key4->setText(QApplication::translate("MpKeyboard", "6", Q_NULLPTR));
        keyDot->setText(QApplication::translate("MpKeyboard", ".", Q_NULLPTR));
        keyE->setText(QApplication::translate("MpKeyboard", "E", Q_NULLPTR));
        keySlur->setText(QApplication::translate("MpKeyboard", "(", Q_NULLPTR));
        keyCmd->setText(QApplication::translate("MpKeyboard", "C", Q_NULLPTR));
        keyB->setText(QApplication::translate("MpKeyboard", "B", Q_NULLPTR));
        keyD->setText(QApplication::translate("MpKeyboard", "D", Q_NULLPTR));
        keyFlat->setText(QApplication::translate("MpKeyboard", "fl", Q_NULLPTR));
        keyC->setText(QApplication::translate("MpKeyboard", "C", Q_NULLPTR));
        key64->setText(QApplication::translate("MpKeyboard", "2", Q_NULLPTR));
        key32->setText(QApplication::translate("MpKeyboard", "3", Q_NULLPTR));
        keyShift->setText(QApplication::translate("MpKeyboard", "S", Q_NULLPTR));
        noteEntry->setText(QApplication::translate("MpKeyboard", "N", Q_NULLPTR));
        key128->setText(QApplication::translate("MpKeyboard", "1", Q_NULLPTR));
        keyA->setText(QApplication::translate("MpKeyboard", "A", Q_NULLPTR));
        keyDel->setText(QApplication::translate("MpKeyboard", "D", Q_NULLPTR));
        keyTie->setText(QApplication::translate("MpKeyboard", "+", Q_NULLPTR));
        keyIns->setText(QApplication::translate("MpKeyboard", "I", Q_NULLPTR));
        keyUp->setText(QApplication::translate("MpKeyboard", "U", Q_NULLPTR));
        keyRight->setText(QApplication::translate("MpKeyboard", ">", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MpKeyboard: public Ui_MpKeyboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MPKEYBOARD_H
