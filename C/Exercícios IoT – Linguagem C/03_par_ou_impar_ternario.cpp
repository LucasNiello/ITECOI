#include <iostream>
#include <string>

int main() {
    int numero;

    std::cout << "Digite um numero inteiro: ";
    std::cin >> numero;

    std::string resultado = (numero % 2 == 0) ? "par" : "impar";

    std::cout << "O numero " << numero << " e " << resultado << std::endl;

    return 0;
}
