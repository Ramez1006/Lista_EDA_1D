#include <iostream>

int main() {
    int numero;
    std::cout << "Digite um numero: ";
    std::cin >> numero;

    // Lógica sequencial simples
    std::cout << "Antecessor: " << numero - 1 << std::endl;
    std::cout << "Sucessor: " << numero + 1 << std::endl;

    return 0;
}


//Evitamos criar variáveis desnecessárias para o antecessor e sucessor. Como o cálculo é simples,
// realizamos a operação diretamente no fluxo de saída, economizando memória.