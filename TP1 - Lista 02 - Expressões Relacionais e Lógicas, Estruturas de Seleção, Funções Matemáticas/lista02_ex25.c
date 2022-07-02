/*
    Lista 02 - Exerc�cio 25
    Leia  o  �ltimo  d�gito  da  placa  do  carro  e  exiba  o  m�s  em  que  vence  o  IPVA,  segundo  a  tabela abaixo: 

    Final da placa          Prazo 
    0                       At� 30/04/2020 
    1                       At� 31/05/2020 
    2                       At� 30/06/2020 
    3                       At� 31/07/2020 
    4                       At� 30/08/2020 
    5                       At� 30/09/2020 
    6 e 7                   At� 30/11/2020 
    8 e 9                   At� 31/12/2020 

    Implemente uma solu��o com if e outra com switch.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("LISTA 02 - EXERC�CIO 25\n");

    int ultimo_digito_placa_carro = 0;

    printf("\nDigite o �ltimo d�gito da placa do carro: ");
    scanf("%d", &ultimo_digito_placa_carro);

    /* Solu��o com if */

    if (ultimo_digito_placa_carro == 0)
        printf("\nData de vecimento do IPVA: 30/04/2020");

    else if (ultimo_digito_placa_carro == 1)
        printf("\nData de vecimento do IPVA: 31/05/2020");

    else if (ultimo_digito_placa_carro == 2)
        printf("\nData de vecimento do IPVA: 30/06/2020");

    else if (ultimo_digito_placa_carro == 3)
        printf("\nData de vecimento do IPVA: 31/07/2020");

    else if (ultimo_digito_placa_carro == 4)
        printf("\nData de vecimento do IPVA: 30/08/2020");

    else if (ultimo_digito_placa_carro == 5)
        printf("\nData de vecimento do IPVA: 30/09/2020");

    else if (ultimo_digito_placa_carro == 6 || ultimo_digito_placa_carro == 7)
        printf("\nData de vecimento do IPVA: 30/11/2020");

    else if (ultimo_digito_placa_carro == 8 || ultimo_digito_placa_carro == 9)
        printf("\nData de vecimento do IPVA: 31/12/2020");

    else
        printf("\n�ltimo d�gito da placa inv�lido");

    /* Solu��o com switch */

    switch (ultimo_digito_placa_carro)
    {
        case 0:
            printf("\nData de vecimento do IPVA: 30/04/2020");
            break;

        case 1:
            printf("\nData de vecimento do IPVA: 31/05/2020");  
            break;

        case 2:
            printf("\nData de vecimento do IPVA: 30/06/2020");
            break;

        case 3:
            printf("\nData de vecimento do IPVA: 31/07/2020");
            break;

        case 4:
            printf("\nData de vecimento do IPVA: 30/08/2020");
            break;

        case 5:
            printf("\nData de vecimento do IPVA: 30/06/2020");
            break;

        case 6:
        case 7:
            printf("\nData de vecimento do IPVA: 30/11/2020");
            break;

        case 8:
        case 9:
            printf("\nData de vecimento do IPVA: 31/12/2020");
            break;

        default:
            break;
    }

    printf("\n\n");
}