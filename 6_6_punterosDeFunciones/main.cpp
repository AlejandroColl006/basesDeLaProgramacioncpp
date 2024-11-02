#include <iostream>


void acceso() {
    std::cout << "Accede el usuario " << std::endl;
}

void salida() {
    std::cout << "Sale el usuario" << std::endl;
}

void ejecutarFuncion(void (*funcion)()) {
    funcion();
}

int main() {
    void (*punteroAAcceso)() = acceso;
    void (*punteroASalida)() = salida;

    std::cout << "Ejecutando una entrada:" << std::endl;
    ejecutarFuncion(punteroAAcceso);

    std::cout << "\nEjecutando una salida:" << std::endl;
    ejecutarFuncion(punteroASalida);

    return 0;
}
