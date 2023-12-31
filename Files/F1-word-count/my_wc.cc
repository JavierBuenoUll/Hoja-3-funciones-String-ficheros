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
#include "my_wc.h"
#include <fstream> 
#include <string>
#include <sstream>

void Usage(int argc, char *argv[]) {
  if (argc != 2) {
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

void WordCount(std::istream& imput) {
  int lineas = 0;
  int palabras = 0;
  int letras = 0;
  std::string linea = "";
  while (std::getline(imput, linea)) {
    lineas++;
    letras+= linea.length();
    std::istringstream stream(linea);
    std::string palabra;
    while (stream >> palabra) {
      palabras++;
    }
  }
  std::cout << "Hay " << lineas << " lineas.\n" << "Hay " << palabras << " palabras.\n" 
            << "Y Hay " << letras << " letras."<< std::endl;
}