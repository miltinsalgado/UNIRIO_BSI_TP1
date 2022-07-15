/*
    Parte 05 - Exercício 09
    Leia três valores inteiros n, m e k e imprima os números
    no intervalo de n a m que são divisíveis por k e calcule o
    somatório e a média desses números.
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    printf("PARTE 05 - EXERCÍCIO 09\n");

    int n = 0, m = 0, k = 0, soma = 0, media = 0, cont_div_k = 0;

    printf("\nDigite o primeiro número: ");
    scanf("%d", &n);

    printf("\nDigite o segundo número: ");
    scanf("%d", &m);

    printf("\nDigite o terceiro número: ");
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
    printf("\nSomatório dos números de %d a %d divisíveis por %d: %d", n, m, k, soma);
    printf("\nMédia aritimética dos números de %d a %d divisíveis por %d: %d", n, m, k, media);

    printf("\n\n");
}