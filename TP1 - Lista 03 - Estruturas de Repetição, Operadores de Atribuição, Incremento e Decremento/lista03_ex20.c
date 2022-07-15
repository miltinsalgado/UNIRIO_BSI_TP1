/*
    Lista 03 - Exerc�cio 20
    Leia n�meros inteiros at� que  o usu�rio  digite  zero  ou  um  n�mero  negativo. 
    Ao  final,  imprima  a soma e a m�dia aritm�tica dos n�meros digitados, o menor e o maior n�mero.
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    printf("LISTA 03 - EXERC�CIO 20\n");

    int num = 0, cont = 0, soma = 0, menor_num = 0, maior_num = 0;
    float media = 0;

    while (1)
    {
        printf("\nDigite um n�mero inteiro positivo (caso deseje encerrar, digite um n�mero negativo ou zero): ");
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
        printf("\nNenhum n�mero inteiro positivo foi digitado!");

    else
    {
        media = soma / cont;
        printf("\nSoma dos n�meros: %d", soma);
        printf("\nM�dia aritm�tica dos n�meros: %.2f", media);
        printf("\nMenor n�mero: %d", menor_num);
        printf("\nMaior n�mero: %d", maior_num);
    }

    printf("\n\n");
}