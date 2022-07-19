/*
    Parte 08 - Exercício 15
    Crie a função numero_dias_mes que recebe como parâmetros o mês e o ano e retorna o número de dias do mês. 
    Lembrem-se que os meses podem ter 28, 29, 30 ou 31 dias. 
    Se o ano ou o mês for inválido, retorne -1. 
    Dica: use a função do exercício anterior.
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

int numero_dias_mes(int &mes, int &ano)
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

int main()
{
    setlocale(LC_ALL, "");
    printf("PARTE 08 - EXERCÍCIO 15\n");

    int mes = 0, ano = 0;

    printf("\nDigite um mês: ");
    scanf("%d", &mes);

    printf("\nDigite um ano: ");
    scanf("%d", &ano);

    int dias = numero_dias_mes(mes, ano);

    printf("\nNúmero de dias do mês %02d do ano %d: %d", mes, ano, dias);
    
    printf("\n\n");
}