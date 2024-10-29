#include <iostream>
#include <string>

int main() {
    std::string nombre;
    int edad;


    std::cout << "Ingresa el nombre: ";
    std::getline(std::cin, nombre);
    std::cout << "Ingresa la edad: ";
    std::cin >> edad;

    std::cout <<"\nDatos ingresados:\n";
    std::cout << "Nombre: "<< nombre <<", edad: " << edad << "\n";
    return 0;
}
