#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Digite três valores inteiros:\n";
    cin >> a >> b >> c;

    cout << "Maior valor(es): ";

    if (a >= b && a >= c) {
        cout << a << " ";
    }
    if (b >= a && b >= c && b != a) {
        cout << b << " ";
    }
    if (c >= a && c >= b && c != a && c != b) {
        cout << c;
    }

    cout << endl;
    return 0;
}