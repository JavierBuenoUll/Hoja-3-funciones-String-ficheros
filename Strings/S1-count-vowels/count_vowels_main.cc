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

#include "count_vowels.h"

int main (int argc, char* argv[]) {
  Usage(argc, argv);
  std::string cadena_texto = argv[1];
  CountVowels(cadena_texto);
  return 0;
} 
