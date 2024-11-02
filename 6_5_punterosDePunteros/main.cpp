#include <iostream>

int main() {
    int array[] = {10, 20, 30, 40, 50};
    int tamaño = sizeof(array) / sizeof(array[0]);


    int* puntero = array;

    int** punteroAPuntero = &puntero;

    std::cout << "Valores del array usando punteros a punteros:" << std::endl;

    for (int i = 0; i < tamaño; ++i) {
        std::cout << "array[" << i << "] = " << *(*punteroAPuntero + i) << std::endl;
    }

    for (int i = 0; i < tamaño; ++i) {
        *(*punteroAPuntero + i) += 5;
    }

    std::cout << "\nValores del array después de la modificación:" << std::endl;

    for (int i = 0; i < tamaño; ++i) {
        std::cout << "array[" << i << "] = " << *(*punteroAPuntero + i) << std::endl;
    }

    return 0;
}
