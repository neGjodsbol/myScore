/********************************************************************************
** Form generated from reading UI file 'mppalettebox.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MPPALETTEBOX_H
#define UI_MPPALETTEBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MpPaletteBox
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;

    void setupUi(QWidget *MpPaletteBox)
    {
        if (MpPaletteBox->objectName().isEmpty())
            MpPaletteBox->setObjectName(QStringLiteral("MpPaletteBox"));
        MpPaletteBox->resize(203, 308);
        gridLayoutWidget = new QWidget(MpPaletteBox);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(-1, 0, 221, 311));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);

        retranslateUi(MpPaletteBox);

        QMetaObject::connectSlotsByName(MpPaletteBox);
    } // setupUi

    void retranslateUi(QWidget *MpPaletteBox)
    {
        MpPaletteBox->setWindowTitle(QApplication::translate("MpPaletteBox", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MpPaletteBox: public Ui_MpPaletteBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MPPALETTEBOX_H
