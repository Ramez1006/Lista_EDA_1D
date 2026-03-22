#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    // Definimos a semente do gerador de números aleatórios
    // O cast (unsigned) garante compatibilidade entre sistemas 32 e 64 bits
    srand((unsigned) time(0));

    // rand() % 6 gera um número entre 0 e 5
    int numeroComputador = rand() % 6;
    int palpite;

    cout << "Tente adivinhar o numero que pensei (0 a 5): ";
    cin >> palpite;

    if (palpite == numeroComputador) {
        cout << "Voce venceu!" << endl;
    } else {
        cout << "Voce perdeu! Eu pensei no " << numeroComputador << endl;
    }

    return 0;
}


//O código utiliza o fragmento solicitado para gerar números entre 0 e 5.

//O enunciado sugere rand() % 4 + 1 no fragmento , mas pede um número entre 0 e 5. Usei % 6 para cumprir o requisito do intervalo 0-5.