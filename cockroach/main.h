#ifndef MAIN_H
#define MAIN_H

#include <QMainWindow>
#include <vector>
#include "cockroach.h"
#include "ui_main.h"
#include "gamer.h"

namespace Ui
{
    class MainWindow;
}


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_addPlayerButton_clicked();
    void on_removePlayerButton_clicked();
    void on_placeBetButton_clicked();
    void on_startRaceButton_clicked();

private:
    MainWindow *ui;
    std::vector<Gamer> players;
    std::vector<Cockroach> cockroaches;
};

#endif // MAIN_WINDOW_HPP
