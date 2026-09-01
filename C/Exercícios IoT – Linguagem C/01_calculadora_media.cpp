#include <iostream>

int main() {
    float n1, n2, n3, n4;

    std::cout << "Digite a 1a nota: ";
    std::cin >> n1;
    std::cout << "Digite a 2a nota: ";
    std::cin >> n2;
    std::cout << "Digite a 3a nota: ";
    std::cin >> n3;
    std::cout << "Digite a 4a nota: ";
    std::cin >> n4;

    float media = (n1 + n2 + n3 + n4) / 4.0f;

    std::cout << "Media: " << media << std::endl;

    if (media >= 7.0f) {
        std::cout << "Aprovado" << std::endl;
    } else if (media >= 5.0f) {
        std::cout << "Em Recuperacao" << std::endl;
    } else {
        std::cout << "Reprovado" << std::endl;
    }

    return 0;
}
