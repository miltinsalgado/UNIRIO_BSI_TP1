/*
    Lista 03 - Exerc�cio 14
    Leia  v�rios  n�meros  positivos  at�  o  usu�rio  digitar  zero  e,  para  cada  n�mero,  imprima  a  sua  raiz 
    quadrada ou uma mensagem de erro, caso n�o seja poss�vel calcul�-la.
*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main ()
{
    setlocale(LC_ALL, "");
    printf("LISTA 03 - EXERC�CIO 14\n");

    float num = 1, raiz_quadrada = 0;

    while (1)
    {
        printf("\nDigite um n�mero positivo ou zero para sair: ");
        scanf("%f", &num);

        if (num == 0)
            break;

        else if (num < 0)
            printf("\nDigite apenas n�meros positivos!");

        else
        {
            raiz_quadrada = sqrt(num);

            if (ceil(raiz_quadrada) * ceil(raiz_quadrada) != ceil(num))
            printf("\nA raiz quadrada de %f � imposs�vel de ser calculada", num);

            else
            printf("\nRaiz quadrada de %f: %f", num, raiz_quadrada);
        }

        printf("\n");
    }

    printf("\n\n");
}