/*
    Parte 08 - Exerc�cio 06
    Crie a fun��o compara que l� dois valores x e y e retorna:
    -1: se x < y
    0: se x = y
    1: se x > y
*/

#include <stdio.h>
#include <locale.h>

int compara()
{
    float x = 0, y = 0;

    printf("\nDigite um n�mero: ");
    scanf("%f", &x);

    printf("\nDigite outro n�mero: ");
    scanf("%f", &y);

    printf("\nResultado da compara��o entre %.2f e %.2f: ", x, y);

    if (x < y)
        return -1;

    else if (x == y)
        return 0;
    
    return 1;
}

int main()
{
    setlocale(LC_ALL, "");
    printf("PARTE 08 - EXERC�CIO 06\n");

    int resultado_comparacao = compara();
    printf("%d",  resultado_comparacao);
    
    printf("\n\n");
}