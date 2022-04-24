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
    void on_horizontalSliderAnimationSpeed_valueChanged(int value);

    void on_horizontalSliderLineHeight_valueChanged(int value);

    void on_horizontalSliderScale_valueChanged(int value);

    void on_horizontalSliderTimeStep_valueChanged(int value);

    void on_ButtonStart_clicked();

    void timerSlot();

    void on_spinBoxAnimationSpeed_valueChanged(int arg1);

    void on_spinBoxLineHeight_valueChanged(int arg1);

    void on_doubleSpinBoxScale_valueChanged(double arg1);

    void on_doubleSpinBoxTimeStep_valueChanged(double arg1);

private:
    Ui::MainWindow *ui;
    QGraphicsScene *scene;
    QTimer *timer;
    Model* model;
    int animationSpeed;
    time_t timeForFps;
    int flagForFps;
    QString filename;
    QString showedSets;

void saveScreenshot() const;

};
#endif // MAINWINDOW_H
