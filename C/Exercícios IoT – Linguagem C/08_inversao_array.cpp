#include <iostream>

int main() {
    const int TAM = 5;
    int array[TAM];

    std::cout << "Digite " << TAM << " elementos inteiros:" << std::endl;
    for (int i = 0; i < TAM; i++) {
        std::cout << "Elemento " << (i + 1) << ": ";
        std::cin >> array[i];
    }

    int inicio = 0, fim = TAM - 1;
    while (inicio < fim) {
        int temp = array[inicio];
        array[inicio] = array[fim];
        array[fim] = temp;
        inicio++;
        fim--;
    }

    std::cout << "Array invertido: ";
    for (int i = 0; i < TAM; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
