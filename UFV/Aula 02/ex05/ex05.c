# include <stdio.h>

int main(){
    int velocidade_maxima, velocidade, multa;
    printf("Digite a velocidade maxima da via: ");
    scanf("%d", &velocidade_maxima);
    printf("Agora digite a sua velocidade: ");
    scanf("%d", &velocidade);
    // cálculo da multa recebida
    if (velocidade - velocidade_maxima > 0) {
        printf("\nVoce foi multado");

        if (velocidade - velocidade_maxima <= 10) {
            multa = 50;
        } else if (velocidade - velocidade_maxima <= 30) {
            multa = 100;
        } else {
            multa = 200;
        }

        printf("\nDeve pagar um total de %d reais\n", multa);
    } else {
        printf("\nVoce nao foi multado\n");
    }
    return 0;
}
