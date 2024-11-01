#include <iostream>

inline double resta(int v, int h) {
    return v - h;
}

int main() {
    int v = 731458;
    int h = 239239;

    int resultado = resta(v, h);
    std::cout << "La resta de " << v << " y " << h << " es " << resultado << std::endl;
    return 0;
}
