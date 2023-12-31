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

#include "substring-involucrado.h"

int main (int argc, char* argv[]) {
  Usage(argc, argv);
  const std::string& cadena_texto = argv[1];
  const std::string& substring = argv[2];
  if (EsSubstring(cadena_texto, substring)) {
    std::cout << "Yes" << std::endl;
  } else {
    std::cout << "No" << std::endl;
  }
  return 0;
} 
