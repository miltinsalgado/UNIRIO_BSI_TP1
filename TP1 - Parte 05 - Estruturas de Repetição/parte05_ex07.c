/*
    Parte 05 - Exercício 07
    Leia valores inteiros positivos até que o usuário digite zero. 
    Ao final, imprima a média aritmética dos números lidos. 
    Se o usuário digitar um número negativo, ignore esse valor.
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    printf("PARTE 05 - EXERCÍCIO 07\n");

    int num = 0, cont = 0, soma = 0, media = 0;

    do
    {
        printf("\nDigite um número: ");
        scanf("%d", &num);

        if (num > 0)
        {
            soma += num;
            cont++;
        }

    } while (num != 0);

    media = soma / cont;

    printf("\nMédia aritmética dos números lidos: %d", media);

    printf("\n\n");
}