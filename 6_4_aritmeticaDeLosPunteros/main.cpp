#include <iostream>

int main() {
    //Lo primero es establecer un tamaño de array (lista de números)
    const int espacioDeTamanio = 12;
    int array[espacioDeTamanio] = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50, 55, 60,};

    int *ptr = array;
    //En este paso indicamos que el valor del puntero va a ser un número entero indicados en el array
    std::cout << "Valores del array utilizando aritmética de punteros:" << std::endl;

    for (int i = 0; i < espacioDeTamanio; ++i) {
        std::cout << "array[" << i << "] = " << *(ptr + i) << std::endl;
    }
    for (int i = 0; i < espacioDeTamanio; ++i) {
        *(ptr + i) += 5;
    }
    //En el paso siguiente se mostrara los valores del array tras haberlo modificado en el bucle anterior
    std::cout << "Valores del array después de la modificación:" << std::endl;

    for (int i = 0; i < espacioDeTamanio; ++i) {
        std::cout << "array[" << i << "] = " << *(ptr + i) << std::endl;
    }


    return 0;
}
