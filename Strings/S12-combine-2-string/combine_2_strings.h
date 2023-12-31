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

#ifndef COMBINE_2_STRINGS_H
#define COMBINE_2_STRINGS_H

#include <iostream>
#include <string>

void Usage(int argc, char *argv[]);
std::string Combine2Strings(const std::string& palabra_1, const std::string& palabra_2);

#endif