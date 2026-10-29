# include <stdio.h>

int main() {

    printf("-- SUPER CALCULADORA --\n");

    float valor1;
    float valor2;

    printf("Digite dois numeros reais: ");
    scanf("%f %f", &valor1, &valor2);

    int comando = 0;

    do {

        printf("\n-- MENU --\n1 ) Adicao\n2 ) Subtracao\n3 ) Multiplicao\n4 ) Divisao\n");
        printf("Opcao: ");
        scanf("%d", &comando);
    } while ((comando > 4) || (comando  < 1));

    printf("\n");

    switch (comando) {

    case 1:

        printf("%.1f + %.1f = %.1f", valor1, valor2, (valor1 + valor2));

        break;
    case 2:

        printf("%.1f - %.1f = %.1f", valor1, valor2, (valor1 - valor2));

        break;
    case 3:

        printf("%.1f x %.1f = %.1f", valor1, valor2, (valor1 * valor2));

        break;
    default:

        if (valor2 != 0)  {

            printf("%.1f / %.1f = %.1f", valor1, valor2, (valor1 / valor2));
        } else {

            printf("Impossivel dividir por 0");
        }
    }

    return 0;
}
