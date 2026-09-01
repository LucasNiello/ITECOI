#include <stdio.h>
#include <string.h>

struct Aluno {
    char nome[100];
    int matricula;
    float nota;
};

int main() {
    const int QTD_ALUNOS = 3;
    struct Aluno alunos[QTD_ALUNOS];

    for (int i = 0; i < QTD_ALUNOS; i++) {
        printf("--- Aluno %d ---\n", i + 1);

        printf("Nome: ");
        fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);
        alunos[i].nome[strcspn(alunos[i].nome, "\n")] = '\0';

        printf("Matricula: ");
        scanf("%d", &alunos[i].matricula);

        printf("Nota: ");
        scanf("%f", &alunos[i].nota);
        // Consome o '\n' deixado no buffer pelo scanf, para que o
        // próximo fgets não leia uma linha vazia.
        getchar();
    }

    int indiceMaiorNota = 0;
    for (int i = 1; i < QTD_ALUNOS; i++) {
        if (alunos[i].nota > alunos[indiceMaiorNota].nota) {
            indiceMaiorNota = i;
        }
    }

    printf("\nAluno com a maior nota:\n");
    printf("Nome: %s\n", alunos[indiceMaiorNota].nome);
    printf("Matricula: %d\n", alunos[indiceMaiorNota].matricula);
    printf("Nota: %.2f\n", alunos[indiceMaiorNota].nota);

    return 0;
}
