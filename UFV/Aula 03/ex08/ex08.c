# include <stdio.h>

int main() {
    // valor máximo da prestação <= 0.3 * salário bruto
    float salario_bruto = 0;
    float valor_prestacao;

    while (salario_bruto >= 0) {
        printf("Digite o valor de seu salario bruto e o valor da prestacao, separados por espaco: ");
        scanf("%f %f", &salario_bruto, &valor_prestacao);

        if (salario_bruto < 0) {
            break;
        }

        if (valor_prestacao > 0.3 * salario_bruto) {
            printf("O emprestimo nao pode ser concedido\n");
        } else {
            printf("O emprestimo pode ser concedido\n");
        }
    }

    return 0;
}
