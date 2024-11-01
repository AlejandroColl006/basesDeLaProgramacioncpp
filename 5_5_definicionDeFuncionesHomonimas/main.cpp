#include <iostream>

int a = 7;
double b = 0.002;
char c = 'r';


void mostrar(int a) {
  std::cout << "Un ejemplo de numero entero es " << a << std::endl;
}
void mostrar(double b) {
  std::cout << "Un ejemplo de decimal es " << b << std::endl;
}
void mostrar(char c) { //Define letras que representadas entre una comilla como 'r'.
  std::cout << "Un ejemplo de character es " << c << std::endl;
}

int main() {
// ¿Y si los mostramos al inverso?

  std::cout << "El resultado de mostrar(c) es una letra" << std::endl;
  mostrar(c);
  std::cout << "El resultado de mostrar(a) es un numero decimal" << std::endl;
  mostrar(b);
  std::cout << "El resultado de mostrar(a) es un numero entero" << std::endl;
  mostrar(a);
  std::cout << "La funcion main termina" << std::endl;
  //En la función main podemos ver que con la funcion mostrar puede mostrar tres datos diferentes de números.
    return 0;

}
