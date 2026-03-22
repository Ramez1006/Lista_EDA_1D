#include <iostream>

int main() {
    int num;
    std::cout << "Digite um numero: ";
    std::cin >> num;

    if (num < 0) {
        std::cout << "O numero e negativo." << std::endl;
    } else if (num % 2 == 0) {
        std::cout << "O numero e par." << std::endl;
    } else {
        std::cout << "O numero e impar." << std::endl;
    }

    return 0;
}

//Utilizamos o operador de módulo % para verificar a paridade e uma estrutura if-else if para determinar se o número é negativo,
 //par ou ímpar. A ordem das condições é importante para garantir a correta classificação dos números.