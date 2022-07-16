/*
    ! DESAFIO !
    Lista 03 - Exerc�cio 38
    A  s�rie  de  Fibonacci  �  uma  sequ�ncia  de  n�meros  que  come�am  com  0  e  1  e,  a  partir  da�,  o 
    pr�ximo n�mero � gerado pela soma dos dois imediatamente anteriores: 0  1  1  2  3  5  8  13... 
    Leia um valor n (n > 2) e calcule o n-�simo n�mero da s�rie de Fibonacci.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("LISTA 03 - EXERC�CIO 38\n");

    int n = 0, ultimo = 1, penultimo = 0, soma = 0;

    printf("\nDigite um n�mero inteiro maior que 2: ");
    scanf("%d", &n);

    if (n <= 2)
        printf("\nN�mero inteiro inv�lido");

    else
    {
        for (int i = 3; i <= n; i++)
        {
            soma = ultimo + penultimo;
            penultimo = ultimo;
            ultimo = soma;
        }

        printf("\n%d� n�mero da s�rie de Fibonacci: %d", n, soma);
    }

    printf("\n\n");
}