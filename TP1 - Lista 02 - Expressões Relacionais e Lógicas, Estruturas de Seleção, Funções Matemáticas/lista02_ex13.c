/*
    Lista 02 - Exercício 13
    Leia  as  coordenadas  dos  pontos  P1,  P2  e  P3.
    Em  seguida,  informe  se  esses  pontos  formam  um  triângulo  ou  não.  
    Caso  positivo,  imprima  o  perímetro  P  e  a  área  A  do  triângulo  onde  A  pode  ser  calculado como:
    A = (p * (p - a) * (p - b) * (p - c))^1/2 
    p = (a + b + c) / 2
*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main ()
{
    setlocale(LC_ALL, "");
    printf("LISTA 02 - EXERCÍCIO 13\n");

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

    float a = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    float b = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
    float c = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));

    if (a + b > c && a + c > b && b + c > a)
    {
        puts("\nOs pontos digitados formam um triângulo!");

        float perimetro = (a + b + c);
        float area = sqrt(perimetro * (perimetro - a) * (perimetro - b) * (perimetro - c));

        printf("\nPerímetro do triângulo de lados %.2f, %.2f e %.2f: %.2f", a, b, c, perimetro);
        printf("\nÁrea do triângulo de lados %.2f, %.2f e %.2f: %.2f", a, b, c, area);
    }

    else
        puts("\nOs pontos digitados não formam um triângulo!");

    printf("\n\n");
}