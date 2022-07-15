/*
    Lista 03 - Exercício 36
    Leia um número inteiro n (n > 0) e imprima se ele é ou não capicua. 
    Um número é capicua se lido da esquerda para a direita é igual quando lido da direita para a esquerda. 
    Exemplo: 2332. 
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    printf("LISTA 03 - EXERCÍCIO 36\n");

    int n = 0, n_invertido = 0;

    printf("\nDigite um número inteiro positivo: ");
    scanf("%d", &n);

    if (n <= 0)
        printf("\nNúmero inteiro inválido");

    else
    {
        for (int i = n; i > 0; i /= 10)
            n_invertido = n_invertido * 10 + i % 10;

        if (n == n_invertido)
            printf("\nO número %d é capicua", n);

        else
            printf("\nO número %d não é capicua", n);
    }

    printf("\n\n");
}