# include <stdio.h>

int main() {

    typedef struct {

        char nome[50];
        int idade;
        char pais[50];
    } cad;

    cad cadastro1;

    printf("Digite o nome: ");
    fgets(cadastro1.nome, 50, stdin);

    printf("Idade: ");
    scanf("%d", &cadastro1.idade);

    getchar();

    printf("Pais: ");
    fgets(cadastro1.pais, 50, stdin);

    printf("Nome e %s, mora em %s e tem %d anos",  cadastro1.nome, cadastro1.pais, cadastro1.idade);

    return 0;
}
