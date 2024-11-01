#include <iostream>

int main() {

    const int tama = 4;
    int array[tama] = {1, 2, 3, 4};
    int* ptr = array;

    std::cout << "Los valores del array:" << std::endl;
    for (int i = 0; i < tama; ++i) {
        std::cout << "array[" << i << "] = " << *(ptr + i) << std::endl;
    }

    for (int i = 0; i < tama; ++i) {
        *(ptr + i) *= 2;
    }


    std::cout << "Valores del array después de la modificación:" << std::endl;
    for (int i = 0; i < tama; ++i) {
        std::cout << "array[" << i << "] = " << *(ptr + i) << std::endl;
    }

    return 0;
}
