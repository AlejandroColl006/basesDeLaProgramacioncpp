#include <iostream>
#include <cstdlib>


int main(int argc, char *argv[]) {
    int numero;
if (argc < 2) {
    std::cout << "Introduzca 1 numero al menos: ";
    std::cin >> numero;
    return 1;
}
    int total = 0;
    for (int i = 1; i < argc; i++) {
        int numero = std::atoi(argv[i]);
        total += numero;
        std::cout << "La suma de todos los argumentos es igual a "<< total << std::endl;
    }
    return 0;
}
