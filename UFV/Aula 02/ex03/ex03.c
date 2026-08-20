# include <stdio.h>

int main(){
    float capital_investido, porcentagem_juros;
    int tempo = 1;
    printf("Digite o valor do capital investido: R$");
    scanf("%f", &capital_investido);
    printf("Agora digite a porcentagem de juros: ");
    scanf("%f", &porcentagem_juros);
    float montante_final = capital_investido * (1 + porcentagem_juros);
    printf("\nO seu montante final depois de 1 ano ira ser R$%f", montante_final);
    return 0;
}
