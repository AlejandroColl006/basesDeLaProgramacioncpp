#include <iostream>
int b = 9; //Variable Global
//Definimos la función suma
int suma (int a, int b) {
    return a + b;
}
//Definimos la función división
int division(int a, int b) {
    return a / b;
}
//Definimos la función "void" que no necesita el "return" y no devuelve ningún valor
void muestraFuncionSinDevolverValor() {
    std::cout << "Hola soy el mensaje de la funcion sin devolver valor" << std::endl;
}

int main() {
std::cout << "---------------------------------------" << std::endl;
    std::cout << "El resultado de la suma es: " << suma (4,b) << std::endl;

    //Variables locales que solo afectan a la y la b que se indican en las funciones de abajo
    int a = 6;
    int b = 3;

    std::cout << "---------------------------------------" << std::endl;
    std::cout << "El resultado de la division es: " << division(a, b) << std::endl;

    std::cout << "---------------------------------------" << std::endl;
    muestraFuncionSinDevolverValor();
    return 0;
}
