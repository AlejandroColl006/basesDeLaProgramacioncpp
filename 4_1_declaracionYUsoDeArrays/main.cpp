#include <iostream>

int main() {
    int numerosEnteros[10];
    for (int i = 0; i <= 9; i++) {
        numerosEnteros[i] = i + 1;
    }
    for (int i = 0; i <= 9; i++) {
        std::cout << "La lista de numeros enteros " << i << " = " << numerosEnteros[i] << std::endl;
    }
    return 0;
}
