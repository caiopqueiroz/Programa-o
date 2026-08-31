# include <stdio.h>

int main() {
    float altura;
    char sexo;
    float peso_ideal;
    printf("Digite a sua altura em metros e e seu sexo (M/F): ");
    scanf("%f %c", &altura, &sexo);

    switch(sexo) {
        case 'M':
            peso_ideal = (72.7 * altura) - 58;
        case 'F':
            peso_ideal = (62.1 * altura) - 44.7;
    }

    printf("\n%.2f kg", peso_ideal);

    return 0;
}
