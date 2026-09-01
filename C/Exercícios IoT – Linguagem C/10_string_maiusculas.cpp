#include <iostream>
#include <string>
#include <cctype>

void converterParaMaiusculas(std::string& texto) {
    for (char& c : texto) {
        c = std::toupper(static_cast<unsigned char>(c));
    }
}

int main() {
    std::string frase;

    std::cout << "Digite uma frase: ";
    std::getline(std::cin, frase);

    converterParaMaiusculas(frase);

    std::cout << "Frase em maiusculas: " << frase << std::endl;

    return 0;
}
