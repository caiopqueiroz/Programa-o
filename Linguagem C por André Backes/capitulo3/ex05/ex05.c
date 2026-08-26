# include <stdio.h>

int main() {
    int idade, ano_atual;
    printf("Digite sua idade e o ano atual, nessa ordem: ")
;
    scanf("%d %d", &idade, &ano_atual);
    // ano_atual - idade
    printf("Ano de nascimento: %d", (ano_atual - idade));
    return 0;
}
