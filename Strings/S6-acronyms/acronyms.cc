/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @author Javier Bueno Calzadilla alu0101627922@ull.edu.es
  * @date 29/12/2023
  * @brief El programa consiste en comprobar si una cadena tiene la letra deseada.
  * @bug There are no known bugs
  */

#include "acronyms.h"

std::string obtener_acronimo(const std::string& frase) {
  std::istringstream stream(frase);
  std::string palabra;
  std::string acronimo;
  while (stream >> palabra) {
    acronimo += std::toupper(palabra[0]);
  }
  return acronimo;
}