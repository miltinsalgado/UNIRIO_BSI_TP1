/*
    Lista 03 - Exercício 13
    Leia várias idades até o usuário digitar zero e imprima quantas pessoas são eleitoras obrigatórias.
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    printf("LISTA 03 - EXERCÍCIO 13\n");

    int idade = 0, cont_eleitores_obrigatorios = 0;

    do
    {
        printf("\nDigite uma idade: ");
        scanf("%d", &idade);

        if (idade >= 18)
            cont_eleitores_obrigatorios++;

    } while (idade != 0);
    
    printf("\nQuantidade de pessoas que são eleitoras obrigatórias: %d", cont_eleitores_obrigatorios);

    printf("\n\n");
}