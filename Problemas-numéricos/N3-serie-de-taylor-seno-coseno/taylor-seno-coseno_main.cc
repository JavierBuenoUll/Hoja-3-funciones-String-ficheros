/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @author Javier Bueno Calzadilla alu0101627922@ull.edu.es
  * @date 31/12/2023
  * @brief El programa consiste en crear un valor aproximado a la serie de Taylor para
  *        el seno y el coseno.
  * @bug There are no known bugs
  */

#include "taylor-seno-coseno.h"
#include <iostream>
#include <cmath>

// Función para calcular el factorial recíproco 1/n!
double FactorialReciproco(int n) {
    double resultado = 1.0;
    for (int i = 2; i <= n; ++i) {
        resultado /= i;
    }
    return resultado;
}

// Función para determinar el signo (-1 cuando n es impar, 1 cuando es par)
int Signo(int n) {
    return (n % 2 == 0) ? 1 : -1;
}

// Función para aproximar el seno usando los primeros m términos de la serie de Taylor
double SenoAprox(double x, int m) {
    double resultado = 0.0;

    for (int i = 0; i < m; ++i) {
        resultado += Signo(i) * std::pow(x, 2 * i + 1) * FactorialReciproco(2 * i + 1);
    }

    return resultado;
}

// Función para aproximar el coseno usando los primeros m términos de la serie de Taylor
double CosenoAprox(double x, int m) {
    double resultado = 0.0;

    for (int i = 0; i < m; ++i) {
        resultado += Signo(i) * std::pow(x, 2 * i) * FactorialReciproco(2 * i);
    }

    return resultado;
}

// Función para calcular el error entre la función exacta y la función aproximada
double Error(double f_exacta, double f_aprox, int m, double x) {
    return std::fabs(f_exacta - f_aprox);
}

int main() {
    const double pi = 3.14159265358979323846;
    double x = pi / 4; // Puedes cambiar el valor de x según tus necesidades
    int m = 5;        // Puedes cambiar el número de términos según tus necesidades

    // Calcular y mostrar el resultado
    double seno_exacto = std::sin(x);
    double coseno_exacto = std::cos(x);
    double seno_aprox = SenoAprox(x, m);
    double coseno_aprox = CosenoAprox(x, m);
    double error_seno = Error(seno_exacto, seno_aprox, m, x);
    double error_coseno = Error(coseno_exacto, coseno_aprox, m, x);
    std::cout << "Seno exacto: " << seno_exacto << std::endl;
    std::cout << "Seno aproximado: " << seno_aprox << std::endl;
    std::cout << "Error del seno: " << error_seno << std::endl;
    std::cout << "Coseno exacto: " << coseno_exacto << std::endl;
    std::cout << "Coseno aproximado: " << coseno_aprox << std::endl;
    std::cout << "Error del coseno: " << error_coseno << std::endl;

    return 0;
}