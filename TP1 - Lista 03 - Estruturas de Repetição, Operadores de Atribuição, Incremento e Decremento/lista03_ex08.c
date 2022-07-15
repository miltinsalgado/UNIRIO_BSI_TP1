/*
    Lista 03 - Exerc�cio 08
    Leia 10 valores, um de cada vez, e conte quantos deles est�o no intervalo [10, 20] e quantos deles est�o fora do intervalo. 
    Ao final, imprima estas informa��es. 
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    printf("LISTA 03 - EXERC�CIO 08\n");

    int valor = 0, cont_incluidos = 0, cont_excluidos = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("\nDigite um valor inteiro: ");
        scanf("%d", &valor);

        if (valor >= 10 && valor <= 20)
            cont_incluidos++;
        else
            cont_excluidos++;
    }

    printf("\nQuantidade de valores inclu�dos no intervalo [10, 20]: %d", cont_incluidos);
    printf("\nQuantidade de valores exclu�dos do intervalo [10, 20]: %d", cont_excluidos);

    printf("\n\n");
}