#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	std::cout << " - [Class Constructor] called - " << std::endl;
	this->_name = (name.empty() ? "none" : name);
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
}

ClapTrap::~ClapTrap()
{
	std::cout << " - [Class Destructor] called - " << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& oldObj){
    std::cout << " - [Class Copy Constructor] called - " << std::endl;
    *this = oldObj;
}

ClapTrap &ClapTrap::operator=( const ClapTrap& other){
    if (this != &other){
        this->_name = other._name;
        this->_hitPoints = other._hitPoints;
        this->_energyPoints = other._energyPoints;
        this->_attackDamage = other._attackDamage;
    }
    std::cout << " - [Class Operator Assignament] called - " << std::endl;
    return *this;
}

void ClapTrap::attack(const std::string& target){
    if (_energyPoints > 0 && _hitPoints > 0)
    {
        std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
        _energyPoints--;
    } else {
        std::cout << "ClapTrap " << _name << "couldn' attack" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount){
    if (_hitPoints > amount){
        _hitPoints -= amount;
        std::cout << "ClapTrap " << _name << " took " << amount << " points of damage1! "<< std::endl;
    } else {
        _hitPoints = 0;
        std::cout << "ClapTrap " << _name << "is now destroyed :( )" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount){
    if (_energyPoints > 0 && _hitPoints > 0){
        _hitPoints += amount;
        _energyPoints--;
        std::cout << "ClapTrap " << _name << " has been repaired, gaining " << amount << " hit points" << std::endl;
    }
}

