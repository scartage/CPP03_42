#include "FragTrap.hpp"

FragTrap ::FragTrap (std::string name) : ClapTrap(name)
{
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "  --- [FragTrap] --- " << this->_name << " has been constructed" << std::endl;
}

FragTrap ::~FragTrap ()
{
    std::cout << " --- [FragTrap] --- " << this->_name << " has been destroyed!" << std::endl;
}

FragTrap::FragTrap(const FragTrap& old) : ClapTrap(old) {
    std::cout << " --- [FragTrap] --- " << this->_name << " has been COPY constructed! " << std::endl;
    *this = old;
}

/*ClapTrap::operator=(other): Esta línea llama al operador de asignación de la clase base ClapTrap para copiar los miembros de la clase base del objeto other al objeto actual. Es una práctica crucial para la herencia, asegurando que todos los miembros de datos heredados se asignen correctamente antes de realizar cualquier asignación específica de la clase derivada. En este caso específico, parece que no hay miembros adicionales en ScavTrap que requieran asignación explícita aparte de los heredados de ClapTrap, por lo que esta es la única acción realizada.*/

FragTrap& FragTrap::operator=(const FragTrap& other){
    ClapTrap::operator=(other);
    return *this;
}

void FragTrap::attack(const std::string& target){
    std::cout << " --- [FragTrap] --- " << _name << " attacks " << target << " , causing " << _attackDamage << " points of damage! " << std::endl;
}

void FragTrap::highFivesGuys(void){
    std::cout << " --- [FragTrap] --- " << _name << ": Hey! give me five!! :) " << std::endl;

}