#include <iostream>
#include <vector>

void encontrarMaiorMenor(const std::vector<int>& vetor, int tamanho, int* max, int* min) {
    *max = vetor[0];
    *min = vetor[0];

    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] > *max) *max = vetor[i];
        if (vetor[i] < *min) *min = vetor[i];
    }
}

int main() {
    const int TAM = 6;
    std::vector<int> numeros(TAM);

    std::cout << "Digite " << TAM << " numeros inteiros:" << std::endl;
    for (int i = 0; i < TAM; i++) {
        std::cout << "Numero " << (i + 1) << ": ";
        std::cin >> numeros[i];
    }

    int maior, menor;
    encontrarMaiorMenor(numeros, TAM, &maior, &menor);

    std::cout << "Maior valor: " << maior << std::endl;
    std::cout << "Menor valor: " << menor << std::endl;

    return 0;
}
