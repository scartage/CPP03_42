#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "iostream"

class DiamondTrap : public ScavTrap , public FragTrap
{
private:
    std::string _name;
public:
    DiamondTrap(std::string name);
    ~DiamondTrap();

    DiamondTrap(const DiamondTrap& old);
    DiamondTrap& operator=(const DiamondTrap& other);

    void attack(const std::string& target);
    void whoAmI(void);
};
#endif