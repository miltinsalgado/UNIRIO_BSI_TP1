/*
    Lista 03 - Exerc�cio 11
    Leia  os  n�meros  inteiros n e m e imprima os n�meros �mpares no intervalo de n a m, inclusive.  
    Inverta n com m, caso n > m.
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    printf("LISTA 03 - EXERC�CIO 11\n");

    int n = 0, m = 0;

    printf("\nDigite o primeiro n�mero inteiro do intervalo: ");
    scanf("%d", &n);

    printf("\nDigite o segundo n�mero inteiro do intervalo: ");
    scanf("%d", &m);

    if (n > m)
    {
        int aux = n;
        n = m;
        m = aux;
    }

    printf("\nN�meros impares no intervalo de %d a %d: ", n, m);

    for (int i = n; i <= m; i++)
        if (i % 2 == 1)
            printf("%d ", i);

    printf("\n\n");
}