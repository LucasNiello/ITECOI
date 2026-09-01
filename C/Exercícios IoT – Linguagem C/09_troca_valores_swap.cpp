#include <iostream>

void trocarPonteiro(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void trocarReferencia(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 20;

    std::cout << "Antes (ponteiros): x = " << x << ", y = " << y << std::endl;
    trocarPonteiro(&x, &y);
    std::cout << "Depois (ponteiros): x = " << x << ", y = " << y << std::endl;

    int p = 100, q = 200;

    std::cout << "Antes (referencias): p = " << p << ", q = " << q << std::endl;
    trocarReferencia(p, q);
    std::cout << "Depois (referencias): p = " << p << ", q = " << q << std::endl;

    return 0;
}
