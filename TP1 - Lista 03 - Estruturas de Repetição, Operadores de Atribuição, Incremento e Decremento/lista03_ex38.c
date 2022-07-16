/*
    ! DESAFIO !
    Lista 03 - Exercício 38
    A  série  de  Fibonacci  é  uma  sequência  de  números  que  começam  com  0  e  1  e,  a  partir  daí,  o 
    próximo número é gerado pela soma dos dois imediatamente anteriores: 0  1  1  2  3  5  8  13... 
    Leia um valor n (n > 2) e calcule o n-ésimo número da série de Fibonacci.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("LISTA 03 - EXERCÍCIO 38\n");

    int n = 0, ultimo = 1, penultimo = 0, soma = 0;

    printf("\nDigite um número inteiro maior que 2: ");
    scanf("%d", &n);

    if (n <= 2)
        printf("\nNúmero inteiro inválido");

    else
    {
        for (int i = 3; i <= n; i++)
        {
            soma = ultimo + penultimo;
            penultimo = ultimo;
            ultimo = soma;
        }

        printf("\n%dº número da série de Fibonacci: %d", n, soma);
    }

    printf("\n\n");
}