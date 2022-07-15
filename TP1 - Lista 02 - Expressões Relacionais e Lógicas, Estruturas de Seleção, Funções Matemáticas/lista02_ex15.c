/*
    Lista 02 - Exercício 15
    Leia  o  número  do  mês  do  ano  (1  a  12)  e  mostre  o  nome  do  mês  por  extenso.  
    Se  o  número  for inválido, imprima "Mês inválido".
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    printf("LISTA 02 - EXERCÍCIO 15\n");

    int mes = 0;

    printf("\nDigite o número do mês (1 a 12): ");
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
            printf("\nMarço");
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
            printf("\nMês inválido");
            break;
    }

    printf("\n\n");
}