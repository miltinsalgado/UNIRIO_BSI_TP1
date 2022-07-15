/*
    Lista 03 - Exerc�cio 36
    Leia um n�mero inteiro n (n > 0) e imprima se ele � ou n�o capicua. 
    Um n�mero � capicua se lido da esquerda para a direita � igual quando lido da direita para a esquerda. 
    Exemplo: 2332. 
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    printf("LISTA 03 - EXERC�CIO 36\n");

    int n = 0, n_invertido = 0;

    printf("\nDigite um n�mero inteiro positivo: ");
    scanf("%d", &n);

    if (n <= 0)
        printf("\nN�mero inteiro inv�lido");

    else
    {
        for (int i = n; i > 0; i /= 10)
            n_invertido = n_invertido * 10 + i % 10;

        if (n == n_invertido)
            printf("\nO n�mero %d � capicua", n);

        else
            printf("\nO n�mero %d n�o � capicua", n);
    }

    printf("\n\n");
}