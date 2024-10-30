#include <iostream>
#include <string>

int main() {
    int a, b;

    std::cout << "Ingresa el primer numero: ";
    std::cin >> a;
    std::cout << "Ingresa el segundo numero: ";
    std::cin >> b;

    std::cout << "\nOperadores aritmeticos:\n";
    std::cout << "Suma: " << (a + b) << std::endl;
    std::cout << "Resta: " << (a - b) << std::endl;
    std::cout << "Multiplicacion: " << (a * b) << std::endl;
    std::cout << "Division: " << (a / b) << std::endl;
    std::cout << "Modulo: " << (a % b) << std::endl;


    std::cout << "\nOperadores de comparacion:\n";
    std::cout << "a es igual a b: " << (a == b) << std::endl;
    std::cout << "a es diferente de b: " << (a != b) << std::endl;
    std::cout << "a es menor que b: " << (a < b) << std::endl;
    std::cout << "a es mayor que b: " << (a > b) << std::endl;
    std::cout << "a es menor o igual que b: " << (a <= b) << std::endl;
    std::cout << "a es mayor o igual que b: " << (a >= b) << std::endl;

    bool resultado1 = (a > 0) && (b > 0);
    bool resultado2 = (a < 0) || (b < 0);
    bool resultado3 = !(a == b);

    std::cout << "\nOperadores logicos:\n";
    std::cout << "Ambos numeros son positivos: " << resultado1 << std::endl;
    std::cout << "Al menos uno de los numeros es negativo: " << resultado2 << std::endl;
    std::cout << "a y b no son iguales: " << resultado3 << std::endl;

    return 0;
}
