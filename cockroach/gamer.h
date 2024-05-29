#ifndef GAMER_HPP
#define GAMER_HPP

#include <string>

class Gamer
{
public:
    Gamer();
    void increaseScore(int incrementNum);
    void setName(std::string name);
    std::string getName() const;
    int getScore() const;
    void setMoney(int money);
    int getMoney() const;
    ~Gamer();

private:
    int score = 0;
    int money = 0;
    std::string name;
};

#endif // GAMER_HPP
