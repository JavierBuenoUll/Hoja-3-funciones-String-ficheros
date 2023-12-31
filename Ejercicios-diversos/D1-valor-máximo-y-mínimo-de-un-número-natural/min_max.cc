/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @author Javier Bueno Calzadilla alu0101627922@ull.edu.es
  * @date 18/11/2023
  * @brief El programa consiste en mostrar el digito máximo y mínimo de un
  * número
  * @bug There are no known bugs
  */

#include <iostream>
#include "min_max.h"
void Usage(int argc, char *argv[]) {
  if (argc != 2) {
    std::cout << argv[0] << ": Falta un número natural como parámetro,  introduzca solo uno, por favor" << std::endl;
    std::cout << "Pruebe " << argv[0] << " --help para más información" << std::endl;
    exit(EXIT_SUCCESS);
  }
  std::string parameter{argv[1]};
  if (parameter == "--help") {
    const std::string kHelpText = "Este programa calcula el dígito máximo,  y mínimo de un solo número, que el usuario \
ha de introducir por línea de comandos para la ejecución del programa";
    std::cout << kHelpText << std::endl;
    exit(EXIT_SUCCESS);
  }
}

int Digito_Maximo(int numero) {
  int digito = 0;
  int digito_previo = 0;
  int digito_maximo = 0;
  int numero_inicial = numero;
  while (numero_inicial > 0) {
    numero = numero_inicial;
    numero = numero % 10;
    digito = numero;
    if (digito == 9) {
      digito_maximo = 9;
      return digito_maximo;
    }
    if (digito >= digito_previo) {
      digito_maximo = digito;
    }
    digito_previo = digito;
    numero_inicial /= 10;
  }
  return digito_maximo;
}

int Digito_Minimo(int numero) {
  int digito = 0;
  int digito_previo = 9;
  int digito_minimo = 0;
  int numero_inicial = numero;
  while (numero_inicial > 0) {
    numero = numero_inicial;
    numero = numero % 10; 
    digito = numero;
    if (digito == 0) {
      digito_minimo = 0;
      return digito_minimo;
    }
    if (digito <= digito_previo) {
      digito_minimo = digito;
    }   
    digito_previo = digito;
    numero_inicial /= 10; 
  }
  return digito_minimo;
}
