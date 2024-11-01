#include <iostream>
#include <cstdlib>


int main() {
    int a = 6;
    double b = 2.78;
    char c = 't';

    int *p_a = &a;
    double *p_b = &b;
    char *p_c = &c;

    std::cout << "Los valores son, a = " << a << ", b = " << b << "y c = " << c << std::endl;

    std::cout << "---------Nuevos Valores de las Variables---------" << std::endl;

    *p_a = 10;
    *p_b = 16.56;
    *p_c = 'H';

    std::cout << "Los nuevos valores establecidos son: " << std::endl;
    std::cout << "Los valores de a = " << a << ", b = " << b << "y c = " << c << std::endl;

    std::cout << "Nuevas direcciones de los punteros a su referente espacio de memoria" << std::endl;

    std::cout << "---------Nuevas Direcciones de los Punteros---------" << std::endl;

    std::cout << "Las nuevas direcciones de memoria que toma cada puntero son: " << std::endl;
    std::cout << "La direccion del primer puntero  es " << p_a << std::endl;
    std::cout << "La direccion del segundo puntero  es " << p_b << std::endl;
    std::cout << "La direccion del tercer puntero  es " << p_c << std::endl;


    return 0;
}
