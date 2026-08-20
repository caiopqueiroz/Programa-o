// Fazendo a leitura de diferentes tipos de variáveis com a função scanf()
# include <stdio.h>
# include <stdlib.h>

int main(){
    int x, z;
    float y;
    // Fazendo a leitura de um valor inteiro e armazenando na variável x
    scanf("%d", &x);

    // Lendo um valor real e guardando em y
    scanf("%f", &y);

    // Lendo um valor inteiro e outro real usando espaço
    scanf("%d %f", &z, &y);

    // Mostrando na tela as variáveis x, y, z
    printf("%d  %d  %f\n", x, z, y);

    system("pause");
    return 0;
}
