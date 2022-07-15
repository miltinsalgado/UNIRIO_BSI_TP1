/*
    Lista 03 - Exerc�cio 34
    Leia  um  n�mero  inteiro  n  e  imprima  todos  os  n�meros  perfeitos  no  intervalo  de  1  a  n. 
    N�mero perfeito � o n�mero cujo somat�rio de todos os seus divisores (menos ele mesmo) � igual a ele. 
    Por exemplo: 6 = 1 + 2 + 3, logo 6 � um n�mero perfeito.
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    printf("LISTA 03 - EXERC�CIO 34\n");

    int n = 0;

    printf("\nDigite um n�mero inteiro positivo: ");
    scanf("%d", &n);

    if (n <= 0)
        printf("\nN�mero inteiro inv�lido");

    else
    {
        int soma = 0;
        printf("\nTodos os n�meros perfeitos no intervalo de 1 a %d:", n);
        printf("\n");

        for (int i = 1; i <= n; i++)
        {
            soma = 0;
            
            for (int j = 1; j < i; j++)
                if (i % j == 0)
                    soma += j;
            
            if (soma == i)
                printf("%d ", i);
        }
    }

    printf("\n\n");
}