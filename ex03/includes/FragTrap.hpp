#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
public:
    FragTrap(std::string name);
    ~FragTrap();

    FragTrap(const FragTrap& old);
    FragTrap& operator=(const FragTrap& other);

    void attack(const std::string& target);
    void highFivesGuys(void);
};

#endif