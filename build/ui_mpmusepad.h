/********************************************************************************
** Form generated from reading UI file 'mpmusepad.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MPMUSEPAD_H
#define UI_MPMUSEPAD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MusePad
{
public:
    QWidget *centralWidget;
    QTextEdit *scoreEdit;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MusePad)
    {
        if (MusePad->objectName().isEmpty())
            MusePad->setObjectName(QStringLiteral("MusePad"));
        MusePad->resize(400, 300);
        centralWidget = new QWidget(MusePad);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        scoreEdit = new QTextEdit(centralWidget);
        scoreEdit->setObjectName(QStringLiteral("scoreEdit"));
        scoreEdit->setGeometry(QRect(40, 30, 231, 211));
        MusePad->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MusePad);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MusePad->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MusePad);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MusePad->setStatusBar(statusBar);

        retranslateUi(MusePad);

        QMetaObject::connectSlotsByName(MusePad);
    } // setupUi

    void retranslateUi(QMainWindow *MusePad)
    {
        MusePad->setWindowTitle(QApplication::translate("MusePad", "MusePad", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MusePad: public Ui_MusePad {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MPMUSEPAD_H
