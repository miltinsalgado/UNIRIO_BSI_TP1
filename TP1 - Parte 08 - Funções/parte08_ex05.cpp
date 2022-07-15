/*
    Parte 08 - Exercício 05
    Crie a função fatorial que lê um número inteiro n e retorna n! ou -1, se n < 0.
*/

#include <stdio.h>
#include <locale.h>

int fatorial ()
{
    int n = 0;

    printf("\nDigite um número inteiro: ");
    scanf("%d", &n);

    printf("\nFatorial de %d: ", n);

    if (n < 0)
        return -1;

    int fatorial = 1;
    for (int i = n; i >= 1; i--)
        fatorial *= i;
    
    return fatorial;
}

int main ()
{
    setlocale(LC_ALL, "");
    printf("PARTE 08 - EXERCÍCIO 05\n");

    int n_fatorial = fatorial();
    printf("%d",  n_fatorial);
    
    printf("\n\n");
}