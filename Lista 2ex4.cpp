#include <iostream>
using namespace std;

int main() {
    float base, altura, area;

    cout << "Digite o valor da base do ret�ngulo: ";
    cin >> base;

    cout << "Digite o valor da altura do ret�ngulo: ";
    cin >> altura;

    area = base * altura;

    cout << "�rea do ret�ngulo: " << area << endl;

    if (area > 100) {
        cout << "Terreno grande" << endl;
    }

    return 0;
}