/*
    ! DESAFIO !
    Lista 03 - Exerc�cio 41
    Em 1582 o papa Greg�rio III instituiu  mudan�as no calend�rio e criou  o  calend�rio  que  usamos atualmente.  
    Nessa  mudan�a, o dia 01/01/1600 foi definido como um s�bado e, at� hoje, 
    usamos esse referencial para calcular o dia da semana de uma data.
    Assim, para calcular o dia da semana de uma data qualquer, 
    basta calcular quantos dias se passaram desde 01/01/1600 at� essa data e dividir esse valor por 7.  
    Se o resto � 0 ent�o o dia da semana � s�bado, se o resto � 1 o dia da semana � domingo, e assim por diante. 
    Leia tr�s valores d, m e a e calcule o dia da semana correspondente a essa  data.  
    Assuma  que  d,  m  e  a  formam  uma  data  v�lida. 
    Dica:  use  a  solu��o  do  exerc�cio  30  da lista de exerc�cios 2. 
*/

#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("LISTA 03 - EXERC�CIO 41\n");

    int d = 0, m = 0, a = 0;
    int d_inicial = 1, m_inicial = 1, a_inicial = 1600;

    printf("\nDigite o dia: ");
    scanf("%d", &d);

    printf("\nDigite o m�s: ");
    scanf("%d", &m);

    printf("\nDigite o ano (maior ou igual a 1600): ");
    scanf("%d", &a);

    bool ano_bissexto = false, data_valida = false;
    int num_dias_mes = 0, num_dias_passados = 0;

    if (a >= 0 && a >= 1600 && m >= 1 && m <= 12 && d >= 1)
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
        for (int i = 1; i < m; i++)
        {
            if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
            num_dias_passados += 31;

            else if (i == 4 || i == 6 || i == 9 || i == 11)
            num_dias_passados += 30;

            else if (i == 2 && ano_bissexto)
            num_dias_passados += 29;

            else if (i == 2 && !ano_bissexto)
            num_dias_passados += 28;
        }

        num_dias_passados += d - 1;

        for (int i = a_inicial; i < a; i++)
        {
            if (i % 4 != 0)
                ano_bissexto = false;

            else if (i % 4 == 0 && i % 100 != 0)
                ano_bissexto = true;

            else if (i % 4 == 0 && i % 100 == 0 && i % 400 == 0)
                ano_bissexto = true;

            else
                ano_bissexto = false;

            if (ano_bissexto)
                num_dias_passados += 366;
            
            else
                num_dias_passados += 365;
        }
        
        int num_dia_semana = num_dias_passados % 7;

        printf("\nDia da semana da data %02d/%02d/%04d: ", d, m, a);

        switch (num_dia_semana)
        {
            case 0:
                printf("S�bado");
                break;

            case 1:
                printf("Domingo");
                break;

            case 2:
                printf("Segunda-Feira");
                break;

            case 3:
                printf("Ter�a-Feira");
                break;

            case 4:
                printf("Quarta-Feira");
                break;

            case 5:
                printf("Quinta-Feira");
                break;

            case 6:
                printf("Sexta-Feira");
                break;
            
            default:
                break;
        }
    }

    else
        printf("\nA data %02d/%02d/%04d � inv�lida", d, m, a);

    printf("\n\n");
}