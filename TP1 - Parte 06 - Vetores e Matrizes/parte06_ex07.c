/*
    Parte 06 - Exerc�cio 07
    Altere o exerc�cio anterior para imprimir a mensagem
    "N�mero n�o existe" caso k n�o exista no vetor v.
*/

#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("PARTE 06 - EXERC�CIO 07\n");

    int tam = 0;

    printf("\nDigite o tamanho do vetor: ");
    scanf("%d", &tam);

    int v[tam];

    puts("\nDigite os n�meros inteiros nos �ndices correspondentes:");

    for (int i = 0; i < tam; i++)
    {
        printf("v[%d] = ", i);
        scanf("%d", &v[i]);
    }

    int k = 0;
    bool achou = false;

    printf("\nDigite outro n�mero inteiro: ");
    scanf("%d", &k);

    printf("\nPosi��es do vetor com valor igual a %d: ", k);

    for (int j = 0; j < tam; j++)
    {
        if (v[j] == k)
        {
            printf("\nv[%d]", j);
            achou = true;
        }
    }

    if (!achou)
        printf("\nN�mero n�o existe");
    
    printf("\n\n");
}