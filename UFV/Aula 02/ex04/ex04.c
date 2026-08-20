# include <stdio.h>

int main(){
    // pão de sal: 10 centavos
    // pão doce: 15 centavos
    float valor_pao = 0.1;
    float valor_pao_doce = 0.15;
    int paes, tipo_pao;
    float valor_final;
    printf("Digite a quantidade de paes que ira comprar: ");
    scanf("%d", &paes);
    printf("Qual tipo de pao? (1 para sal/ 2 para doce): ");
    scanf("%d", &tipo_pao);
    switch(tipo_pao){
        case 1:
            valor_final = valor_pao * paes;
            printf("\nComprando %d paes de sal voce deve pagar R$%f", paes, valor_final);
            break;
        case 2:
            valor_final = valor_pao_doce * paes;
            printf("\nComprando %d paes doces voce deve pagar R$%f", paes, valor_final);
            break;
    }
    return 0;
}
