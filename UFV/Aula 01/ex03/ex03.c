// Receber 3 notas (float), calcular a média e mostrar na tela


# include <stdio.h>

int main(){
    float nota1, nota2, nota3;
    printf("Digite 3 notas de 0 a 10:\n");
    scanf("%f %f %f", &nota1, &nota2, &nota3);
    float media_notas = (nota1 + nota2 + nota3) / 3;
    printf("Media das notas: %f", media_notas);
    return 0;
}
