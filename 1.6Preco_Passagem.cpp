#include <iostream>
#include <iomanip>

int main() {
    float distancia;
    std::cout << "Distancia da viagem (Km): ";
    std::cin >> distancia;

    float precoKm = (distancia <= 200) ? 0.50 : 0.45; // Operador ternário para elegância
    float total = distancia * precoKm;

    std::cout << "Preco da passagem: R$ " << std::fixed << std::setprecision(2) << total << std::endl;

    return 0;
}

//Usei o operador ternário. Como programador pleno,
// você busca reduzir a verbosidade do código quando a lógica de atribuição é simples.