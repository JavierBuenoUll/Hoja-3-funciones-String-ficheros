/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @author Javier Bueno Calzadilla alu0101627922@ull.edu.es
  * @date 31/12/2023
  * @brief El programa consiste en crear un valor aproximado a la serie de Taylor para
  *        el seno y el coseno.
  * @bug There are no known bugs
  */

#include "taylor-seno-coseno.h"
#include <cmath>

void Usage(int argc, char *argv[]) {
  if (argc != 3 && argv[1] != "--help") {
    std::cout << argv[0] << ": Ha colocado un número incorrecto de parámetros." << std::endl;
    std::cout << "Pruebe " << argv[0] << " --help para más información" << std::endl;
    exit(EXIT_SUCCESS);
  }
  std::string parameter{argv[1]};
  if (parameter == "--help") {
    const std::string kHelpText = "Este programa crea a partir de dos palabras una nueva \
    para ello va combinando cogiendo una letra de cada uno hasta terminar, \
    si las dos cadenas tienen distinta longitud, para cuando llegan a la equivalente.";
    std::cout << kHelpText << std::endl;
    exit(EXIT_SUCCESS);
  }
}
