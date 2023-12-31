#include <iostream>
#include <cmath>

void descomponerEnPrimos(int numero) {
    // Manejar casos especiales para 0 y 1
    if (numero <= 1) {
        std::cout << "El número " << numero << " no tiene factores primos." << std::endl;
        return;
    }
    // Imprimir los factores primos
    std::cout << "Factores primos de " << numero << ": ";  
    // Extraer factores primos 2
    while (numero % 2 == 0) {
        std::cout << "2 ";
        numero /= 2;
    }
    // Extraer factores primos impares
    for (int i = 3; i <= std::sqrt(numero); i += 2) {
        while (numero % i == 0) {
            std::cout << i << " ";
            numero /= i;
        }
    }
    // Si el número restante es mayor que 1, es el último factor primo
    if (numero > 1) {
        std::cout << numero;
    }
    std::cout << std::endl;
}

int main() {
  // Solicitar entrada al usuario
  int num;
  std::cout << "Ingrese un número entero positivo: ";
  std::cin >> num;
  // Descomponer en factores primos y mostrar el resultado
  descomponerEnPrimos(num);
  return 0;
}
