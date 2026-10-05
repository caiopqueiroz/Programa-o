# include <stdio.h>

int main() {
    // teste: criando uma matriz 3 x 3

    int matriz[3][3];
    int numero_exibido = 1;

    for (int linha = 0; linha < 3; linha++) {

        for (int coluna = 0; coluna < 3; coluna++) {
            matriz[linha][coluna] = numero_exibido;

            printf("%d ", matriz[linha][coluna]);

            numero_exibido++;
        }
        printf("\n");
    }

    return 0;
}
