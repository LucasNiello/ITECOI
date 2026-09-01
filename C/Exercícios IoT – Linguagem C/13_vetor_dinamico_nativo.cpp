#include <iostream>

int main() {
    int n;

    std::cout << "Digite o tamanho do array: ";
    std::cin >> n;

    int* array = new int[n];

    for (int i = 0; i < n; i++) {
        std::cout << "Elemento " << (i + 1) << ": ";
        std::cin >> array[i];
    }

    int soma = 0;
    for (int i = 0; i < n; i++) {
        soma += array[i];
    }

    std::cout << "Soma de todos os elementos: " << soma << std::endl;

    delete[] array;

    return 0;
}
