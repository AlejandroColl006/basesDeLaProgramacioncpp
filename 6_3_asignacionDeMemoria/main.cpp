#include <iostream>

int main() {
    int tam;

    std::cout << "Introduce el tamaño del array: ";
    std::cin >> tam;

    int* array = new int[tam];

    if (array == nullptr) {
        std::cout << "Error al asignar memoria." << std::endl;
        return 1;
    }


    for (int i = 0; i < tam; ++i) {
        array[i] = i + 1;
    }


    std::cout << "Valores del array (lista):" << std::endl;
    for (int i = 0; i < tam; ++i) {
        std::cout << "array[" << i << "] = " << array[i] << std::endl;
    }

    delete[] array;

    return 0;
}
