/*
    Parte 06 - Exercício 03
    Leia um vetor v com 10 números inteiros. Em seguida imprima todos os pares e, depois, todos os ímpares do vetor.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("PARTE 06 - EXERCÍCIO 03\n");

    const int tamanho_v = 10;
    int v[tamanho_v];

    puts("\nDigite os números inteiros nas posições correspondentes:");

    for (int i = 0; i < tamanho_v; i++)
    {
        printf("v[%d] = ", i);
        scanf("%d", &v[i]);
    }

    printf("\nNúmeros pares do vetor: ");
    for (int j = 0; j < tamanho_v; j++)
    {
        if (v[j] % 2 == 0)
            printf("\n%d", v[j]);

        else
            continue;
    }

    printf("\n");
    
    printf("\nNúmeros ímpares do vetor: ");
    for (int j = 0; j < tamanho_v; j++)
    {
        if (v[j] % 2 == 1)
            printf("\n%d", v[j]);
            
        else
            continue;
    }
    
    printf("\n\n");
}