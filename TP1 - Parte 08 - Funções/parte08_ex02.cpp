/*
    Parte 08 - Exerc�cio 02
    Crie um programa que tenha a mesma estrutura do exerc�cio anterior. 
    Dessa vez a fun��o dever� ler os valores (x1, y1) e (x2, y2), que correspondem a dois pontos no plano cartesiano, 
    e imprimir a dist�ncia euclidiana entre esses dois pontos.
*/

#include <stdio.h>
#include <locale.h>
#include <ctype.h>
#include <math.h>

void calcula_distancia()
{
    float x1 = 0, y1 = 0, x2 = 0, y2 = 0;

    printf("\nDigite a coordenada x do ponto P1: ");
    scanf("%f", &x1);

    printf("Digite a coordenada y do ponto P1: ");
    scanf("%f", &y1);

    printf("\nDigite a coordenada x do ponto P2: ");
    scanf("%f", &x2);

    printf("Digite a coordenada y do ponto P2: ");
    scanf("%f", &y2);

    float d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("\nDist�ncia entre os pontos P1 (%.2f, %.2f) e P2 (%.2f, %.2f): %.2f", x1, y1, x2, y2, d);
}

int main()
{
    setlocale(LC_ALL, "");
    printf("PARTE 08 - EXERC�CIO 02\n");

    char resposta = ' ';

    do
    {
        calcula_distancia();
        
        printf("\nDeseja continuar? (S ou s para sim | N ou n para n�o)");
        printf("\nResposta: ");
        getchar();
        scanf("%c", &resposta);
    } while (toupper(resposta) == 'S');
    
    printf("\n\n");
}