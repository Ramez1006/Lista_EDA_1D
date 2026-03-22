#include <iostream>

int main() {
    int idade;
    std::cout << "Digite sua idade: ";
    std::cin >> idade;

    if (idade >= 16) {
        std::cout << "Possui idade para ser eleitor no Brasil" << std::endl; // [cite: 20]
    } else {
        std::cout << "Nao possui idade para ser eleitor no Brasil" << std::endl; // [cite: 21]
    }

    return 0;
}

//Estrutura condicional simples.