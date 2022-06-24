/*
    Parte 06 - Exerc�cio 03
    Leia um vetor v com 10 n�meros inteiros. Em seguida imprima todos os pares e, depois, todos os �mpares do vetor.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("PARTE 06 - EXERC�CIO 03\n");

    const int tamanho_v = 10;
    int v[tamanho_v];

    puts("\nDigite os n�meros inteiros nas posi��es correspondentes:");

    for (int i = 0; i < tamanho_v; i++)
    {
        printf("v[%d] = ", i);
        scanf("%d", &v[i]);
    }

    printf("\nN�meros pares do vetor: ");
    for (int j = 0; j < tamanho_v; j++)
    {
        if (v[j] % 2 == 0)
            printf("\n%d", v[j]);

        else
            continue;
    }

    printf("\n");
    
    printf("\nN�meros �mpares do vetor: ");
    for (int j = 0; j < tamanho_v; j++)
    {
        if (v[j] % 2 == 1)
            printf("\n%d", v[j]);
            
        else
            continue;
    }
    
    printf("\n\n");
}