/*
    Parte 05 - Exerc�cio 09
    Leia tr�s valores inteiros n, m e k e imprima os n�meros
    no intervalo de n a m que s�o divis�veis por k e calcule o
    somat�rio e a m�dia desses n�meros.
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    printf("PARTE 05 - EXERC�CIO 09\n");

    int n = 0, m = 0, k = 0, soma = 0, media = 0, cont_div_k = 0;

    printf("\nDigite o primeiro n�mero: ");
    scanf("%d", &n);

    printf("\nDigite o segundo n�mero: ");
    scanf("%d", &m);

    printf("\nDigite o terceiro n�mero: ");
    scanf("%d", &k);

    for (int i = n; i <= m; i++)
    {
        if (i % k == 0)
        {
            printf("\n%d", i);
            soma += i;
            cont_div_k++;
        }
    }

    media = soma / cont_div_k;

    printf("\n");
    printf("\nSomat�rio dos n�meros de %d a %d divis�veis por %d: %d", n, m, k, soma);
    printf("\nM�dia aritim�tica dos n�meros de %d a %d divis�veis por %d: %d", n, m, k, media);

    printf("\n\n");
}