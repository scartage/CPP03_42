#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

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

    std::cout << " *** testing diamond class ***" << std::endl;
    DiamondTrap dt("Diamond");
    dt.attack("the universe");
    dt.takeDamage(20);
    dt.beRepaired(12);
    dt.guardGate();
    dt.highFivesGuys();
    dt.whoAmI();
    return 0;
}