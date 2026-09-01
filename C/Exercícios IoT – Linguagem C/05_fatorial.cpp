#include <iostream>

int main() {
    int n;

    std::cout << "Digite um numero inteiro positivo: ";
    std::cin >> n;

    unsigned long long fatorial = 1;
    for (int i = 1; i <= n; i++) {
        fatorial *= i;
    }

    std::cout << n << "! = " << fatorial << std::endl;

    return 0;
}
