#include <iostream>

void modificarDato(int& num) {
    num++;
}

int main() {
    int valor = 10;
    std::cout << "Primer valor: " << valor << std::endl;
    modificarDato(valor);
    std::cout << "Valor después de ser modificado: " << valor << std::endl;

    return 0;
}