/*
    Parte 08 - Exerc�cio 08
    Crie a fun��o distancia que recebe os valores (x1, y1) e (x2, y2), 
    que representam pontos em um plano cartesiano, e retorna a dist�ncia euclidiana entre esses pontos. 
    Na fun��o main, leia esses valores e chame a fun��o implementada.
*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

float distancia (float x1, float y1, float x2, float y2)
{
    float d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("\nDist�ncia entre os pontos P1 (%.2f, %.2f) e P2 (%.2f, %.2f): ", x1, y1, x2, y2);
    
    return d;
}

int main()
{
    setlocale(LC_ALL, "");
    printf("PARTE 08 - EXERC�CIO 08\n");

    float x1 = 0, y1 = 0, x2 = 0, y2 = 0;

    printf("\nDigite a coordenada x do ponto P1: ");
    scanf("%f", &x1);

    printf("Digite a coordenada y do ponto P1: ");
    scanf("%f", &y1);

    printf("\nDigite a coordenada x do ponto P2: ");
    scanf("%f", &x2);

    printf("Digite a coordenada y do ponto P2: ");
    scanf("%f", &y2);

    float d = distancia(x1, y1, x2, y2);

    printf("%.2f", d);
    
    printf("\n\n");
}