#include <iostream>

int main() {
    double lado1, lado2, lado3;

    std::cout << "Digite o primeiro lado: ";
    std::cin >> lado1;

    std::cout << "Digite o segundo lado: ";
    std::cin >> lado2;

    std::cout << "Digite o terceiro lado: ";
    std::cin >> lado3;

    // Verifica��o da exist�ncia do tri�ngulo
    if ((lado1 + lado2 > lado3) &&
        (lado1 + lado3 > lado2) &&
        (lado2 + lado3 > lado1)) {

        std::cout << "Os valores formam um tri�ngulo. ";

        // Classifica��o
        if (lado1 == lado2 && lado2 == lado3) {
            std::cout << "Tipo: Equil�tero" << std::endl;
        } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
            std::cout << "Tipo: Is�sceles" << std::endl;
        } else {
            std::cout << "Tipo: Escaleno" << std::endl;
        }

    } else {
        std::cout << "Os valores n�o formam um tri�ngulo." << std::endl;
    }

    return 0;
}