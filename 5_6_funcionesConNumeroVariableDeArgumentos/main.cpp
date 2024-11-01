#include <iostream>
#include <cstdarg>


int suma(int numeArgs, ...) {
    int total = 0;
    va_list argums;
    va_start(argums, numeArgs);

    for (int i = 0; i < numeArgs; ++i) {
        total += va_arg(argums, int);
    }
    va_end(argums);

    return total;
}

int main() {
    int result1 = suma(3, 74, 82, 9);
    int result2 = suma(5, 7, 3, 10, 5, 5);

    std::cout << "El resultado de la suma de los tres primeros argumentos de la lista establecida es: " << resultado1 << std::endl;
    std::cout << "El resultado de la suma de los cinco siguientes argumentos de la lista establecida es: " << resultado2 << std::endl;

    return 0;
}
