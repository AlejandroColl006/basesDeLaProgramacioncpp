#include <iostream>

void mostrarLaVariableLocal() {
int laVariableLocal = 6;
std::cout << "La variable local es " << laVariableLocal<< std::endl;
}

int main() {
    std::cout << "Inicio de la ejecucion del programa" << std::endl;

    mostrarLaVariableLocal();

    std::cout << "Saliendo de la función mostrarLaVariableLocal" << std::endl;

    // Aquí no se puede acceder a variableLocal porque ha sido destruida
    std::cout << "Termina la ejecucion del programa" << std::endl;

    return 0;

}
