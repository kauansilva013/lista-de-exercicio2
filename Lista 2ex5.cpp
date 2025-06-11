#include <iostream>

int main() {
    double base, altura;

    std::cout << "Informe a base do retângulo: ";
    std::cin >> base;

    std::cout << "Informe a altura do retângulo: ";
    std::cin >> altura;

    double area = base * altura;

    std::cout << "Área do retângulo: " << area << std::endl;

    if (area > 100) {
        std::cout << "Terreno grande" << std::endl;
    } else {
        std::cout << "Terreno pequeno" << std::endl;
    }

    return 0;
}