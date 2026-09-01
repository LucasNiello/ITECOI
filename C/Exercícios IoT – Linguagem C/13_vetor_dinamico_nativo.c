#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Digite o tamanho do array: ");
    scanf("%d", &n);

    // Em C, alocação dinâmica é feita com malloc (não existe "new"),
    // e é preciso liberar depois com free (não existe "delete").
    int* array = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    int soma = 0;
    for (int i = 0; i < n; i++) {
        soma += array[i];
    }

    printf("Soma de todos os elementos: %d\n", soma);

    free(array);

    return 0;
}
