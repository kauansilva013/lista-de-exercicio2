#include <iostream>

int main() {
    double p1, p2_necessaria;

    std::cout << "Digite a nota da primeira prova (P1): ";
    std::cin >> p1;

    // Calcula a nota mínima necessária em P2 para média 5
    p2_necessaria = (5.0 * 3 - p1) / 2.0;

    std::cout << "Para ser aprovado com média 5, o aluno precisa tirar pelo menos "
              << p2_necessaria << " na segunda prova (P2)." << std::endl;

    return 0;
}