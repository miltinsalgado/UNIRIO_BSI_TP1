/*
    ! DESAFIO !
    Lista 02 - Exerc�cio 30
    Os dias do ano podem ser definidos de forma cont�nua. 
    Por exemplo: 01/01 � o 1� dia do ano, 05/01 � o  5�  dia  do  ano  e  03/02  �  o  34�  dia  do  ano.  
    Leia  dois  valores  d,  m  e  a  e  informe  o  dia  do  ano correspondente � data d/m/a. 
    Assuma que d/m/a � uma data v�lida.
*/

#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("LISTA 02 - EXERC�CIO 30\n");

    int d = 0, m = 0, a = 0;

    printf("\nDigite o dia: ");
    scanf("%d", &d);

    printf("\nDigite o m�s: ");
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
    {
        int num_dias_passados = 0;

        if (m > 1)
            num_dias_passados += 31;
        
        if (m > 2)
        {
            if (ano_bissexto)
                num_dias_passados += 29;
            else
                num_dias_passados += 29;
        }

        if (m > 3)
            num_dias_passados += 31;

        if (m > 4)
            num_dias_passados += 30;

        if (m > 5)
            num_dias_passados += 31;
        
        if (m > 6)
            num_dias_passados += 30;
        
        if (m > 7)
            num_dias_passados += 31;
        
        if (m > 8)
            num_dias_passados += 31;

        if (m > 9)
            num_dias_passados += 30;

        if (m > 10)
            num_dias_passados += 31;

        if (m > 11)
            num_dias_passados += 30;

        if (m > 12)
            num_dias_passados += 31;
        
        num_dias_passados += d;

        printf("\n%02d/%02d � o %d� dia do ano de %04d", d, m, num_dias_passados, a);
    }

    else
        printf("\nA data %02d/%02d/%04d � inv�lida", d, m, a);

    printf("\n\n");
}