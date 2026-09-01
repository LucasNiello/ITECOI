#include <iostream>
#include <string>

struct Aluno {
    std::string nome;
    int matricula;
    float nota;
};

int main() {
    const int QTD_ALUNOS = 3;
    Aluno alunos[QTD_ALUNOS];

    for (int i = 0; i < QTD_ALUNOS; i++) {
        std::cout << "--- Aluno " << (i + 1) << " ---" << std::endl;

        std::cout << "Nome: ";
        std::getline(std::cin, alunos[i].nome);

        std::cout << "Matricula: ";
        std::cin >> alunos[i].matricula;

        std::cout << "Nota: ";
        std::cin >> alunos[i].nota;
        std::cin.ignore();
    }

    int indiceMaiorNota = 0;
    for (int i = 1; i < QTD_ALUNOS; i++) {
        if (alunos[i].nota > alunos[indiceMaiorNota].nota) {
            indiceMaiorNota = i;
        }
    }

    std::cout << std::endl << "Aluno com a maior nota:" << std::endl;
    std::cout << "Nome: " << alunos[indiceMaiorNota].nome << std::endl;
    std::cout << "Matricula: " << alunos[indiceMaiorNota].matricula << std::endl;
    std::cout << "Nota: " << alunos[indiceMaiorNota].nota << std::endl;

    return 0;
}
