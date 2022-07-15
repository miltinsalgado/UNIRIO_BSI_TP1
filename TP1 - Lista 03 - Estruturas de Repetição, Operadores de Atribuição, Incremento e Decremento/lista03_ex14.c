/*
    Lista 03 - Exercício 14
    Leia  vários  números  positivos  até  o  usuário  digitar  zero  e,  para  cada  número,  imprima  a  sua  raiz 
    quadrada ou uma mensagem de erro, caso não seja possível calculá-la.
*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main ()
{
    setlocale(LC_ALL, "");
    printf("LISTA 03 - EXERCÍCIO 14\n");

    float num = 1, raiz_quadrada = 0;

    while (1)
    {
        printf("\nDigite um número positivo ou zero para sair: ");
        scanf("%f", &num);

        if (num == 0)
            break;

        else if (num < 0)
            printf("\nDigite apenas números positivos!");

        else
        {
            raiz_quadrada = sqrt(num);

            if (ceil(raiz_quadrada) * ceil(raiz_quadrada) != ceil(num))
            printf("\nA raiz quadrada de %f é impossível de ser calculada", num);

            else
            printf("\nRaiz quadrada de %f: %f", num, raiz_quadrada);
        }

        printf("\n");
    }

    printf("\n\n");
}