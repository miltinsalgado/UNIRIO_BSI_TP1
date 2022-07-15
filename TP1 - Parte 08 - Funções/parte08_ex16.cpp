/*
    Parte 08 - Exerc�cio 16
    Crie a fun��o eh_data_valida que recebe como par�metros o dia, o m�s e o ano 
    e retorna verdadeiro se esses tr�s valores formam uma data v�lida; ou falso, caso contr�rio. 
    Dica: use as fun��es dos exerc�cios anteriores.
*/

#include <stdio.h>
#include <locale.h>

bool eh_bissexto (int &ano)
{
    if (ano % 4 != 0)
        return false;
    
    else if (ano % 4 == 0 && ano % 100 != 0)
        return true;

    else if (ano % 4 == 0 && ano % 100 == 0 && ano % 400 == 0)
        return true;
    
    else
        return false;
}

int numero_dias_mes (int &mes, int &ano)
{
    if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
        return 31;

    else if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
        return 30;

    else if (mes == 2 && eh_bissexto(ano))
        return 29;

    else if (mes == 2 && !eh_bissexto(ano))
        return 28;

    else
        return -1;
}

bool eh_data_valida (int &dia, int &mes, int &ano)
{
    int dias = numero_dias_mes(mes, ano);

    if (dia > 0 && dia <= dias && ano >= 0)
        return true;

    return false;
}

int main ()
{
    setlocale(LC_ALL, "");
    printf("PARTE 08 - EXERC�CIO 16\n");

    int dia = 0, mes = 0, ano = 0;

    printf("\nDigite um dia: ");
    scanf("%d", &dia);

    printf("\nDigite um m�s: ");
    scanf("%d", &mes);

    printf("\nDigite um ano: ");
    scanf("%d", &ano);

    bool data_valida = eh_data_valida(dia, mes, ano);

    if (data_valida)
        printf("\nA data %02d/%02d/%04d � v�lida", dia, mes, ano);

    else
        printf("\nA data %02d/%02d/%04d � inv�lida", dia, mes, ano);
    
    printf("\n\n");
}