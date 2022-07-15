/*
    ! DESAFIO !
    Lista 02 - Exercício 29
    Leia três valores d, m e a e informe se d, m e a formam uma data válida.
*/

#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

int main ()
{
    setlocale(LC_ALL, "");
    printf("LISTA 02 - EXERCÍCIO 29\n");

    int d = 0, m = 0, a = 0;

    printf("\nDigite o dia: ");
    scanf("%d", &d);

    printf("\nDigite o mês: ");
    scanf("%d", &m);

    printf("\nDigite o ano: ");
    scanf("%d", &a);

    bool ano_bissexto = false, data_valida = false;
    int num_dias_mes = 0;

    if (a >= 0 && m >= 1 && m <= 12 && d >= 1)
    {
        if (a % 4 != 0)
            ano_bissexto = false;
    
        else if (a % 4 == 0 && a % 100 != 0)
            ano_bissexto = true;

        else if (a % 4 == 0 && a % 100 == 0 && a % 400 == 0)
            ano_bissexto = true;
    
        else
            ano_bissexto = false;

        if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
            num_dias_mes = 31;

        else if (m == 4 || m == 6 || m == 9 || m == 11)
            num_dias_mes = 30;

        else if (m == 2 && ano_bissexto)
            num_dias_mes = 29;

        else if (m == 2 && !ano_bissexto)
            num_dias_mes = 28;

        if (d <= num_dias_mes)
            data_valida = true;
    }

    if (data_valida)
        printf("\nA data %02d/%02d/%04d é válida", d, m, a);

    else
        printf("\nA data %02d/%02d/%04d é inválida", d, m, a);

    printf("\n\n");
}