#include <iostream>

int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int numero;
    std::cout << "Introduce un numero para realiza el factorial: ";
    std::cin >> numero;

    if (numero < 0) {
        std::cout << "No es posible calcular el factorial para numeros negativos" << std::endl;
    } else {
        std::cout << "El factorial del numero: " << numero << " es: " << factorial(numero) << std::endl;
    }
    return 0;
}
