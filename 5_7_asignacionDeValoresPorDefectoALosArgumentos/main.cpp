#include <iostream>
#include <string>

void mostrarDatosDelCoche(std::string marca, int creacion = 2008, int km = 157273) {
    std::cout << "Marca: " << marca << std::endl;
    std::cout << "Creacion: " << creacion << std::endl;
    std::cout << "Kilometros: " << km << " metros" << std::endl;
}

int main() {
    mostrarDatosDelCoche("Renault", 1993, 537281);

    std::cout << std::endl;

    mostrarDatosDelCoche("BMW");

    return 0;
}

