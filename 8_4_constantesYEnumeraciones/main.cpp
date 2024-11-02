#include <iostream>

// Declaración de una constante
const double PI = 3.14159;

// Enumeración para los días de la semana
enum deDeportes {
    Futbol,
    Natacion,
    Baloncesto,
    Padel,
    Judo,
    Beisbol,
    Senderismo
};

int main() {
    // Uso de la constante PI
    double radio;
    std::cout << "Introduce el radio de un circulo: ";
    std::cin >> radio;

    double area = PI * radio * radio;
    std::cout << "El area del circulo es: " << area << std::endl;

    deDeportes entrenamientoDe = Baloncesto;

    std::cout << "Hoy toca hacer la actividad: " << entrenamientoDe << "de mi horario" << std::endl;

    switch (entrenamientoDe) {
        case Futbol:
            std::cout << "Futbol" << std::endl;
        break;
        case Natacion:
            std::cout << "Natacion" << std::endl;
        break;
        case Baloncesto:
            std::cout << "Baloncesto" << std::endl;
        break;
        case Padel:
            std::cout << "Padel" << std::endl;
        break;
        case Judo:
            std::cout << "Judo" << std::endl;
        break;
        case Beisbol:
            std::cout << "Beisbol!" << std::endl;
        break;
        case Senderismo:
            std::cout << "Senderismo" << std::endl;
        break;
    }

    return 0;
}
