#include <iostream>
#include <vector>

int main() {
    std::vector<int> numeros(10);

    std::cout << "Digite 10 numeros:" << std::endl;
    for (int i = 0; i < 10; i++) {
        std::cout << "Numero " << (i + 1) << ": ";
        std::cin >> numeros[i];
    }

    int busca;
    std::cout << "Digite o valor a ser buscado: ";
    std::cin >> busca;

    bool encontrado = false;
    for (int i = 0; i < static_cast<int>(numeros.size()); i++) {
        if (numeros[i] == busca) {
            std::cout << "Valor encontrado no indice " << i << std::endl;
            encontrado = true;
            break;
        }
    }

    if (!encontrado) {
        std::cout << "Valor nao encontrado no vetor." << std::endl;
    }

    return 0;
}
