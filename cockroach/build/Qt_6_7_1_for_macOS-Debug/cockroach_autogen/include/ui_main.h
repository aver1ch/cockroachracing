/********************************************************************************
** Form generated from reading UI file 'main.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_H
#define UI_MAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Main
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QComboBox *comboBox;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QComboBox *comboBox_2;
    QPushButton *pushButton_3;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit_3;
    QLabel *label_5;
    QPushButton *pushButton_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Main)
    {
        if (Main->objectName().isEmpty())
            Main->setObjectName("Main");
        Main->resize(800, 600);
        centralwidget = new QWidget(Main);
        centralwidget->setObjectName("centralwidget");
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(40, 50, 731, 451));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        comboBox = new QComboBox(frame);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(10, 270, 391, 81));
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(400, 240, 51, 16));
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(400, 290, 261, 41));
        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 240, 58, 16));
        pushButton = new QPushButton(frame);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(70, 350, 191, 51));
        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(30, 150, 351, 71));
        comboBox_2 = new QComboBox(frame);
        comboBox_2->setObjectName("comboBox_2");
        comboBox_2->setGeometry(QRect(30, 20, 351, 61));
        pushButton_3 = new QPushButton(frame);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(410, 150, 281, 41));
        lineEdit_2 = new QLineEdit(frame);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(440, 50, 201, 31));
        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(450, 30, 51, 16));
        label_4 = new QLabel(frame);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(440, 90, 51, 16));
        lineEdit_3 = new QLineEdit(frame);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(440, 110, 201, 31));
        label_5 = new QLabel(frame);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(40, 80, 381, 16));
        pushButton_4 = new QPushButton(frame);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(420, 350, 201, 51));
        Main->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Main);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 24));
        Main->setMenuBar(menubar);
        statusbar = new QStatusBar(Main);
        statusbar->setObjectName("statusbar");
        Main->setStatusBar(statusbar);

        retranslateUi(Main);

        QMetaObject::connectSlotsByName(Main);
    } // setupUi

    void retranslateUi(QMainWindow *Main)
    {
        Main->setWindowTitle(QCoreApplication::translate("Main", "Main", nullptr));
        label->setText(QCoreApplication::translate("Main", "\320\241\321\202\320\260\320\262\320\272\320\260", nullptr));
        label_2->setText(QCoreApplication::translate("Main", "\320\242\320\260\321\200\320\260\320\272\320\260\320\275", nullptr));
        pushButton->setText(QCoreApplication::translate("Main", "\320\237\320\236\320\241\320\242\320\220\320\222\320\230\320\242\320\254!!!!!", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Main", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\270\320\263\321\200\320\276\320\272\320\260", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Main", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\270\320\263\321\200\320\276\320\272\320\260", nullptr));
        label_3->setText(QCoreApplication::translate("Main", "\320\230\320\274\321\217", nullptr));
        label_4->setText(QCoreApplication::translate("Main", "\320\224\320\265\320\275\321\214\320\263\320\270", nullptr));
        label_5->setText(QCoreApplication::translate("Main", "\320\224\320\265\320\275\321\214\320\263\320\270 \320\262\321\213\320\261\321\200\320\260\320\275\320\275\320\276\320\263\320\276 \320\270\320\263\321\200\320\276\320\272\320\260: 0", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Main", "\320\235\320\260\321\207\320\260\321\202\321\214 \320\270\320\263\321\200\321\203", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Main: public Ui_Main {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_H
