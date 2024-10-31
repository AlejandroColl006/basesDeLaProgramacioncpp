#include <iostream>

int variableGlobal = 20;

void funcionLocal() {

    int variableLocal = 10;
    std::cout << "Dentro de la funcion funcionLocal:" << std::endl;
    std::cout << "Variable local: " << variableLocal << std::endl;
    std::cout << "Variable global: " << variableGlobal << std::endl; // Accediendo a la variable global
}

int main() {
    std::cout << "Dentro de la funcion main:" << std::endl;
    std::cout << "Variable global: " << variableGlobal << std::endl;


    funcionLocal();


    std::cout << "Fin de la funcion main." << std::endl;

    return 0;
}

