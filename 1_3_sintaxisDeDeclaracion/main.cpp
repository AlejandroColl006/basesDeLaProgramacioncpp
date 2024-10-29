#include <iostream>
#include <list>
int b = -4; //Variable global (incluida fuera del main porque afecta a todo el código.
int suma (int a, int b) {
    return a+b;
}

void resultadoDeLaSuma (int a, int b) {
    if(b <= 0) {
        std::cout << "El valor de b es negativo" <<std::endl;
    }
}


int main() {
    std::cout << "El valor de b como variable global es: " << b << std::endl;
    int b = 3; //Variable local

    //Prueba del valor de b (Variable Local) dentro de la función main

    if (b >= 0) {
        std::cout << "El valor de b dentro es la funcion main es: " << b << std::endl;
        int b = -3;
        std::cout << "El valor de b dentro es la funcion main es: " << b << std::endl;
    }
    std::cout << "El valor de b dentro es la funcion main es: " << b << std::endl;
    return 0;
}

