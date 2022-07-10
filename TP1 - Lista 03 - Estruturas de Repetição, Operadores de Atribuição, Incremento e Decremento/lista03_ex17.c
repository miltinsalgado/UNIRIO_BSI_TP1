/*
    Lista 03 - Exercício 17
    Leia  o  número  da  conta  e  o  saldo  de  vários  clientes,  até  o  usuário  digitar  zero.  
    A  cada  entrada deverá  ser  apresentada  a  mensagem  "positivo"  ou  "negativo", 
    caso  o  saldo  seja  positivo  ou negativo.
    Ao final, deverá ser impresso o percentual de contas com saldo negativo.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("LISTA 03 - EXERCÍCIO 17\n");

    int num_conta = 1, total_contas = 0, contas_negativas = 0;
    float saldo = 0;

    while (1)
    {
        printf("\nDigite o número da conta do cliente: ");
        scanf("%d", &num_conta);

        if (num_conta == 0)
            break;

        else
        {
            total_contas++;
            printf("\nDigite o saldo da conta do cliente: ");
            scanf("%f", &saldo);

            if (saldo > 0)
                puts("\npositivo");
            
            else if (saldo < 0)
            {
                contas_negativas++;
                puts("\nnegativo");
            }   
            
            else 
                puts("\nzerado");
        }
    }

    float percentual_contas_negativas = 100 * contas_negativas / total_contas;

    printf("\nPercentual de contas com saldo negativo em relação ao total de contas: %.2f%%", percentual_contas_negativas);

    printf("\n\n");
}