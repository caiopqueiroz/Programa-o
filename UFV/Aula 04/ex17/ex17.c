# include <stdio.h>

int main() {
    int quantidade = 10;
    float alturas[quantidade];
    float soma = 0;

    for (int contador = 0; contador < quantidade; contador++) {

        printf("Digite a altura de um atleta em metros: ");
        scanf("%f", &alturas[contador]);

        soma += alturas[contador];
    }

    float media = soma / quantidade;

    for (int contador =  0; contador < quantidade; contador++) {

        if (alturas[contador] > media) {
            printf("%.2f ", alturas[contador]);
        }
    }

    return 0;
}
