
#include <iostream>

    const double PI = 3.14;
    const int MAX_CLIENTES = 75;

    int main() {

        double radio;

        std::cout << "¿Cual es el radio del circulo?: ";
        std::cin >> radio;

        double area = PI * radio * radio;
        std::cout << "El calculo del area del círculo con radio " << radio << " es: " << area << std::endl;


        std::cout << "La cantidad maxima de clientes es: " << MAX_CLIENTES << std::endl;

        return 0;
    }


