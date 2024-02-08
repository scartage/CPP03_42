#include "ClapTrap.hpp"

int main( void ){
    ClapTrap a("A");
    ClapTrap b("B");
    ClapTrap c(a);

    // A ataca a B
    std::cout << " --- A ataca a B --- " << std::endl;
    a.attack("B");
    // B recibe daño de 4
    b.takeDamage(4);

    // B se repara
    std::cout << " --- B se repara solo --- " << std::endl;
    b.beRepaired(5);

    c = b;
    c.attack("nobody");
    
    return 0;
}