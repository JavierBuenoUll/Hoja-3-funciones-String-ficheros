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

void Usage(int argc, char *argv[]) {
  if (argc != 2) {
    std::cout << argv[0] << ": Ha colocado un número incorrecto de parámetros." << std::endl;
    std::cout << "Pruebe " << argv[0] << " --help para más información" << std::endl;
    exit(EXIT_SUCCESS);
  }
  std::string parameter{argv[1]};
  if (parameter == "--help") {
    const std::string kHelpText = "Este programa crea dos cadenas nuevas a partir de una \
    introducida por el usuario, una con una letra más siguiendo el código ascii, y otra con \
    una menos. Introduzca el programa y la cadena separada por un espacio.";
    std::cout << kHelpText << std::endl;
    exit(EXIT_SUCCESS);
  }
}

char OneMore(const char& letra) {
  return letra + 1;
}
char OneLess(const char& letra) { return letra - 1; }