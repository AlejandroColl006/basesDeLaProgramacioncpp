#include <iostream>
#include <string>
int b = 5; //Variable global (incluida fuera del main porque afecta a todo el código.
int suma (int a, int b) {
    return a+b;
}

int main() {
    int a = 2; //Variable local
    std::cout << "El resultado de la suma es: " << suma(2, b);

    return a+b;
}
