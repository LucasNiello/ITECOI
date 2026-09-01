#include <iostream>

int main() {
    int n;

    std::cout << "Quantos termos da sequencia de Fibonacci deseja gerar? ";
    std::cin >> n;

    long long anterior = 0, atual = 1;

    std::cout << "Sequencia de Fibonacci: ";
    for (int i = 0; i < n; i++) {
        std::cout << anterior << " ";
        long long proximo = anterior + atual;
        anterior = atual;
        atual = proximo;
    }
    std::cout << std::endl;

    return 0;
}
