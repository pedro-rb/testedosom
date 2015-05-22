#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int x, y;
}Ponto2D;


int main()
{

    Ponto2D ponto;

   printf("Digite o valor da coordenada X:");
   scanf("%d", &ponto.x);
   printf("Digite o valor da coordenada Y:");
   scanf("%d", &ponto.y);

   printf("As coordenadas do seu ponto sao:(%d,%d)", ponto.x, ponto.y);


    return 0;
}
