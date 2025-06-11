#include <iostream>

int main() {
    double p1, p2, media;

    std::cout << "Digite a nota da primeira prova (P1): ";
    std::cin >> p1;

    std::cout << "Digite a nota da segunda prova (P2): ";
    std::cin >> p2;

    media = (p1 + 2 * p2) / 3;

    std::cout << "Média do aluno: " << media << std::endl;

    if (media >= 5.0) {
        std::cout << "Situação: Aprovado" << std::endl;
    } else {
        std::cout << "Situação: Reprovado" << std::endl;
    }

    return 0;
}