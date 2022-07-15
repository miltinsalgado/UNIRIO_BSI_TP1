/*
    Lista 03 - Exercício 34
    Leia  um  número  inteiro  n  e  imprima  todos  os  números  perfeitos  no  intervalo  de  1  a  n. 
    Número perfeito é o número cujo somatório de todos os seus divisores (menos ele mesmo) é igual a ele. 
    Por exemplo: 6 = 1 + 2 + 3, logo 6 é um número perfeito.
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    printf("LISTA 03 - EXERCÍCIO 34\n");

    int n = 0;

    printf("\nDigite um número inteiro positivo: ");
    scanf("%d", &n);

    if (n <= 0)
        printf("\nNúmero inteiro inválido");

    else
    {
        int soma = 0;
        printf("\nTodos os números perfeitos no intervalo de 1 a %d:", n);
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