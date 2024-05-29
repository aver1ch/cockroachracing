#ifndef UI_RACEWINDOW_H
#define UI_RACEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RaceWindow
{
public:
    QFrame *frame;

    void setupUi(QWidget *RaceWindow)
    {
        if (RaceWindow->objectName().isEmpty())
            RaceWindow->setObjectName("RaceWindow");
        RaceWindow->resize(800, 600);
        frame = new QFrame(RaceWindow);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(50, 50, 700, 500));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);

        retranslateUi(RaceWindow);

        QMetaObject::connectSlotsByName(RaceWindow);
    } // setupUi

    void retranslateUi(QWidget *RaceWindow)
    {
        RaceWindow->setWindowTitle(QCoreApplication::translate("RaceWindow", "RaceWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RaceWindow: public Ui_RaceWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RACEWINDOW_H
