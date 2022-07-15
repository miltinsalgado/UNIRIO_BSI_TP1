/*
    Parte 08 - Exerc�cio 09
    Crie a fun��o perimetro que recebe como par�metros os valores (x1, y1), (x2, y2) e (x3, y3), 
    que representam pontos de um tri�ngulo, e retorna o per�metro desse tri�ngulo. 
    Caso os 3 pontos n�o formem um tri�ngulo, retorne zero. 
    Na fun��o main, leia esses valores e chame a fun��o implementada. 
    Dica: use a fun��o distancia.
*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

float distancia (float xa, float ya, float xb, float yb)
{
    float d = sqrt(pow(xa - xb, 2) + pow(ya - yb, 2));
    return d;
}

float perimetro (float x1, float y1, float x2, float y2, float x3, float y3)
{
    float a = distancia(x1, y1, x2, y2);
    float b = distancia(x2, y2, x3, y3);
    float c = distancia(x1, y1, x3, y3);

    float p = 0;

    if (a + b > c && a + c > b && b + c > a)
        p = a + b + c;

    printf("\nPer�metro do tri�ngulo de lados %.2f, %.2f e %.2f: ", a, b, c);

    return p;
}

int main ()
{
    setlocale(LC_ALL, "");
    printf("PARTE 08 - EXERC�CIO 09\n");

    float x1 = 0, y1 = 0, x2 = 0, y2 = 0, x3 = 0, y3 = 0;

    printf("\nDigite a coordenada x do ponto P1: ");
    scanf("%f", &x1);

    printf("Digite a coordenada y do ponto P1: ");
    scanf("%f", &y1);

    printf("\nDigite a coordenada x do ponto P2: ");
    scanf("%f", &x2);

    printf("Digite a coordenada y do ponto P2: ");
    scanf("%f", &y2);

    printf("\nDigite a coordenada x do ponto P3: ");
    scanf("%f", &x3);

    printf("Digite a coordenada y do ponto P3: ");
    scanf("%f", &y3);

    float p = perimetro(x1, y1, x2, y2, x3, y3);

    printf("%.2f", p);
    
    printf("\n\n");
}