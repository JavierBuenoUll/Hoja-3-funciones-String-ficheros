/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @author Javier Bueno Calzadilla alu0101627922@ull.edu.es
  * @date 29/12/2023
  * @brief El programa consiste en crear de una cadena dada, una subcadena a partir de
  *        cierta posición y con determinada longitud.
  * @bug There are no known bugs
  */

#ifndef SUBSTRING_H
#define SUBSTRING_H

#include <iostream>

void Usage(int argc, char *argv[]);
bool EsSubstring(const std::string& cadena, const std::string& subcadena); 

#endif