#include "gamer.h"

Gamer::Gamer() {}

void Gamer::increaseScore(int incrementNum)
{
    this->score += incrementNum;
}

void Gamer::setName(std::string name)
{
    this->name = name;
}

std::string Gamer::getName() const
{
    return this->name;
}

int Gamer::getScore() const
{
    return this->score;
}

void Gamer::setMoney(int money)
{
    this->money = money;
}

int Gamer::getMoney() const
{
    return this->money;
}

Gamer::~Gamer() {}
