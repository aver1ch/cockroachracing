#ifndef COCKROACH_HPP
#define COCKROACH_HPP

#include <string>

class Cockroach
{
public:
    Cockroach(std::string name);
    std::string getName() const;
    // Other methods can be added as needed

private:
    std::string name;
    int amountOfRuns;
    int wins;
    int speed;
};

#endif // COCKROACH_HPP
