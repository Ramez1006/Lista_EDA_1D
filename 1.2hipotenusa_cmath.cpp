#include <iostream>
#include <cmath> // Necessário para sqrt e pow 
#include <iomanip>

int main() {
    double catetoOposto, catetoAdjacente;
    std::cout << "Cateto Oposto: ";
    std::cin >> catetoOposto;
    std::cout << "Cateto Adjacente: ";
    std::cin >> catetoAdjacente;

    // hypot(x, y) é a forma mais precisa e moderna de calcular hipotenusa em C++
    double hipotenusa = std::hypot(catetoOposto, catetoAdjacente);

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Comprimento da hipotenusa: " << hipotenusa << std::endl;

    return 0;
}


//Embora pudéssemos usar sqrt(pow(a,2) + pow(b,2)),
 //a função std::hypot é otimizada para evitar overflow ou underflow durante o cálculo dos quadrados, sendo a escolha profissional.