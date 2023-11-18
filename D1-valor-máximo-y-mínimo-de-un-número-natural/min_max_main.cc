/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @author Javier Bueno Calzadilla alu0101627922@ull.edu.es
  * @date 18/11/2023
  * @brief El programa consiste en mostrar el digito máximo y mínimo de un
  * número
  * @bug There are no known bugs
  */

#include <iostream>
#include "min_max.h"

int main (int argc, char* argv[]) {
  Usage(argc, argv);
  std::string numero = argv[1];
  const size_t kNumero = stoi(numero);
  std::cout << "El digito menor de " << numero << " es " << Digito_Minimo(kNumero) << std::endl;
  std::cout << "El digito mayor de " << numero << " es " <<
               Digito_Maximo(kNumero) << std::endl;
  return 0;
} 
