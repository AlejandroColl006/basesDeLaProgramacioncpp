#include <iostream>

int main() {
    int edad = 25;
    std::cout << "La edad es: " << edad << std::endl;

    double estatura = 1.68;
    std::cout <<"La estatura es de: "<< estatura << "metros" << std::endl;

    char incial = 'B';
    std::cout << "La incial es: " << incial << std::endl;

    bool esAlumno = true;
    std::cout << "Es un alumno?" << esAlumno << std::endl;

    edad += 7;
    std::cout << "La nueva edad es: " << edad << std::endl;

    estatura += 0.75;
    std::cout << "La nueva estatura es: " << estatura << std::endl;

    return 0;
}

