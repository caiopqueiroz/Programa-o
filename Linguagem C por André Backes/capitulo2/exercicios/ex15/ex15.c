# include <stdio.h>

int main(){
    char letra;
    int numero;
    float valor;
    printf("Digite uma letra, um numero inteiro e um valor real, nessa ordem, separados por espaco: ");
    scanf("%c %d %f", &letra, &numero, &valor);
    printf("%c %d %f\n", letra, numero, valor);
    printf("\t%c\t%d\t%f", letra, numero, valor);
    printf("\n%c\n%d\n%f", letra, numero, valor);
    return 0;
}
