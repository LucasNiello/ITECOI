#include <stdio.h>

int main() {
    double celsius;

    printf("Digite a temperatura em Celsius: ");
    scanf("%lf", &celsius);

    double fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    double kelvin = celsius + 273.15;

    printf("%.2f C equivale a %.2f F\n", celsius, fahrenheit);
    printf("%.2f C equivale a %.2f K\n", celsius, kelvin);

    return 0;
}
