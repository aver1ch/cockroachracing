#include "main.h"
#include <QComboBox>
#include "ui_main.h"

#include <QMessageBox> // Для сообщений об ошибках или предупреждений

MainWindow::MainWindow(QWidget* parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Инициализация тараканов
    cockroaches.push_back(Cockroach("Шустрик"));
    cockroaches.push_back(Cockroach("Скороход"));
    cockroaches.push_back(Cockroach("Бегун"));
    cockroaches.push_back(Cockroach("Спринтер"));
    cockroaches.push_back(Cockroach("Турбо"));

    // Добавление имен тараканов в выпадающий список
    for (const Cockroach& cockroach : cockroaches) {
        ui->comboBox->addItem(QString::fromStdString(cockroach.getName()));
    }
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_addPlayerButton_clicked()
{
    QString playerName = ui->lineEdit_2->text(); // Получаем имя игрока из поля ввода
    QString playerMoneyStr = ui->lineEdit_3->text(); // Получаем количество денег игрока из поля ввода

    if (playerName.isEmpty() || playerMoneyStr.isEmpty()) // Проверяем, что поля не пусты
    {
        QMessageBox::warning(this, "Ошибка", "Пожалуйста, введите имя игрока и количество денег.");
        return;
    }

    bool conversionSuccess = false;
    int playerMoney = playerMoneyStr.toInt(&conversionSuccess); // Преобразуем строку в число

    if (!conversionSuccess || playerMoney <= 0) // Проверяем, что удалось преобразовать валидное положительное число
    {
        QMessageBox::warning(this, "Ошибка", "Пожалуйста, введите корректное количество денег (целое положительное число).");
        return;
    }

    // Создаем нового игрока
    Gamer newPlayer;
    newPlayer.setName(playerName.toStdString());
    newPlayer.setMoney(playerMoney);

    // Добавляем игрока в список игроков
    players.push_back(newPlayer);

    // Отображаем информацию о новом игроке
    ui->comboBox_2->addItem(playerName); // Добавляем имя игрока в выпадающий список

    ui->lineEdit_2->clear(); // Очищаем поле ввода имени игрока
    ui->lineEdit_3->clear(); // Очищаем поле ввода количества денег игрока
}

void MainWindow::on_removePlayerButton_clicked()
{
    int currentIndex = ui->comboBox_2->currentIndex(); // Получаем текущий индекс в выпадающем списке

    if (currentIndex == -1) // Проверяем, что элемент выбран
    {
        QMessageBox::warning(this, "Ошибка", "Пожалуйста, выберите игрока для удаления.");
        return;
    }

    // Удаляем игрока из списка игроков
    players.erase(players.begin() + currentIndex);

    // Удаляем имя игрока из выпадающего списка
    ui->comboBox_2->removeItem(currentIndex);
}

void MainWindow::on_placeBetButton_clicked()
{
    int playerIndex = ui->comboBox_2->currentIndex(); // Получаем текущий индекс в выпадающем списке

    if (playerIndex == -1) // Проверяем, что игрок выбран
    {
        QMessageBox::warning(this, "Ошибка", "Пожалуйста, выберите игрока для размещения ставки.");
        return;
    }

    int betAmount = ui->lineEdit->text().toInt(); // Получаем сумму ставки из поля ввода

    if (betAmount <= 0) // Проверяем, что ставка положительная
    {
        QMessageBox::warning(this, "Ошибка", "Пожалуйста, введите корректную сумму ставки (целое положительное число).");
        return;
    }

    // Размещаем ставку игрока
    players[playerIndex].increaseScore(betAmount);

    // Обновляем информацию о деньгах игрока
    ui->label_5->setText("Деньги выбранного игрока: " + QString::number(players[playerIndex].getMoney()));

    // Очищаем поле ввода суммы ставки
    ui->lineEdit->clear();
}

void MainWindow::on_startRaceButton_clicked()
{
    // Начинаем гонку
    // Реализация этой функции будет зависеть от вашего способа симуляции гонки и определения победителя
}
