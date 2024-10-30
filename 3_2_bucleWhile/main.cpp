#include <iostream>

int main() {
    int numero;
    int i = 1;

    std::cout << "Introduce un número para ver su tabla de multiplicar: ";
    std::cin >> numero;

    std::cout << "Tabla de multiplicar de " << numero << ":" << std::endl;
    while (i <= 10) {
        std::cout << numero << " x " << i << " = " << (numero * i) << std::endl;
        i++;
    }
    return 0;
}
