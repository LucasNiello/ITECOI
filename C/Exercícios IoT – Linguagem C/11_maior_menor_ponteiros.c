#include <stdio.h>

void encontrarMaiorMenor(const int* vetor, int tamanho, int* max, int* min) {
    *max = vetor[0];
    *min = vetor[0];

    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] > *max) *max = vetor[i];
        if (vetor[i] < *min) *min = vetor[i];
    }
}

int main() {
    const int TAM = 6;
    int numeros[TAM];

    printf("Digite %d numeros inteiros:\n", TAM);
    for (int i = 0; i < TAM; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    int maior, menor;
    encontrarMaiorMenor(numeros, TAM, &maior, &menor);

    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);

    return 0;
}
