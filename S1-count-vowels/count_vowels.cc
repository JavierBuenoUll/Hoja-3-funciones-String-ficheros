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

#include "count_vowels.h"
void Usage(int argc, char *argv[]) {
  if (argc == 1) {
    std::cout << argv[0] << ": Falta un parámetro." << std::endl;
    std::cout << "Pruebe " << argv[0] << " --help para más información" << std::endl;
    exit(EXIT_SUCCESS);
  }
  std::string parameter{argv[1]};
  if (parameter == "--help") {
    const std::string kHelpText = "Este programa calcula cuántas vocales tiene una palabra\
     asegurése de introducir el nombre del programa y la cadena de texto separados por un espacio.";
    std::cout << kHelpText << std::endl;
    exit(EXIT_SUCCESS);
  }
}

void CountVowels(const std::string& text) {
  int contador{0};
  for (char caracter : text) {
    switch (caracter) {
      case 'A':
      case 'E':
      case 'I':
      case 'O':
      case 'U':
      case 'a':
      case 'e':
      case 'o':
      case 'u':
      contador++;
      break;
    default:
      break;
    }
  }
  std::cout << "En " << text << " hay " << contador << " vocales.\n";
}