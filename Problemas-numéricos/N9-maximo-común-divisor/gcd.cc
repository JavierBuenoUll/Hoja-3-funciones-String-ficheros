#include <iostream>

// Función para calcular el MCD utilizando el algoritmo de Euclides
int calcularMCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    // Solicitar entrada al usuario
    int num1, num2;
    std::cout << "Ingrese el primer número entero positivo: ";
    std::cin >> num1;
    std::cout << "Ingrese el segundo número entero positivo: ";
    std::cin >> num2;
    // Verificar que los números ingresados sean positivos
    if (num1 <= 0 || num2 <= 0) {
        std::cerr << "Por favor, ingrese dos números enteros positivos." << std::endl;
        return 1; // Salir con código de error
    }
    // Calcular y mostrar el MCD
    int mcd = calcularMCD(num1, num2);
    std::cout << "El máximo común divisor (MCD) de " << num1 << " y " << num2 << " es: " << mcd << std::endl;
    return 0;
}