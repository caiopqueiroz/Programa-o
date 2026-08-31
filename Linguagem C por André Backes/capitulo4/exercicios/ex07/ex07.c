# include <stdio.h>

int main() {
    float valor;
    int estado;
    printf("Digite o valor do produto e o estado de destino:\n");
    printf("1 ) MG\n2 ) SP\n3 ) RJ\n4 ) MS\nDigite separado por espaco: ");
    scanf("%f %d", &valor, &estado);

    switch(estado) {
        case 1:
            // estado MG
            valor *= 1.07;
            break;
        case 2:
            // estado SP
            valor *= 1.12;
            break;
        case 3:
            // estado RJ
            valor *= 1.15;
            break;
        case 4:
            // estado MS
            valor *= 1.08;
            break;
        default:
            printf("ERRO!");
            valor = 0;
    }

    if (valor != 0) {
        printf("%.2f", valor);
    }

    return 0;
}
