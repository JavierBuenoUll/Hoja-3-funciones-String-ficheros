/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @author Javier Bueno Calzadilla alu0101627922@ull.edu.es
  * @date 30/12/2023
  * @brief El programa consiste en crear un string a partir de dos strings de forma
  *        que vaya cogiendo una letra de cada uno.
  * @bug There are no known bugs
  */

#include "combine_2_strings.h"

int main(int argc, char *argv[]) { 
  Usage(argc, argv);
  std::string palabra_1{argv[1]};
  std::string palabra_2{argv[2]};
  std::string resultado{Combine2Strings(palabra_1, palabra_2)};
  std::cout << resultado << std::endl;
  return 0;
}