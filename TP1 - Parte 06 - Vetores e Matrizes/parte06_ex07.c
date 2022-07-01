/*
    Parte 06 - Exercício 07
    Altere o exercício anterior para imprimir a mensagem
    "Número não existe" caso k não exista no vetor v.
*/

#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("PARTE 06 - EXERCÍCIO 07\n");

    int tam = 0;

    printf("\nDigite o tamanho do vetor: ");
    scanf("%d", &tam);

    int v[tam];

    puts("\nDigite os números inteiros nos índices correspondentes:");

    for (int i = 0; i < tam; i++)
    {
        printf("v[%d] = ", i);
        scanf("%d", &v[i]);
    }

    int k = 0;
    bool achou = false;

    printf("\nDigite outro número inteiro: ");
    scanf("%d", &k);

    printf("\nPosições do vetor com valor igual a %d: ", k);

    for (int j = 0; j < tam; j++)
    {
        if (v[j] == k)
        {
            printf("\nv[%d]", j);
            achou = true;
        }
    }

    if (!achou)
        printf("\nNúmero não existe");
    
    printf("\n\n");
}