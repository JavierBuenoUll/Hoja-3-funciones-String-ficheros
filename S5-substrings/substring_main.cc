/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @author Javier Bueno Calzadilla alu0101627922@ull.edu.es
  * @date 29/12/2023
  * @brief El programa consiste en contar las vocales que tiene una palabra 
  * @bug There are no known bugs
  */

#include "substring.h"

int main (int argc, char* argv[]) {
  Usage(argc, argv);
  const std::string& cadena_texto = argv[1];
  const int kPosicion{std::stoi(argv[2])};
  const int kLongitud{std::stoi(argv[3])};
  if (kPosicion >= cadena_texto.length()) {
    std::cout << " " << std::endl;
    EXIT_FAILURE;
  }
  Substring(cadena_texto, kPosicion, kLongitud); 
  std::cout << std::endl;
  return 0;
} 
