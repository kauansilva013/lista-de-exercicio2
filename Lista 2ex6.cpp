#include <iostream>

int main() {
    double peso, altura, relacao;

    std::cout << "Digite o peso da pessoa (em kg): ";
    std::cin >> peso;

    std::cout << "Digite a altura da pessoa (em metros): ";
    std::cin >> altura;

    if (altura <= 0) {
        std::cout << "Altura inv�lida." << std::endl;
        return 1;
    }

    relacao = peso / (altura * altura);

    std::cout << "Rela��o peso/altura�: " << relacao << std::endl;

    if (relacao < 20) {
        std::cout << "Abaixo do peso" << std::endl;
    } else if (relacao < 25) {
        std::cout << "Peso ideal" << std::endl;
    } else {
        std::cout << "Acima do peso" << std::endl;
    }

    return 0;
}