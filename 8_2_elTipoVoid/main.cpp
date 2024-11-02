#include <iostream>

// Función que no devuelve ningún valor (tipo void)
void mostrarMensaje() {
    std::cout << "¡Hola! Esta es una función que no devuelve nada." << std::endl;
}

// Una función que toma los punteros de "void" como parametros
void imprimirValor(void* ptr, char tipo) {
    if (tipo == 'i') {
        std::cout << "Valor entero: " << *static_cast<int*>(ptr) << std::endl;
    } else if (tipo == 'd') {
        std::cout << "Valor doble: " << *static_cast<double*>(ptr) << std::endl;
    }
}

int main() {
    // Llamo a la función de void que no devuelve valor
    mostrarMensaje();

    // Pongo en uso los punteros void
    int entero = 42;
    double decimal = 3.14;

    std::cout << "\nUsando punteros void:" << std::endl;
    imprimirValor(&entero, 'i');  // Pasamos la dirección de un entero
    imprimirValor(&decimal, 'd');  // Pasamos la dirección de un doble

    return 0;
}
