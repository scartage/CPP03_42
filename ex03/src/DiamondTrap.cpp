#include "DiamondTrap.hpp"

DiamondTrap ::DiamondTrap (std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), _name(name)
{
    _hitPoints = FragTrap::_hitPoints;
    _energyPoints = ScavTrap::_energyPoints;
    _attackDamage = FragTrap::_attackDamage;
    std::cout << "  *** [DiamondTrap] *** " << this->_name << " has been constructed" << std::endl;
}

DiamondTrap ::~DiamondTrap ()
{
    std::cout << " *** [DiamondTrap] *** " << this->_name << " has been destroyed!" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& old) : ClapTrap(old), ScavTrap(old), FragTrap(old), _name(old._name) {
    std::cout << " *** [DiamondTrap] *** " << this->_name << " has been COPY constructed! " << std::endl;
    *this = old;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other){
    if (this != &other){
        ClapTrap::operator=(other);
        this->_name = other._name;
    }
    return *this;
}

void DiamondTrap::attack(const std::string& target){
    std::cout << " *** [DiamondTrap] *** " << _name << " attacks " << std::endl;
    ScavTrap::attack(target);       //we use the ScavTrap attack
}

void DiamondTrap::whoAmI(void){
    std::cout << " *** [DiamondTrap] *** " << _name << "\nClapTrap name: " << ClapTrap::_name << std::endl;

}