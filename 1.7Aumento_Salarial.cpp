#include <iostream>

int main() {
    float salario;
    std::cout << "Salario atual: ";
    std::cin >> salario;

    if (salario > 1250.00) {
        salario += (salario * 0.10); // Aumento de 10%
    } else {
        salario += 15.00; // Aumento fixo de R$ 15
    }

    std::cout << "Novo salario: R$ " << salario << std::endl;

    return 0;
}

//Regras diferentes para salários acima ou abaixo de R$ 1.250,00.