# include <stdio.h>

int main() {

    // struct para datas - dia, mês e ano

    typedef struct {

        int dia;
        int mes;
        int ano;
    } data;

    int total = 3;

    data datas[total];

    for (int contador = 0; contador < total; contador++) {

        printf("Digite uma data no formato dia mes ano: ");
        scanf("%d %d %d", &datas[contador].dia, &datas[contador].mes, &datas[contador].ano);
    }

    for (int contador = 0; contador < total; contador++) {

        printf("\n%d/%d/%d", datas[contador].dia, datas[contador].mes, datas[contador].ano);
    }

    return 0;
}
