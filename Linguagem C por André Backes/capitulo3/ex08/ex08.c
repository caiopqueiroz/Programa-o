# include <stdio.h>

int main() {
    float valor_celsius, valor_fahrenheit;
    printf("Digite uma temperatura em graus celsius: ");
    scanf("%f", &valor_celsius);

    // fahrenheit = celsius * (9 / 5) + 32
    valor_fahrenheit = valor_celsius * (9.0 / 5.0) + 32;
    printf("%.2f F", valor_fahrenheit);

    return 0;
}
