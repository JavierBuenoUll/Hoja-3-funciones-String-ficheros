/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @author Javier Bueno Calzadilla alu0101627922@ull.edu.es
  * @date 30/12/2023
  * @brief El programa consiste en tomar un string y crear una nueva con la siguiente letra
  *        del código ascii y con la anterior.
  * @bug There are no known bugs
  */

#include "one_more_one_less.h"

int main (int argc, char* argv[]) {
  Usage(argc, argv);
  std::string cadena_texto = argv[1];
  std::string one_more = cadena_texto;
  std::string one_less = cadena_texto;
  for (char& caracter : one_more) {
    caracter = OneMore(caracter);
  }
  for (char& caracter : one_less) {
    caracter = OneLess(caracter);
  }
  std::cout << cadena_texto << std::endl;
  std::cout << "Con una más sería: " << one_more << std::endl;
  std::cout << "Con una menos sería: " << one_less << std::endl;
  return 0;
}