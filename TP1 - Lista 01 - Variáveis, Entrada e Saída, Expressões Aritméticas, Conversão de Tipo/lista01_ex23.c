/*
    ! DESAFIO !
    Lista 01 - Exercício 23
    Leia dois valores de hora, minuto e segundo (h1, m1, s1, h2, m2, s2). 
    Em seguida, imprima o intervalo entre esses dois horários em hora, minuto e segundo. 
    Assuma que h2/m2/s2 é maior ou igual a h1/m1/s1. 
    Exemplo: se h1 = 9, m1 = 45, s1 = 38, h2 = 15, m2 = 27 e s2 = 12 então a diferença é 05:41:34.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("LISTA 01 - EXERCÍCIO 23\n");

    int h1 = 0, m1 = 0, s1 = 0, h2 = 0, m2 = 0, s2 = 0;

    printf("\nDigite o primeiro valor de hora: ");
    scanf("%d", &h1);

    printf("\nDigite o primeiro valor de minuto: ");
    scanf("%d", &m1);

    printf("\nDigite o primeiro valor de segundo: ");
    scanf("%d", &s1);

    printf("\nDigite o segundo valor de hora: ");
    scanf("%d", &h2);

    printf("\nDigite o segundo valor de minuto: ");
    scanf("%d", &m2);

    printf("\nDigite o segundo valor de segundo: ");
    scanf("%d", &s2);

    int total_s1 = h1 * 3600 + m1 * 60 + s1;
    int total_s2 = h2 * 3600 + m2 * 60 + s2;
    int total_s3 = total_s2 - total_s1;

    int h3 = total_s3 / 3600;
    int m3 = total_s3 % 3600 / 60;
    int s3 = total_s3 % 3600 % 60;

    printf("\nHorários: %02d:%02d:%02d e %02d:%02d:%02d", h1, m1, s1, h2, m2, s2);
    printf("\nIntervalo: %02d:%02d:%02d", h3, m3, s3);

    printf("\n\n");
}