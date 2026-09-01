#include <iostream>

int main() {
    int a, b, c;

    std::cout << "Digite o 1o numero: ";
    std::cin >> a;
    std::cout << "Digite o 2o numero: ";
    std::cin >> b;
    std::cout << "Digite o 3o numero: ";
    std::cin >> c;

    int maior = a;
    if (b > maior) maior = b;
    if (c > maior) maior = c;

    int menor = a;
    if (b < menor) menor = b;
    if (c < menor) menor = c;

    std::cout << "Maior: " << maior << std::endl;
    std::cout << "Menor: " << menor << std::endl;

    return 0;
}
