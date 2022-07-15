/*
    Parte 05 - Exerc�cio 07
    Leia valores inteiros positivos at� que o usu�rio digite zero. 
    Ao final, imprima a m�dia aritm�tica dos n�meros lidos. 
    Se o usu�rio digitar um n�mero negativo, ignore esse valor.
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    printf("PARTE 05 - EXERC�CIO 07\n");

    int num = 0, cont = 0, soma = 0, media = 0;

    do
    {
        printf("\nDigite um n�mero: ");
        scanf("%d", &num);

        if (num > 0)
        {
            soma += num;
            cont++;
        }

    } while (num != 0);

    media = soma / cont;

    printf("\nM�dia aritm�tica dos n�meros lidos: %d", media);

    printf("\n\n");
}