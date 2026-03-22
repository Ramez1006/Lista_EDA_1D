#include <iostream>
#include <string>

int main() {
    int lados;
    std::cout << "Quantidade de lados: ";
    std::cin >> lados;

    if (lados < 3) {
        std::cout << "Nao e um poligono valido." << std::endl;
        return 0;
    }

    double angulo = 360.0 / lados; // [cite: 45]
    std::string tipo;

    switch (lados) {
        case 3: tipo = "Triangulo"; break;
        case 4: tipo = "Quadrado"; break;
        case 5: tipo = "Pentagono"; break;
        case 6: tipo = "Hexagono"; break;
        default: tipo = "Poligono Desconhecido"; break; // [cite: 44]
    }

    std::cout << "Angulo: " << angulo << " graus" << std::endl;
    std::cout << "Tipo: " << tipo << std::endl;

    return 0;
}

//Usei std::string e switch. O switch é mais performático e legível que múltiplos if para comparações de valores inteiros fixos.