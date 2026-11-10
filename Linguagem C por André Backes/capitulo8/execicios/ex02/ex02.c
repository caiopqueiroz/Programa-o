# include <stdio.h>
# include <math.h>

int main() {

    typedef struct {

        float x;
        float y;
    } pos;

    pos ponto;

    printf("Digite as coordenadas x e y: ");
    scanf("%f %f", &ponto.x, &ponto.y);

    printf("(%.1f, %.1f)",  ponto.x, ponto.y);

    float distancia = sqrt(pow(ponto.x, 2) + pow(ponto.y, 2));

    printf("\nDistancia do ponto ate a origem: %.1f", distancia);

    return 0;
}
