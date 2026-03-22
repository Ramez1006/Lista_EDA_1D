#include <iostream>

int main() {
    float a, b, c;
    std::cout << "Digite os três lados: ";
    std::cin >> a >> b >> c;

    if (a + b > c && a + c > b && b + c > a) {
        std::cout << "Podem formar um triangulo." << std::endl;
    } else {
        std::cout << "Nao podem formar um triangulo." << std::endl;
    }

    return 0;
}



//Para formar um triângulo, a soma de dois lados deve ser sempre maior que o terceiro.