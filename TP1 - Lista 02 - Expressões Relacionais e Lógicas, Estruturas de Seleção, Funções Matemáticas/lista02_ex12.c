/*
    2.12) Leia as coordenadas dos pontos P1 (x1, y1) e P2 (x2, y2) e calcule a distância entre P1 e P2. 
    d = (((x1 - x2)^2 +(y1 - y2)^2) ^1/2
*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("EXERCÍCIO 2.12\n");

    float x1 = 0, y1 = 0, x2 = 0, y2 = 0;

    printf("\nDigite a coordenada x do ponto P1: ");
    scanf("%f", &x1);

    printf("\nDigite a coordenada y do ponto P1: ");
    scanf("%f", &y1);

    printf("\nDigite a coordenada x do ponto P2: ");
    scanf("%f", &x2);

    printf("\nDigite a coordenada y do ponto P2: ");
    scanf("%f", &y2);

    float d = sqrt((pow(x1 - y1, 2)) - (pow(x2 - y2, 2)));

    printf("\nDistancia entre os pontos P1 (%.2f, %.2f) e P2 (%.2f, %.2f): %.2f", x1, y1, x2, y2, d);

    printf("\n\n");
}