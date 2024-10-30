#include <iostream>


int division(int a, int b) {
    return a / b;
}

void muestraFuncionSinDevolverValor() {
    std::cout << "Hola soy el mensaje de la funcion sin devolver valor" << std::endl;
}

int main() {
    int a = 6;
    std::cout << "El resultado de la division es: " << division(a, 3) << std::endl;
    muestraFuncionSinDevolverValor();
    return 0;
}
