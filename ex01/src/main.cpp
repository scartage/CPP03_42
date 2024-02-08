#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main( void ){
    ClapTrap a("A");
    a.attack("Pepe");
    a.takeDamage(5);

    ScavTrap b("b");
    b.attack("Lot of pepes");
    b.beRepaired(15);
    b.guardGate();
    return 0;
}