#include <iostream>
#include <string>
#include <cctype>  // Para std::toupper
#include <cmath>

int main() {
    double peso, altura, relacao;
    char sexo;

    std::cout << "Digite o peso (em kg): ";
    std::cin >> peso;

    std::cout << "Digite a altura (em metros): ";
    std::cin >> altura;

    std::cout << "Digite o sexo (M para masculino, F para feminino): ";
    std::cin >> sexo;
    sexo = std::toupper(sexo); // Converte para mai�sculo

    if (altura <= 0) {
        std::cout << "Altura inv�lida." << std::endl;
        return 1;
    }

    relacao = peso / (altura * altura);

    std::cout << "Rela��o peso/altura�: " << relacao << std::endl;

    if (sexo == 'F') {
        if (relacao < 19)
            std::cout << "Abaixo do peso" << std::endl;
        else if (relacao < 24)
            std::cout << "Peso ideal" << std::endl;
        else
            std::cout << "Acima do peso" << std::endl;
    } else if (sexo == 'M') {
        if (relacao < 20)
            std::cout << "Abaixo do peso" << std::endl;
        else if (relacao < 25)
            std::cout << "Peso ideal" << std::endl;
        else
            std::cout << "Acima do peso" << std::endl;
    } else {
        std::cout << "Sexo inv�lido. Use M ou F." << std::endl;
    }

    return 0;
}