// Este arquivo permanece em C++ (.cpp) porque usa HERANÇA
// (class Carro : public Veiculo) e POLIMORFISMO (funções virtuais
// com "virtual" e "override"). Esses recursos são exclusivos de
// linguagens orientadas a objetos como o C++; a linguagem C não tem
// classes, então não é possível representar herança nem polimorfismo
// da mesma forma (simulá-los em C exigiria ponteiros de função e
// perderia a clareza didática do exercício).
#include <iostream>

class Veiculo {
public:
    virtual void exibirInfo() {
        std::cout << "Este e um veiculo generico." << std::endl;
    }

    virtual ~Veiculo() {}
};

class Carro : public Veiculo {
private:
    int portas;

public:
    Carro(int qtdPortas) : portas(qtdPortas) {}

    void exibirInfo() override {
        std::cout << "Carro com " << portas << " portas." << std::endl;
    }
};

class Moto : public Veiculo {
private:
    int cilindradas;

public:
    Moto(int qtdCilindradas) : cilindradas(qtdCilindradas) {}

    void exibirInfo() override {
        std::cout << "Moto com " << cilindradas << " cilindradas." << std::endl;
    }
};

int main() {
    Carro carro(4);
    Moto moto(150);

    Veiculo* veiculo1 = &carro;
    Veiculo* veiculo2 = &moto;

    veiculo1->exibirInfo();
    veiculo2->exibirInfo();

    return 0;
}
