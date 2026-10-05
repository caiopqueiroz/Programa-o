# include <stdio.h>

int main() {
    int quantidade = 3;
    int numeros[quantidade];

    for (int contador = 0; contador < quantidade;   contador++) {

        printf("Digite um numero inteiro: ");
        scanf("%d", &numeros[contador]);
    }


    return 0;
}
