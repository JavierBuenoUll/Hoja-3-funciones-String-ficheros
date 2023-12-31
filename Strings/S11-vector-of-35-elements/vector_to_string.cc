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

std::string TransformarVector(const std::vector<int> &mi_vector) {
  std::string resultado;
  for (int numero : mi_vector) {
    if (numero >= 0 && numero <= 9) {
      resultado+= static_cast<char>('0' + numero);
    } else if (numero >= 10 && numero <= 35) {
      resultado+= static_cast<char>('A' + (numero - 10));
    } else {
      resultado+= '?';
    } 
  }
  return resultado;
}