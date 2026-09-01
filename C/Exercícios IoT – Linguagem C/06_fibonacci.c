#include <stdio.h>

int main() {
    int n;

    printf("Quantos termos da sequencia de Fibonacci deseja gerar? ");
    scanf("%d", &n);

    long long anterior = 0, atual = 1;

    printf("Sequencia de Fibonacci: ");
    for (int i = 0; i < n; i++) {
        printf("%lld ", anterior);
        long long proximo = anterior + atual;
        anterior = atual;
        atual = proximo;
    }
    printf("\n");

    return 0;
}
