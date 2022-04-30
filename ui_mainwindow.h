/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGraphicsView *graphicsView;
    QLabel *labelGlobal;
    QLabel *labelModel;
    QFrame *line;
    QPushButton *ButtonStart;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QSpinBox *spinBoxAnimationSpeed;
    QSpinBox *spinBoxLineHeight;
    QDoubleSpinBox *doubleSpinBoxScale;
    QDoubleSpinBox *doubleSpinBoxTimeStep;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QLabel *labelAnimationSpeed;
    QSlider *horizontalSliderAnimationSpeed;
    QLabel *labelLineHeight;
    QSlider *horizontalSliderLineHeight;
    QLabel *labelScale;
    QSlider *horizontalSliderScale;
    QLabel *labelTimeStep;
    QSlider *horizontalSliderTimeStep;
    QCheckBox *checkBox;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_3;
    QLabel *labelSpeed;
    QDoubleSpinBox *doubleSpinBoxSpeed;
    QLabel *labelAngle;
    QDoubleSpinBox *doubleSpinBoxAngle;
    QLabel *labelElectric;
    QDoubleSpinBox *doubleSpinBoxElectric;
    QLabel *labelMagnetic;
    QDoubleSpinBox *doubleSpinBoxMagnetic;
    QLCDNumber *lcdNumber;
    QStatusBar *statusbar;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1218, 802);
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(10);
        MainWindow->setFont(font);
        MainWindow->setWindowOpacity(3.000000000000000);
        MainWindow->setToolTipDuration(-1);
        MainWindow->setLayoutDirection(Qt::LeftToRight);
        MainWindow->setAutoFillBackground(true);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        MainWindow->setInputMethodHints(Qt::ImhDigitsOnly|Qt::ImhHiddenText);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(30, 70, 781, 681));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(graphicsView->sizePolicy().hasHeightForWidth());
        graphicsView->setSizePolicy(sizePolicy1);
        labelGlobal = new QLabel(centralwidget);
        labelGlobal->setObjectName(QString::fromUtf8("labelGlobal"));
        labelGlobal->setGeometry(QRect(860, 0, 281, 51));
        QFont font1;
        font1.setPointSize(20);
        labelGlobal->setFont(font1);
        labelModel = new QLabel(centralwidget);
        labelModel->setObjectName(QString::fromUtf8("labelModel"));
        labelModel->setGeometry(QRect(890, 350, 281, 51));
        labelModel->setFont(font1);
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(820, 340, 361, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        ButtonStart = new QPushButton(centralwidget);
        ButtonStart->setObjectName(QString::fromUtf8("ButtonStart"));
        ButtonStart->setGeometry(QRect(920, 660, 171, 71));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(ButtonStart->sizePolicy().hasHeightForWidth());
        ButtonStart->setSizePolicy(sizePolicy2);
        ButtonStart->setStyleSheet(QString::fromUtf8(""));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(830, 60, 75, 271));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        spinBoxAnimationSpeed = new QSpinBox(layoutWidget);
        spinBoxAnimationSpeed->setObjectName(QString::fromUtf8("spinBoxAnimationSpeed"));
        spinBoxAnimationSpeed->setAlignment(Qt::AlignCenter);
        spinBoxAnimationSpeed->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBoxAnimationSpeed->setAccelerated(true);
        spinBoxAnimationSpeed->setMinimum(1);
        spinBoxAnimationSpeed->setMaximum(100);
        spinBoxAnimationSpeed->setValue(50);

        verticalLayout_2->addWidget(spinBoxAnimationSpeed);

        spinBoxLineHeight = new QSpinBox(layoutWidget);
        spinBoxLineHeight->setObjectName(QString::fromUtf8("spinBoxLineHeight"));
        spinBoxLineHeight->setAlignment(Qt::AlignCenter);
        spinBoxLineHeight->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBoxLineHeight->setMinimum(1);
        spinBoxLineHeight->setMaximum(7);
        spinBoxLineHeight->setValue(2);

        verticalLayout_2->addWidget(spinBoxLineHeight);

        doubleSpinBoxScale = new QDoubleSpinBox(layoutWidget);
        doubleSpinBoxScale->setObjectName(QString::fromUtf8("doubleSpinBoxScale"));
        doubleSpinBoxScale->setAlignment(Qt::AlignCenter);
        doubleSpinBoxScale->setButtonSymbols(QAbstractSpinBox::NoButtons);
        doubleSpinBoxScale->setAccelerated(true);
        doubleSpinBoxScale->setCorrectionMode(QAbstractSpinBox::CorrectToNearestValue);
        doubleSpinBoxScale->setDecimals(1);
        doubleSpinBoxScale->setMinimum(1.000000000000000);
        doubleSpinBoxScale->setMaximum(4.000000000000000);
        doubleSpinBoxScale->setSingleStep(0.200000000000000);
        doubleSpinBoxScale->setValue(2.000000000000000);

        verticalLayout_2->addWidget(doubleSpinBoxScale);

        doubleSpinBoxTimeStep = new QDoubleSpinBox(layoutWidget);
        doubleSpinBoxTimeStep->setObjectName(QString::fromUtf8("doubleSpinBoxTimeStep"));
        doubleSpinBoxTimeStep->setAlignment(Qt::AlignCenter);
        doubleSpinBoxTimeStep->setButtonSymbols(QAbstractSpinBox::NoButtons);
        doubleSpinBoxTimeStep->setCorrectionMode(QAbstractSpinBox::CorrectToNearestValue);
        doubleSpinBoxTimeStep->setMinimum(1.000000000000000);
        doubleSpinBoxTimeStep->setMaximum(100.000000000000000);
        doubleSpinBoxTimeStep->setValue(1.000000000000000);

        verticalLayout_2->addWidget(doubleSpinBoxTimeStep);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(910, 65, 247, 268));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        labelAnimationSpeed = new QLabel(layoutWidget1);
        labelAnimationSpeed->setObjectName(QString::fromUtf8("labelAnimationSpeed"));
        labelAnimationSpeed->setFont(font);
        labelAnimationSpeed->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(labelAnimationSpeed);

        horizontalSliderAnimationSpeed = new QSlider(layoutWidget1);
        horizontalSliderAnimationSpeed->setObjectName(QString::fromUtf8("horizontalSliderAnimationSpeed"));
        horizontalSliderAnimationSpeed->setInputMethodHints(Qt::ImhDigitsOnly|Qt::ImhPreferNumbers);
        horizontalSliderAnimationSpeed->setMinimum(1);
        horizontalSliderAnimationSpeed->setMaximum(100);
        horizontalSliderAnimationSpeed->setValue(50);
        horizontalSliderAnimationSpeed->setOrientation(Qt::Horizontal);
        horizontalSliderAnimationSpeed->setInvertedAppearance(false);
        horizontalSliderAnimationSpeed->setInvertedControls(false);
        horizontalSliderAnimationSpeed->setTickPosition(QSlider::NoTicks);
        horizontalSliderAnimationSpeed->setTickInterval(0);

        verticalLayout->addWidget(horizontalSliderAnimationSpeed);

        labelLineHeight = new QLabel(layoutWidget1);
        labelLineHeight->setObjectName(QString::fromUtf8("labelLineHeight"));
        labelLineHeight->setFont(font);
        labelLineHeight->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(labelLineHeight);

        horizontalSliderLineHeight = new QSlider(layoutWidget1);
        horizontalSliderLineHeight->setObjectName(QString::fromUtf8("horizontalSliderLineHeight"));
        horizontalSliderLineHeight->setMinimum(1);
        horizontalSliderLineHeight->setMaximum(7);
        horizontalSliderLineHeight->setValue(2);
        horizontalSliderLineHeight->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(horizontalSliderLineHeight);

        labelScale = new QLabel(layoutWidget1);
        labelScale->setObjectName(QString::fromUtf8("labelScale"));
        labelScale->setFont(font);
        labelScale->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(labelScale);

        horizontalSliderScale = new QSlider(layoutWidget1);
        horizontalSliderScale->setObjectName(QString::fromUtf8("horizontalSliderScale"));
        horizontalSliderScale->setLayoutDirection(Qt::LeftToRight);
        horizontalSliderScale->setMinimum(1);
        horizontalSliderScale->setMaximum(4);
        horizontalSliderScale->setSingleStep(1);
        horizontalSliderScale->setPageStep(1);
        horizontalSliderScale->setValue(2);
        horizontalSliderScale->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(horizontalSliderScale);

        labelTimeStep = new QLabel(layoutWidget1);
        labelTimeStep->setObjectName(QString::fromUtf8("labelTimeStep"));
        labelTimeStep->setFont(font);
        labelTimeStep->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(labelTimeStep);

        horizontalSliderTimeStep = new QSlider(layoutWidget1);
        horizontalSliderTimeStep->setObjectName(QString::fromUtf8("horizontalSliderTimeStep"));
        horizontalSliderTimeStep->setMinimum(1);
        horizontalSliderTimeStep->setMaximum(100);
        horizontalSliderTimeStep->setPageStep(1);
        horizontalSliderTimeStep->setValue(1);
        horizontalSliderTimeStep->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(horizontalSliderTimeStep);

        checkBox = new QCheckBox(layoutWidget1);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        QFont font2;
        font2.setPointSize(12);
        checkBox->setFont(font2);

        verticalLayout->addWidget(checkBox);

        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(840, 400, 331, 251));
        verticalLayout_3 = new QVBoxLayout(layoutWidget2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        labelSpeed = new QLabel(layoutWidget2);
        labelSpeed->setObjectName(QString::fromUtf8("labelSpeed"));
        labelSpeed->setFont(font);
        labelSpeed->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(labelSpeed);

        doubleSpinBoxSpeed = new QDoubleSpinBox(layoutWidget2);
        doubleSpinBoxSpeed->setObjectName(QString::fromUtf8("doubleSpinBoxSpeed"));
        doubleSpinBoxSpeed->setFont(font);
        doubleSpinBoxSpeed->setWrapping(false);
        doubleSpinBoxSpeed->setFrame(true);
        doubleSpinBoxSpeed->setButtonSymbols(QAbstractSpinBox::NoButtons);
        doubleSpinBoxSpeed->setAccelerated(true);
        doubleSpinBoxSpeed->setMaximum(10000.000000000000000);
        doubleSpinBoxSpeed->setSingleStep(9.000000000000000);
        doubleSpinBoxSpeed->setValue(1000.000000000000000);

        verticalLayout_3->addWidget(doubleSpinBoxSpeed);

        labelAngle = new QLabel(layoutWidget2);
        labelAngle->setObjectName(QString::fromUtf8("labelAngle"));
        labelAngle->setFont(font);
        labelAngle->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(labelAngle);

        doubleSpinBoxAngle = new QDoubleSpinBox(layoutWidget2);
        doubleSpinBoxAngle->setObjectName(QString::fromUtf8("doubleSpinBoxAngle"));
        doubleSpinBoxAngle->setFont(font);
        doubleSpinBoxAngle->setButtonSymbols(QAbstractSpinBox::NoButtons);
        doubleSpinBoxAngle->setAccelerated(true);
        doubleSpinBoxAngle->setMinimum(-90.000000000000000);
        doubleSpinBoxAngle->setMaximum(90.000000000000000);
        doubleSpinBoxAngle->setSingleStep(0.100000000000000);

        verticalLayout_3->addWidget(doubleSpinBoxAngle);

        labelElectric = new QLabel(layoutWidget2);
        labelElectric->setObjectName(QString::fromUtf8("labelElectric"));
        labelElectric->setFont(font);
        labelElectric->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(labelElectric);

        doubleSpinBoxElectric = new QDoubleSpinBox(layoutWidget2);
        doubleSpinBoxElectric->setObjectName(QString::fromUtf8("doubleSpinBoxElectric"));
        doubleSpinBoxElectric->setFont(font);
        doubleSpinBoxElectric->setButtonSymbols(QAbstractSpinBox::NoButtons);
        doubleSpinBoxElectric->setAccelerated(true);
        doubleSpinBoxElectric->setMaximum(100000.000000000000000);
        doubleSpinBoxElectric->setSingleStep(10.000000000000000);
        doubleSpinBoxElectric->setValue(1000.000000000000000);

        verticalLayout_3->addWidget(doubleSpinBoxElectric);

        labelMagnetic = new QLabel(layoutWidget2);
        labelMagnetic->setObjectName(QString::fromUtf8("labelMagnetic"));
        labelMagnetic->setFont(font);
        labelMagnetic->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(labelMagnetic);

        doubleSpinBoxMagnetic = new QDoubleSpinBox(layoutWidget2);
        doubleSpinBoxMagnetic->setObjectName(QString::fromUtf8("doubleSpinBoxMagnetic"));
        doubleSpinBoxMagnetic->setFont(font);
        doubleSpinBoxMagnetic->setButtonSymbols(QAbstractSpinBox::NoButtons);
        doubleSpinBoxMagnetic->setAccelerated(true);
        doubleSpinBoxMagnetic->setMaximum(100.000000000000000);
        doubleSpinBoxMagnetic->setValue(4.000000000000000);

        verticalLayout_3->addWidget(doubleSpinBoxMagnetic);

        lcdNumber = new QLCDNumber(centralwidget);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setGeometry(QRect(30, 10, 111, 41));
        lcdNumber->setFrameShape(QFrame::Box);
        lcdNumber->setFrameShadow(QFrame::Raised);
        lcdNumber->setSmallDecimalPoint(false);
        lcdNumber->setDigitCount(3);
        lcdNumber->setSegmentStyle(QLCDNumber::Flat);
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1218, 26));
        MainWindow->setMenuBar(menubar);
        QWidget::setTabOrder(horizontalSliderScale, horizontalSliderTimeStep);
        QWidget::setTabOrder(horizontalSliderTimeStep, checkBox);
        QWidget::setTabOrder(checkBox, graphicsView);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Physical Model (beta)", nullptr));
#if QT_CONFIG(statustip)
        MainWindow->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        labelGlobal->setText(QCoreApplication::translate("MainWindow", "GLOBAL SETTINGS", nullptr));
        labelModel->setText(QCoreApplication::translate("MainWindow", "MODEl SETTINGS", nullptr));
        ButtonStart->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        labelAnimationSpeed->setText(QCoreApplication::translate("MainWindow", "Animation Speed", nullptr));
        labelLineHeight->setText(QCoreApplication::translate("MainWindow", "Line height", nullptr));
        labelScale->setText(QCoreApplication::translate("MainWindow", "Scale", nullptr));
        labelTimeStep->setText(QCoreApplication::translate("MainWindow", "Time step (microsec)", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "ignore ratio (dangerous)", nullptr));
        labelSpeed->setText(QCoreApplication::translate("MainWindow", "Speed", nullptr));
        labelAngle->setText(QCoreApplication::translate("MainWindow", "Angle (degrees)", nullptr));
        labelElectric->setText(QCoreApplication::translate("MainWindow", " Electric field strange (E)", nullptr));
        labelMagnetic->setText(QCoreApplication::translate("MainWindow", "Magnetic induction (B)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
