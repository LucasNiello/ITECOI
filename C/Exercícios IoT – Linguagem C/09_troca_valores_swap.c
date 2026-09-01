#include <stdio.h>

// Em C não existem referências (int&), só ponteiros. Por isso a
// versão original com "trocarReferencia" foi removida: em C, a
// única forma de uma função alterar uma variável do código que a
// chamou é recebendo o endereço dela por ponteiro.
void trocarPonteiro(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10, y = 20;

    printf("Antes (ponteiros): x = %d, y = %d\n", x, y);
    trocarPonteiro(&x, &y);
    printf("Depois (ponteiros): x = %d, y = %d\n", x, y);

    return 0;
}
