#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <iostream>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow), animationSpeed(1), timeForFps(0), flagForFps(0), filename()
{
    QWidget::setWindowTitle("Physical model (alpha)");
    ui->setupUi(this);
    scene = new QGraphicsScene();
    scene->setSceneRect(0, 0, ui->graphicsView->width() - 3, ui->graphicsView->height() - 3);
    ui->graphicsView->setScene(scene);
    model = nullptr;
    ui->graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(timerSlot()));
}

MainWindow::~MainWindow()
{
    delete ui;
    delete scene;
    delete timer;
    delete model;
}


void MainWindow::on_horizontalSliderAnimationSpeed_valueChanged(int value)
{
    ui->spinBoxAnimationSpeed->setValue(value);
}


void MainWindow::on_horizontalSliderLineHeight_valueChanged(int value)
{
    ui->spinBoxLineHeight->setValue(value);
}

void MainWindow::on_horizontalSliderScale_valueChanged(int value)
{
    ui->doubleSpinBoxScale->setValue(value);
    if (ui->checkBox->checkState() == Qt::Checked){
        return;
    }
    if (value < 2){
        ui->spinBoxLineHeight->setValue(1);
        ui->horizontalSliderLineHeight->setValue(1);
        ui->spinBoxAnimationSpeed->setValue(60);
        ui->horizontalSliderAnimationSpeed->setValue(60);
    } else if (value < 3){
        ui->spinBoxLineHeight->setValue(2);
        ui->horizontalSliderLineHeight->setValue(2);
        ui->spinBoxAnimationSpeed->setValue(30);
        ui->horizontalSliderAnimationSpeed->setValue(30);
    }
    else if (value < 4){
        ui->spinBoxLineHeight->setValue(3);
        ui->horizontalSliderLineHeight->setValue(3);
        ui->spinBoxAnimationSpeed->setValue(5);
        ui->horizontalSliderAnimationSpeed->setValue(5);
    }
    else {
        ui->spinBoxLineHeight->setValue(3);
        ui->horizontalSliderLineHeight->setValue(3);
        ui->spinBoxAnimationSpeed->setValue(1);
        ui->horizontalSliderAnimationSpeed->setValue(1);
    }
}

void MainWindow::on_horizontalSliderTimeStep_valueChanged(int value)
{
    ui->doubleSpinBoxTimeStep->setValue(value);
}

void MainWindow::on_spinBoxAnimationSpeed_valueChanged(int arg1)
{
    ui->horizontalSliderAnimationSpeed->setValue(arg1);
}

void MainWindow::on_spinBoxLineHeight_valueChanged(int arg1)
{
    ui->horizontalSliderLineHeight->setValue(arg1);
}

void MainWindow::on_doubleSpinBoxScale_valueChanged(double arg1)
{
    ui->horizontalSliderScale->setValue(arg1);
}

void MainWindow::on_doubleSpinBoxTimeStep_valueChanged(double arg1)
{
    ui->horizontalSliderTimeStep->setValue(arg1);
}

// Total max = 1000
const int MAX_FPS = 120;
const int ITERATION_TIMEOUT = 1000 / MAX_FPS;
const int AVERAGE_OF_FPS = 15;

void MainWindow::on_ButtonStart_clicked()
{
    ui->statusbar->showMessage("Modeling...");
    scene->clear();
    GlobalSettings settings_;
//    settings_.step = ui->doubleSpinBoxTimeStep->value() / 100000000000;
    settings_.step = ui->doubleSpinBoxTimeStep->value() / 10000000;
    settings_.scale = std::pow(3, ui->doubleSpinBoxScale->value()) * 100;
    settings_.lineHeight = ui->spinBoxLineHeight->value();
    settings_.windowWidth = ui->graphicsView->width();
    settings_.windowHeight = ui->graphicsView->height();
    settings_.animationSpeed = ui->spinBoxAnimationSpeed->value();
    animationSpeed = ui->spinBoxAnimationSpeed->value();
    model = new Model(scene, ui->doubleSpinBoxSpeed->value(), -ui->doubleSpinBoxAngle->value() * M_PI / 180,
                      ui->doubleSpinBoxElectric->value(), ui->doubleSpinBoxMagnetic->value(), settings_, CHARGE * 1e19, MASS * 1e19);
    QString base = "imgs/";
    filename = base +
            QString::number(ui->doubleSpinBoxElectric->value() / (ui->doubleSpinBoxSpeed->value() * ui->doubleSpinBoxMagnetic->value())) +
            QString("f") + QString::number(ui->doubleSpinBoxAngle->value()) + QString(".png");
    timer->start(ITERATION_TIMEOUT);
}

void MainWindow::timerSlot()
{
    if (flagForFps == AVERAGE_OF_FPS){
        timeForFps = clock();
        flagForFps = 0;
    } else{
      flagForFps++;
    }
    int counter = 0;
    bool flag = true;
    while ((counter < animationSpeed) && flag){
        counter++;
        flag = model->step();
    }
    if (flagForFps == AVERAGE_OF_FPS){
        qDebug() << "Clocks" << clock() - timeForFps;

        double divBy = ITERATION_TIMEOUT / 1000. + (static_cast<double>(clock() - timeForFps)) / CLOCKS_PER_SEC;
        qDebug() << "divBy" << divBy;
        double fps;
        if (divBy == 0){
            fps = 1000;
        } else{
            fps = AVERAGE_OF_FPS / divBy;
        }
        ui->lcdNumber->display(fps);
        ui->lcdNumber->repaint();
        qDebug() << "Current FPS: " << fps;
    }
    if (!flag){
        timer->stop();
        ui->statusbar->showMessage("Modeling ended");
        ui->lcdNumber->display(0);
        saveScreenshot();

    }
}

void MainWindow::saveScreenshot() const {
    QImage image(scene->width(), scene->height(), QImage::Format_ARGB32_Premultiplied);
    QPainter painter(&image);
    scene->render(&painter);
    image.save(filename);
}

