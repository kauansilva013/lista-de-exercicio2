#include <iostream>

int main() {
    double lado1, lado2, lado3;

    std::cout << "Digite o primeiro lado: ";
    std::cin >> lado1;

    std::cout << "Digite o segundo lado: ";
    std::cin >> lado2;

    std::cout << "Digite o terceiro lado: ";
    std::cin >> lado3;

    // Verificação da existência do triângulo
    if ((lado1 + lado2 > lado3) &&
        (lado1 + lado3 > lado2) &&
        (lado2 + lado3 > lado1)) {

        std::cout << "Os valores formam um triângulo. ";

        // Classificação
        if (lado1 == lado2 && lado2 == lado3) {
            std::cout << "Tipo: Equilátero" << std::endl;
        } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
            std::cout << "Tipo: Isósceles" << std::endl;
        } else {
            std::cout << "Tipo: Escaleno" << std::endl;
        }

    } else {
        std::cout << "Os valores não formam um triângulo." << std::endl;
    }

    return 0;
}