#include <iostream>
#include <iomanip>  // Necessário para definir a precisão decimal

int main() {
    double densidade, raio, peso;

    // Solicitando os valores de densidade e raio ao usuário
    std::cout << "Digite o valor da densidade (D): ";
    std::cin >> densidade;

    std::cout << "Digite o valor do raio (R): ";
    std::cin >> raio;

    // Calculando o peso da esfera
    peso = densidade * 4 * 3.141516 * raio * raio / 3;

    // Definindo a precisão para 2 casas decimais e exibindo o resultado
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "O peso da esfera é: " << peso << std::endl;

    return 0;
}
