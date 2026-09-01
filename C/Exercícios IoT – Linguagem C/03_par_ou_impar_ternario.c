#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    // "numero % 2" calcula o resto da divisão de numero por 2 (operador módulo).
    // Se o resto for 0, o número é par; caso contrário, é ímpar.
    // O operador ternário "condição ? valor_se_verdadeiro : valor_se_falso"
    // funciona como um if/else resumido em uma linha só.
    // Em C não existe std::string, então usamos um ponteiro para uma
    // string literal (const char*) para guardar "par" ou "impar".
    const char* resultado = (numero % 2 == 0) ? "par" : "impar";

    printf("O numero %d e %s\n", numero, resultado);

    return 0;
}
