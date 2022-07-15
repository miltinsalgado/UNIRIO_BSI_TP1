/*
    Parte 08 - Exercício 16
    Crie a função eh_data_valida que recebe como parâmetros o dia, o mês e o ano 
    e retorna verdadeiro se esses três valores formam uma data válida; ou falso, caso contrário. 
    Dica: use as funções dos exercícios anteriores.
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
    printf("PARTE 08 - EXERCÍCIO 16\n");

    int dia = 0, mes = 0, ano = 0;

    printf("\nDigite um dia: ");
    scanf("%d", &dia);

    printf("\nDigite um mês: ");
    scanf("%d", &mes);

    printf("\nDigite um ano: ");
    scanf("%d", &ano);

    bool data_valida = eh_data_valida(dia, mes, ano);

    if (data_valida)
        printf("\nA data %02d/%02d/%04d é válida", dia, mes, ano);

    else
        printf("\nA data %02d/%02d/%04d é inválida", dia, mes, ano);
    
    printf("\n\n");
}