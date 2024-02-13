# C++ - Module 03: Inheritance

## Uso de `virtual`

### Métodos Virtuales
La declaración de un método como `virtual` en una clase base permite que ese método sea sobrescrito en cualquier clase derivada, proporcionando un comportamiento específico para la clase derivada. Esto es fundamental para el **polimorfismo en tiempo de ejecución**, permitiendo que se llame al método de la clase derivada incluso cuando se usa un puntero o referencia de la clase base para referirse a un objeto de la clase derivada.

### Destructor Virtual
Es especialmente importante declarar el destructor como `virtual` en clases que se van a heredar. Esto asegura que cuando se destruye un objeto a través de un puntero de la clase base, se invoca el destructor correcto, incluyendo los destructores de las clases derivadas, garantizando una limpieza adecuada de los recursos.

## Sobre la Construcción y Destrucción en Orden Inverso
Cuando se crea un objeto de una clase derivada (`ScavTrap`), el constructor de la clase base (`ClapTrap`) se llama primero, siguiendo un orden de "base a derivado". La destrucción ocurre en el orden inverso, asegurando la limpieza adecuada de los recursos, especialmente en las clases derivadas que adquieren sus propios recursos.

## ABOUT Exercise 03: Herencia Virtual

La herencia virtual es un mecanismo en C++ utilizado para resolver el problema del diamante en la herencia múltiple, asegurando que solo exista una única instancia de la clase base, compartida por todas las clases derivadas en la jerarquía de herencia.

### Ajustar `FragTrap` y `ScavTrap` para la Herencia Virtual
Ajustando `FragTrap` y `ScavTrap` para usar herencia virtual de `ClapTrap`, se asegura que, aunque ambas clases derivan de `ClapTrap` y luego `DiamondTrap` deriva de ambos, solo habrá una única instancia de `ClapTrap` en cualquier objeto `DiamondTrap`.

### Consecuencias de la Herencia Virtual
- **Inicialización de Clases Base Virtuales**: La clase más derivada es responsable de inicializar la clase base virtual.
- **Costo de Rendimiento**: La herencia virtual puede tener un pequeño costo de rendimiento, pero es insignificante en comparación con los beneficios de resolver el problema del diamante y tener una jerarquía de clases clara y mantenible.
