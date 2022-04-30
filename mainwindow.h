#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QTimer>
#include <QTime>
#include <QGraphicsTextItem>
#include "model.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT


public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    // set relationship between sliders and spinboxes
    void on_horizontalSliderAnimationSpeed_valueChanged(int value);

    void on_horizontalSliderLineHeight_valueChanged(int value);

    void on_horizontalSliderScale_valueChanged(int value);

    void on_horizontalSliderTimeStep_valueChanged(int value);

    void on_spinBoxAnimationSpeed_valueChanged(int arg1);

    void on_spinBoxLineHeight_valueChanged(int arg1);

    void on_doubleSpinBoxScale_valueChanged(double arg1);

    void on_doubleSpinBoxTimeStep_valueChanged(double arg1);

    // processing of cutton click
    void on_ButtonStart_clicked();

    // time counter for animation
    void timerSlot();

private:
    Ui::MainWindow *ui;
    QGraphicsScene *scene;
    QTimer *timer;
    Model* model;
    int animationSpeed;         ///< animation speed (number of frames rendered in the same time)
    time_t timeForFps;
    int flagForFps;
    QString filename;           ///< for save files
    QString showedSets;

/// save screenshot of trajectory
void saveScreenshot() const;

};
#endif // MAINWINDOW_H
