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

#include "substring-involucrado.h"
void Usage(int argc, char *argv[]) {
  if (argc != 3) {
    std::cout << argv[0] << ": Ha colocado un número incorrecto de parámetros." << std::endl;
    std::cout << "Pruebe " << argv[0] << " --help para más información" << std::endl;
    exit(EXIT_SUCCESS);
  }
  std::string parameter{argv[1]};
  if (parameter == "--help") {
    const std::string kHelpText = "Este programa comprueba si una cadena pertenece a otra más grande \
    para ello escriba el nombre del programa, seguido de la cadena grande y la subcadena, \
    todo separado por 1 espacio.";
    std::cout << kHelpText << std::endl;
    exit(EXIT_SUCCESS);
  }
}

bool EsSubstring(const std::string& cadena, const std::string& subcadena) {
  // Encuentra la posición de la segunda cadena en la primera
  size_t found = cadena.find(subcadena);
  // Si la posición es diferente de std::string::npos, entonces es una subcadena
  return found != std::string::npos;
}