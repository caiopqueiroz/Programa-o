# include <stdio.h>

int main() {

    // 3 produtos estocados em 3 armazéns de uma empresa

    // cada produto -> 1 coluna

    // cada armazém -> 1 linha

    // o elemento da matriz representa a quantidade do produto que existe no determinado armazém

    // o preço de cada produto deve ser lido

    float precos[3];

    for (int contador = 0; contador < 3; contador++) {

        printf("Digite o preco do produto %d: ", contador + 1);
        scanf("%f", &precos[contador]);
    }

    // ler os valores de cada quantidade de cada produto em cada armazém -> preencher a matriz

    int matriz[3][3];

    for (int linha = 0; linha < 3; linha++) {

        printf("\nArmazem %d\n", linha + 1);

        for (int coluna = 0; coluna < 3; coluna++) {

            printf("Digite a quantidade do produto %d: ", coluna + 1);
            scanf("%d", &matriz[linha][coluna]);
        }
    }

    // quantos produtos estão armazenados em cada armazém?

    int total_produtos_armazem[3] = {0};

    for (int linha = 0; linha < 3; linha++) {

        for (int coluna = 0; coluna < 3; coluna++) {

            total_produtos_armazem[linha] += matriz[linha][coluna];
        }
    }

    printf("\n");
    for (int contador = 0; contador < 3; contador++) {

        printf("|%d\t", total_produtos_armazem[contador]);
    }

    // qual armazém possuiu mais do produto 2?

    int total_produto2_armazem[3] = {0};

    for (int linha = 0; linha < 3; linha++) {

        for (int coluna = 0; coluna < 3; coluna++) {

            if (coluna == 1) {

                total_produto2_armazem[linha] = matriz[linha][coluna];
            }
        }
    }

    int maior = 0;
    int armazem_mais2 = 0;

    for (int contador = 0; contador < 3; contador++) {

        if (contador == 0) {

            maior = total_produto2_armazem[contador];
            armazem_mais2 = 1;
        } else {

            if (total_produto2_armazem[contador] > maior) {

                maior = total_produto2_armazem[contador];
                armazem_mais2 = contador + 1;
            }
        }
    }

    printf("\n\nO armazem %d tem mais do produto 2\n", armazem_mais2);

    // valor total do estoque em cada armazem

    // valor total = somatorio de (estoque * preço)

    int total_tipo_produto[3] = {0};
    int total_produto = 0;

    for (int coluna = 0; coluna < 3; coluna++) {

        for (int linha = 0; linha < 3; linha++) {

            total_produto += matriz[linha][coluna];
        }

        total_tipo_produto[coluna] = total_produto;
        total_produto = 0;
    }

    printf("\n");
    for (int contador = 0; contador < 3; contador++) {

        printf("|%.2f\t", (total_tipo_produto[contador] * precos[contador]));
    }

    return 0;
}
