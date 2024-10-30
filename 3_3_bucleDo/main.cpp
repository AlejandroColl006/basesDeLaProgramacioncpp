#include <iostream>

int main() {
    int numero;
    int i = 1;

    std::cout <<"Ingrese un numero: ";
    std::cin >> numero;

    std::cout << "Tabla de multiplicar de: "<< numero << std::endl;
    do{
        std::cout << numero << "x" << i << "=" << (numero * i) << std::endl;
        i++;
    } while (i <= 10);

    return 0;
}
