/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @author Javier Bueno Calzadilla alu0101627922@ull.edu.es
  * @date 30/12/2023
  * @brief El programa consiste en transformar un vector, cambiarlo según la tabla y 
  *        transformarlo en un string.
  * @bug There are no known bugs
  */

#include "vector_to_string.h"

int main () { 
  std::vector<int> mi_vector = {5, 1, 15, 20, 35, 0};
  std::string resultado{TransformarVector(mi_vector)};
  std::cout << resultado << std::endl;
  return 0;
}