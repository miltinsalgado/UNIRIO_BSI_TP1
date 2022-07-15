/*
    Lista 02 - Exerc�cio 15
    Leia  o  n�mero  do  m�s  do  ano  (1  a  12)  e  mostre  o  nome  do  m�s  por  extenso.  
    Se  o  n�mero  for inv�lido, imprima "M�s inv�lido".
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    printf("LISTA 02 - EXERC�CIO 15\n");

    int mes = 0;

    printf("\nDigite o n�mero do m�s (1 a 12): ");
    scanf("%d", &mes);

    switch (mes)
    {
        case 1:
            printf("\nJaneiro");
            break;

        case 2:
            printf("\nFevereiro");
            break;

        case 3:
            printf("\nMar�o");
            break;

        case 4:
            printf("\nAbril");
            break;

        case 5:
            printf("\nMaio");
            break;

        case 6:
            printf("\nJunho");
            break;

        case 7:
            printf("\nJulho");
            break;

        case 8:
            printf("\nAgosto");
            break;

        case 9:
            printf("\nSetembro");
            break;

        case 10:
            printf("\nOutubro");
            break;

        case 11:
            printf("\nNovembro");
            break;

        case 12:
            printf("\nDezembro");
            break;
        
        default:
            printf("\nM�s inv�lido");
            break;
    }

    printf("\n\n");
}