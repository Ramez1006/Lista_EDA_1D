#include <iostream>

int main() {
    float velocidade;
    const float LIMITE = 80.0;
    const float VALOR_POR_KM = 7.0;

    std::cout << "Velocidade do carro: ";
    std::cin >> velocidade;

    if (velocidade > LIMITE) {
        float excesso = velocidade - LIMITE;
        float multa = excesso * VALOR_POR_KM;
        std::cout << "Voce foi multado! Valor: R$ " << multa << std::endl;
    }

    return 0;
}

//O cálculo deve considerar apenas a velocidade excedente.