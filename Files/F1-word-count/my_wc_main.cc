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

int main(int argc, char *argv[]) { 
  Usage(argc, argv);
  const std::string nombre_archivo{argv[1]};
  std::ifstream archivo(nombre_archivo);
  if (!archivo) {
    std::cerr << "El nombre del archivo introducido no es correcto o está vacío, compruebe de nuevo'\n";
    return 1;
  }
  WordCount(archivo);
  return 0;
}