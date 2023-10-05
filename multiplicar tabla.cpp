#include <iostream>

int main() {
    int numero;

    // Solicitar al usuario un número entero
    std::cout << "Ingrese un numero entero: ";
    std::cin >> numero;

    // Mostrar la tabla de multiplicar
    std::cout << "Tabla de multiplicar del " << numero << ":" << std::endl;
    for (int i = 1; i <= 10; i++) {
        std::cout << numero << " x " << i << " = " << numero * i << std::endl;
    }

    return 0;
}
