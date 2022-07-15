/*
    Lista 03 - Exercício 11
    Leia  os  números  inteiros n e m e imprima os números ímpares no intervalo de n a m, inclusive.  
    Inverta n com m, caso n > m.
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    printf("LISTA 03 - EXERCÍCIO 11\n");

    int n = 0, m = 0;

    printf("\nDigite o primeiro número inteiro do intervalo: ");
    scanf("%d", &n);

    printf("\nDigite o segundo número inteiro do intervalo: ");
    scanf("%d", &m);

    if (n > m)
    {
        int aux = n;
        n = m;
        m = aux;
    }

    printf("\nNúmeros impares no intervalo de %d a %d: ", n, m);

    for (int i = n; i <= m; i++)
        if (i % 2 == 1)
            printf("%d ", i);

    printf("\n\n");
}