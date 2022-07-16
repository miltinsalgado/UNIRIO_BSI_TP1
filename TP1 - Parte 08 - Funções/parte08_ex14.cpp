/*
    Parte 08 - Exerc�cio 14
    Crie a fun��o eh_bissexto que recebe como par�metro o ano e retorna verdadeiro se o ano for bissexto; ou falso, caso contr�rio.
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

int main()
{
    setlocale(LC_ALL, "");
    printf("PARTE 08 - EXERC�CIO 14\n");

    int ano = 0;

    printf("\nDigite um ano: ");
    scanf("%d", &ano);

    bool bissexto = eh_bissexto(ano);

    if (bissexto)
        printf("\nO ano %d � bissexto", ano);

    else
        printf("\nO ano %d n�o � bissexto", ano);
    
    printf("\n\n");
}