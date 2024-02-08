#include "ScavTrap.hpp"

ScavTrap ::ScavTrap (std::string name) : ClapTrap(name)
{
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "  -- [ScavTrap] -- " << this->_name << " has been constructed" << std::endl;
}

ScavTrap ::~ScavTrap ()
{
    std::cout << " -- [ScavTrap] -- " << this->_name << " has been destroyed!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& old) : ClapTrap(old) {
    std::cout << " -- [ScavTrap] -- " << this->_name << " has been COPY constructed! " << std::endl;
}

/*ClapTrap::operator=(other): Esta línea llama al operador de asignación de la clase base ClapTrap para copiar los miembros de la clase base del objeto other al objeto actual. Es una práctica crucial para la herencia, asegurando que todos los miembros de datos heredados se asignen correctamente antes de realizar cualquier asignación específica de la clase derivada. En este caso específico, parece que no hay miembros adicionales en ScavTrap que requieran asignación explícita aparte de los heredados de ClapTrap, por lo que esta es la única acción realizada.*/

ScavTrap& ScavTrap::operator=(const ScavTrap& other){
    ClapTrap::operator=(other);
    return *this;
}

void ScavTrap::attack(const std::string& target){
    std::cout << " -- [ScavTrap] -- " << _name << " attacks " << target << " , causing " << _attackDamage << " points of damage! " << std::endl;
}

void ScavTrap::guardGate() {
    std::cout << " -- [ScavTrap] -- " << _name << " is now in Gate keeper mode" << std::endl;
}