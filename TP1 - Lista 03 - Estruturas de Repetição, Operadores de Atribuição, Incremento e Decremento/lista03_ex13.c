/*
    Lista 03 - Exerc�cio 13
    Leia v�rias idades at� o usu�rio digitar zero e imprima quantas pessoas s�o eleitoras obrigat�rias.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("LISTA 03 - EXERC�CIO 13\n");

    int idade = -1, cont_eleitores_obrigatorios = 0;

    while (idade != 0)
    {
        printf("\nDigite uma idade: ");
        scanf("%d", &idade);

        if (idade >= 18)
            cont_eleitores_obrigatorios++;
    }

    printf("\nQuantidade de pessoas que s�o eleitoras obrigat�rias: %d", cont_eleitores_obrigatorios);

    printf("\n\n");
}