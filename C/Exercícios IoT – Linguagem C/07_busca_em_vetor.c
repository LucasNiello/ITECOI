#include <stdio.h>
#include <stdbool.h>

int main() {
    int numeros[10];

    printf("Digite 10 numeros:\n");
    for (int i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    int busca;
    printf("Digite o valor a ser buscado: ");
    scanf("%d", &busca);

    bool encontrado = false;
    for (int i = 0; i < 10; i++) {
        if (numeros[i] == busca) {
            printf("Valor encontrado no indice %d\n", i);
            encontrado = true;
            break;
        }
    }

    if (!encontrado) {
        printf("Valor nao encontrado no vetor.\n");
    }

    return 0;
}
