#include <iostream>

int main() {
    double celsius;

    std::cout << "Digite a temperatura em Celsius: ";
    std::cin >> celsius;

    double fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    double kelvin = celsius + 273.15;

    std::cout << celsius << " C equivale a " << fahrenheit << " F" << std::endl;
    std::cout << celsius << " C equivale a " << kelvin << " K" << std::endl;

    return 0;
}
