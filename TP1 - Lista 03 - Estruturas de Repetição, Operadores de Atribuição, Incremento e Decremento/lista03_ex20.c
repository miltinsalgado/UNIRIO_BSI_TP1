/*
    Lista 03 - Exercício 20
    Leia números inteiros até que  o usuário  digite  zero  ou  um  número  negativo. 
    Ao  final,  imprima  a soma e a média aritmética dos números digitados, o menor e o maior número.
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    printf("LISTA 03 - EXERCÍCIO 20\n");

    int num = 0, cont = 0, soma = 0, menor_num = 0, maior_num = 0;
    float media = 0;

    while (1)
    {
        printf("\nDigite um número inteiro positivo (caso deseje encerrar, digite um número negativo ou zero): ");
        scanf("%d", &num);

        if (num <= 0)
            break;

        else
        {
            cont++;
            soma += num;

            if (num > maior_num || cont == 1)
                maior_num = num;

            if (num < menor_num || cont == 1)
                menor_num = num;
        }
    }

    if (cont == 0)
        printf("\nNenhum número inteiro positivo foi digitado!");

    else
    {
        media = soma / cont;
        printf("\nSoma dos números: %d", soma);
        printf("\nMédia aritmética dos números: %.2f", media);
        printf("\nMenor número: %d", menor_num);
        printf("\nMaior número: %d", maior_num);
    }

    printf("\n\n");
}