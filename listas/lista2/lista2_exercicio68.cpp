#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double salario = 520.00;
    double aumento = 1.5;
    int ano = 1995;

    cout << fixed << setprecision(2);
    cout << "Ano: " << ano << " - Salario: R$ " << salario << endl;

    for (ano = 1996; ano <= 2024; ano++) {
        salario += salario * (aumento / 100);
        cout << "Ano: " << ano << " - Salario: R$ " << salario << endl;
        aumento *= 2;
    }

    return 0;
}