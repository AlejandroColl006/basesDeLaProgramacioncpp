#include <iostream>

// En este paso declaramos las alias de cada tipo de número
typedef unsigned long ulong;
typedef float decimal;

int main() {
    ulong population = 7500000000;  // Alias para unsigned long
    decimal pi = 3.14159f;           // Alias para float

    std::cout << "Población mundial: " << population << std::endl;
    std::cout << "Valor de PI: " << pi << std::endl;

    return 0;
}