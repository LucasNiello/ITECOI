#include <stdio.h>

int main() {
    int n;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    // "unsigned long long" existe tanto em C quanto em C++, então
    // o tipo do resultado do fatorial não precisou mudar.
    unsigned long long fatorial = 1;
    for (int i = 1; i <= n; i++) {
        fatorial *= i;
    }

    printf("%d! = %llu\n", n, fatorial);

    return 0;
}
