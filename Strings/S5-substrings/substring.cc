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

#include "substring.h"
void Usage(int argc, char *argv[]) {
  if (argc != 4) {
    std::cout << argv[0] << ": Ha colocado un número incorrecto de parámetros." << std::endl;
    std::cout << "Pruebe " << argv[0] << " --help para más información" << std::endl;
    exit(EXIT_SUCCESS);
  }
  std::string parameter{argv[1]};
  if (parameter == "--help") {
    const std::string kHelpText = "Este programa comprueba si una letra se encuentra en \
    una cadena escrita, por lo tanto, escriba: el nombre del programa, la cadena, y la letra, \
    todo separado por un espacio.";   
    std::cout << kHelpText << std::endl;
    exit(EXIT_SUCCESS);
  }
}

void Substring(const std::string& cadena, const int kPosicion, const int kLongitud) {
  for (int i = 0; i < kLongitud; i++) {
    std::cout << cadena[- 1 + kPosicion + i];
  }
}