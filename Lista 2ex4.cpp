#include <iostream>
using namespace std;

int main() {
    float base, altura, area;

    cout << "Digite o valor da base do retângulo: ";
    cin >> base;

    cout << "Digite o valor da altura do retângulo: ";
    cin >> altura;

    area = base * altura;

    cout << "Área do retângulo: " << area << endl;

    if (area > 100) {
        cout << "Terreno grande" << endl;
    }

    return 0;
}