#include <iostream>
#include <string>

int main() {
    int edad;

    std::cout << "Ingresa tu edad: ";
    std::cin >> edad;

    if (edad >=18) {
        std::cout << "Eres mayor de edad" ;
    } else {
        std::cout << "Eres menor de edad";
    }

    return 0;
}
