#include "cockroach.h"

Cockroach::Cockroach(std::string name)
    : name(name), amountOfRuns(0), wins(0), speed(0) {}

std::string Cockroach::getName() const
{
    return name;
}
