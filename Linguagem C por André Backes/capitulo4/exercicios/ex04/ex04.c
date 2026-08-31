# include <stdio.h>

int main() {
    float salario, prestacao;
    printf("Digite o seu salario: R$");
    scanf("%f", &salario);
    printf("Digite o valor da prestacao a pagar: R$");
    scanf("%f", &prestacao);

    if (prestacao > 0.2 * salario) {
        printf("Emprestimo nao concedido");
    } else {
        printf("Emprestimo concedido");
    }

    return 0;
}
