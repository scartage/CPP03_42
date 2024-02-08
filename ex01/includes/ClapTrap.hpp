#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap
{
protected:
    /* data */
    std::string		_name;
    unsigned int	_hitPoints;		//health
    unsigned int	_energyPoints;
	unsigned int	_attackDamage;
public:
    ClapTrap(std::string name);
    virtual ~ClapTrap();

	ClapTrap(const ClapTrap& oldObj);
	ClapTrap& operator=(const ClapTrap& other);

	virtual void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif