# include <stdio.h>

int main() {
    int numero1, numero2, numero3, media;
    float resultado;

    do {
        printf("Digite 3 numeros inteiros positivos: ");
        scanf("%d %d %d", &numero1, &numero2, &numero3);
    } while ((numero1 < 0) || (numero2 < 0) || (numero3 < 0));

    printf("Escolha uma media para ser calculada:\n1 ) Geometrica\n2 ) Ponderada\n3 ) Harmonica\n4 ) Aritmetica\n");
    scanf("%d", &media);

    switch(media) {
        case 1:
            resultado = numero1 * numero2 * numero3;
            break;
        case 2:
            resultado = numero1 + (2 * numero2) + (3 * numero3) / 6.0;
            break;
        case 3:
            resultado = 1.0 / (1.0 / (float) numero1) + (1.0 / (float) numero2) + (1.0 / (float) numero3);
            break;
        case 4:
            resultado = (numero1 + numero2 + numero3) / 3.0;
            break;
    }

    printf("%.2f", resultado);

    return 0;
}
