#include <iostream>
#include <algorithm> // para std::sort
#include <cmath>     // para std::abs

int main() {
    double a, b, c;

    std::cout << "Digite o valor de A: ";
    std::cin >> a;

    std::cout << "Digite o valor de B: ";
    std::cin >> b;

    std::cout << "Digite o valor de C: ";
    std::cin >> c;

    // Colocar os lados em ordem crescente
    double lados[3] = {a, b, c};
    std::sort(lados, lados + 3);

    // Verifica se formam um triângulo
    if (lados[0] + lados[1] > lados[2]) {
        double cat1 = lados[0], cat2 = lados[1], hipo = lados[2];

        // Comparação com tolerância para ponto flutuante
        if (std::abs((cat1 * cat1 + cat2 * cat2) - (hipo * hipo)) <= 0.0001) {
            std::cout << "É um triângulo retângulo." << std::endl;
        } else {
            std::cout << "É um triângulo, mas não é retângulo." << std::endl;
        }
    } else {
        std::cout << "Os valores não formam um triângulo." << std::endl;
    }

    return 0;
}