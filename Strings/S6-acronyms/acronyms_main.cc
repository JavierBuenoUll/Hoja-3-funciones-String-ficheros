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

#include "acronyms.h"

int main() {
  std::string frase;
  std::cout << "Introduzca una frase: ";
  std::getline(std::cin, frase);
  std::string acronimo = obtener_acronimo(frase);
  std::cout << acronimo << std::endl;
  return 0;
}