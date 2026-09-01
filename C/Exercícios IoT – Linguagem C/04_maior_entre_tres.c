#include <stdio.h>

int main() {
    int a, b, c;

    printf("Digite o 1o numero: ");
    scanf("%d", &a);
    printf("Digite o 2o numero: ");
    scanf("%d", &b);
    printf("Digite o 3o numero: ");
    scanf("%d", &c);

    int maior = a;
    if (b > maior) maior = b;
    if (c > maior) maior = c;

    int menor = a;
    if (b < menor) menor = b;
    if (c < menor) menor = c;

    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);

    return 0;
}
