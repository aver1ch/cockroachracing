#ifndef RACEWINDOW_H
#define RACEWINDOW_H

#include <QWidget>
#include <QTimer>
#include <vector>
#include "cockroach.h"

namespace Ui {
class RaceWindow;
}

class RaceWindow : public QWidget
{
    Q_OBJECT

public:
    explicit RaceWindow(std::vector<Cockroach>& cockroaches, QWidget *parent = nullptr);
    ~RaceWindow();

private slots:
    void updateRace();

private:
    Ui::RaceWindow *ui;
    std::vector<Cockroach> cockroaches;
    std::vector
        <int> positions;
    QTimer *timer;
    void startRace();
    void paintEvent(QPaintEvent *event);
    int getRandomSpeed();
};
#endif // RACEWINDOW_H
