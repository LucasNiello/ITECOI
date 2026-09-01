#include <stdio.h>
#include <ctype.h>
#include <string.h>

// Em C não existe std::string; usamos um vetor de char (char[])
// terminado em '\0' para representar uma string.
void converterParaMaiusculas(char* texto) {
    for (int i = 0; texto[i] != '\0'; i++) {
        texto[i] = toupper((unsigned char)texto[i]);
    }
}

int main() {
    char frase[200];

    printf("Digite uma frase: ");
    // fgets lê a linha inteira (incluindo espaços) e evita
    // estouro de buffer, já que recebe o tamanho máximo do vetor.
    fgets(frase, sizeof(frase), stdin);
    // Remove o '\n' que o fgets deixa no final da string, se houver.
    frase[strcspn(frase, "\n")] = '\0';

    converterParaMaiusculas(frase);

    printf("Frase em maiusculas: %s\n", frase);

    return 0;
}
