#include <iostream>
#include <string>

class ContaBancaria {
private:
    std::string titular;
    double saldo;

public:
    ContaBancaria(std::string nomeTitular, double saldoInicial) {
        titular = nomeTitular;
        saldo = saldoInicial;
    }

    void depositar(double valor) {
        if (valor <= 0) {
            std::cout << "Valor de deposito invalido." << std::endl;
            return;
        }
        saldo += valor;
        std::cout << "Deposito de " << valor << " realizado com sucesso." << std::endl;
    }

    void sacar(double valor) {
        if (valor <= 0) {
            std::cout << "Valor de saque invalido." << std::endl;
            return;
        }
        if (valor > saldo) {
            std::cout << "Saque bloqueado: saldo insuficiente." << std::endl;
            return;
        }
        saldo -= valor;
        std::cout << "Saque de " << valor << " realizado com sucesso." << std::endl;
    }

    void exibirSaldo() {
        std::cout << "Titular: " << titular << " | Saldo atual: " << saldo << std::endl;
    }
};

int main() {
    ContaBancaria conta("Lucas", 500.0);

    conta.exibirSaldo();
    conta.depositar(200.0);
    conta.sacar(1000.0);
    conta.sacar(300.0);
    conta.exibirSaldo();

    return 0;
}
