# include <stdio.h>

int main() {

    // nome, endereço e telefone

    typedef struct {

        char nome[50];
        char endereco[50];
        int telefone;
    } cad;

    int total = 5;

    cad cadastros[total];

    for (int contador = 0; contador < total; contador++) {

        printf("Digite o nome da pessoa %d: ", contador + 1);
        fgets(cadastros[contador].nome, 50, stdin);

        printf("Endereco: ");
        fgets(cadastros[contador].endereco, 50, stdin);

        printf("Telefone: ");
        scanf("%d", &cadastros[contador].telefone);

        getchar();
    }

    // exibir nome e telefone

    for (int contador = 0; contador < total; contador++) {

        printf("\n%s%d", cadastros[contador].nome, cadastros[contador].telefone);
    }

    return 0;
}
