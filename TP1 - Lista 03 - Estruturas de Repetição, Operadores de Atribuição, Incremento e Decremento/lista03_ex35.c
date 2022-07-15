/*
    Lista 03 - Exercício 35
    O número 3025 possui a seguinte característica: 30 + 25 = 55 => 55*55 = 3025. 
    Imprima todos os números inteiros de 4 dígitos que tem essa característica.
*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main ()
{
    setlocale(LC_ALL, "");
    printf("LISTA 03 - EXERCÍCIO 35\n");

    puts("\nTodos os números de 4 dígitos que possuem o quadrado da soma de suas partes igual ao próprio número: ");

    for (int i = 1000; i <= 9999; i++)
    {
        int parte1 = i / 100;
        int parte2 = (i % 100);

        int soma_partes = parte1 + parte2;

        if ((int) (pow(soma_partes, 2) + 0.5) == i) //? erro de aproximação de double para int utilizando pow com alguns números (ex: 5), portanto deve se somar 0.5 para que o valor fique correto
            printf("%d ", i);
    }

    printf("\n\n");
}