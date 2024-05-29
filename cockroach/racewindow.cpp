#include "racewindow.h"
#include "ui_racewindow.h"
#include <QRandomGenerator>
#include <QMessageBox>
#include <QPainter>

RaceWindow::RaceWindow(std::vector<Cockroach>& cockroaches, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RaceWindow),
    cockroaches(cockroaches),
    positions(cockroaches.size(), 0)
{
    ui->setupUi(this);
    startRace();
}

RaceWindow::~RaceWindow()
{
    delete ui;
}

void RaceWindow::startRace()
{
    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &RaceWindow::updateRace);
    timer->start(100);
}

void RaceWindow::updateRace()
{
    bool raceFinished = false;
    int finishLine = ui->frame->width() - 50; // Финишная черта

    for (int i = 0; i < cockroaches.size(); ++i) {
        positions[i] += getRandomSpeed();
        if (positions[i] >= finishLine) {
            raceFinished = true;
            timer->stop();
            QString winnerName = QString::fromStdString(cockroaches[i].getName());
            QMessageBox::information(this, "Гонка завершена", "Победитель: " + winnerName);
            break;
        }
    }

    update();
}

void RaceWindow::paintEvent(QPaintEvent *event)
{
    QWidget::paintEvent(event);
    QPainter painter(this);

    for (int i = 0; i < cockroaches.size(); ++i) {
        painter.drawText(positions[i], 50 + i * 30, QString::fromStdString(cockroaches[i].getName()));
    }
}

int RaceWindow::getRandomSpeed()
{
    return QRandomGenerator::global()->bounded(1, 10);
}
