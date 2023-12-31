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

void Usage(int argc, char *argv[]) {
  if (argc != 3) {
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

std::string Combine2Strings(const std::string& palabra_1, const std::string& palabra_2) {
  size_t cadena_menor{0};
  if (palabra_1.length() == palabra_2.length()) {
    cadena_menor = (palabra_1.length());
  } else if (palabra_1.length() < palabra_2.length()) {
    cadena_menor = (palabra_1.length());
  } else {
    cadena_menor = (palabra_2.length());
  }
  std::string string_combined{""};
  for (size_t i = 0; i <= cadena_menor; i++) {
    string_combined += palabra_1[i];
    string_combined+= palabra_2[i];
  }
  return string_combined;
}