#include <stdio.h>

int main() {
    const int TAM = 5;
    int array[TAM];

    printf("Digite %d elementos inteiros:\n", TAM);
    for (int i = 0; i < TAM; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    int inicio = 0, fim = TAM - 1;
    while (inicio < fim) {
        int temp = array[inicio];
        array[inicio] = array[fim];
        array[fim] = temp;
        inicio++;
        fim--;
    }

    printf("Array invertido: ");
    for (int i = 0; i < TAM; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
