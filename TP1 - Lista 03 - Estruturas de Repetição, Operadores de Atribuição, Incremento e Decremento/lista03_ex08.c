/*
    Lista 03 - Exercício 08
    Leia 10 valores, um de cada vez, e conte quantos deles estão no intervalo [10, 20] e quantos deles estão fora do intervalo. 
    Ao final, imprima estas informações. 
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    printf("LISTA 03 - EXERCÍCIO 08\n");

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

    printf("\nQuantidade de valores incluídos no intervalo [10, 20]: %d", cont_incluidos);
    printf("\nQuantidade de valores excluídos do intervalo [10, 20]: %d", cont_excluidos);

    printf("\n\n");
}