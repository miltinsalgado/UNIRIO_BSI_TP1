/*
    Lista 03 - Exerc�cio 35
    O n�mero 3025 possui a seguinte caracter�stica: 30 + 25 = 55 => 55*55 = 3025. 
    Imprima todos os n�meros inteiros de 4 d�gitos que tem essa caracter�stica.
*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main ()
{
    setlocale(LC_ALL, "");
    printf("LISTA 03 - EXERC�CIO 35\n");

    puts("\nTodos os n�meros de 4 d�gitos que possuem o quadrado da soma de suas partes igual ao pr�prio n�mero: ");

    for (int i = 1000; i <= 9999; i++)
    {
        int parte1 = i / 100;
        int parte2 = (i % 100);

        int soma_partes = parte1 + parte2;

        if ((int) (pow(soma_partes, 2) + 0.5) == i) //? erro de aproxima��o de double para int utilizando pow com alguns n�meros (ex: 5), portanto deve se somar 0.5 para que o valor fique correto
            printf("%d ", i);
    }

    printf("\n\n");
}