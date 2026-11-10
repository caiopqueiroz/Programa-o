# include <stdio.h>
# include <math.h>

int main() {

    typedef struct {

        float x;
        float y;
    } pos;

    pos pontos[2];

    for (int contador = 0; contador < 2; contador++) {

        printf("Digite x e y do ponto %d: ", contador + 1);
        scanf("%f %f", &pontos[contador].x, &pontos[contador].y);
    }

    float distancia = sqrt(pow((pontos[0].x - pontos[1].x), 2) + pow((pontos[0].y - pontos[1].y), 2));

    printf("\nDistancia entre p1 e p2: %.3f", distancia);

    return 0;


}
