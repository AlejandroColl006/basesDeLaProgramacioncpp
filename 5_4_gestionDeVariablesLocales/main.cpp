#include <iostream>

void mostrarLaVariableLocal() {
int laVariableLocal = 6;
std::cout << "La variable local es " << laVariableLocal<< std::endl;
}

int main() {
    std::cout << "Inicio de la ejecucion del programa" << std::endl;

    mostrarLaVariableLocal();

    std::cout << "Se termina de ejecutar la funcion de mostraLaVariableLocal " << std::endl;


    std::cout << "Termina la ejecucion del programa" << std::endl;

    return 0;

}
