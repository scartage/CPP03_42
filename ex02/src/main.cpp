#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main( void ){
    ClapTrap a("A");
    a.attack("Pepe");
    a.takeDamage(5);

    ScavTrap b("b");
    b.attack("Lot of pepes");
    b.beRepaired(15);
    b.guardGate();

    FragTrap ft("pepito");
    FragTrap sc("nobody");

    sc = ft;

    ft.attack("the entire world");
    ft.highFivesGuys();

    sc.takeDamage(20);
    sc.beRepaired(6);
    return 0;
}