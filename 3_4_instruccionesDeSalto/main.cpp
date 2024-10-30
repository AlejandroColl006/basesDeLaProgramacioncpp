#include <iostream>


int main() {
    int numero;
    int total = 0;
    while (true) {
        std::cout << "Ingrese un numero (presiona 0 para terminar): ";
        std::cin >> numero;
        if (numero == 0) {
            break;
        }
        if (numero > 0) {
            total += numero;
            std::cout << "Total calculado: " << total << std::endl;
        }
    }
    return 0;
}
