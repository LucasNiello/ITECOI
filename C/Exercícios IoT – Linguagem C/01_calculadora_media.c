// Inclui a biblioteca de entrada/saída padrão do C.
// Ela é necessária para usar scanf (ler dados do teclado)
// e printf (mostrar dados na tela).
#include <stdio.h>

// Toda execução de um programa em C começa pela função main().
int main() {
    // Declara quatro variáveis do tipo float (número decimal),
    // uma para cada nota que o usuário vai digitar.
    float n1, n2, n3, n4;

    // printf envia texto formatado para a tela (saída padrão).
    printf("Digite a 1a nota: ");
    // scanf lê um valor digitado pelo usuário (entrada padrão).
    // "%f" indica que estamos lendo um float, e "&n1" passa o
    // endereço de memória da variável para que o scanf possa
    // guardar o valor diretamente nela.
    scanf("%f", &n1);

    printf("Digite a 2a nota: ");
    scanf("%f", &n2);

    printf("Digite a 3a nota: ");
    scanf("%f", &n3);

    printf("Digite a 4a nota: ");
    scanf("%f", &n4);

    // Calcula a média somando as quatro notas e dividindo por 4.
    // Usamos "4.0f" (float) em vez de "4" para garantir que a divisão
    // seja feita com casas decimais, e não uma divisão inteira.
    float media = (n1 + n2 + n3 + n4) / 4.0f;

    // Mostra o resultado da média na tela.
    // "%.2f" formata o número com 2 casas decimais e "\n" pula linha.
    printf("Media: %.2f\n", media);

    // Estrutura condicional: verifica o valor da média
    // e decide qual mensagem de situação exibir.
    if (media >= 7.0f) {
        // Se a média for maior ou igual a 7, o aluno está aprovado.
        printf("Aprovado\n");
    } else if (media >= 5.0f) {
        // Se não foi aprovado, mas a média é maior ou igual a 5,
        // o aluno fica em recuperação.
        printf("Em Recuperacao\n");
    } else {
        // Se nenhuma das condições acima for verdadeira,
        // a média é menor que 5 e o aluno está reprovado.
        printf("Reprovado\n");
    }

    // Retorna 0 para o sistema operacional, indicando que
    // o programa terminou com sucesso (sem erros).
    return 0;
}
