/*
    Parte 06 - Exercício 02
    Leia um vetor v com 10 números inteiros. Em seguida, imprima o somatório dos números desse vetor.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("PARTE 06 - EXERCÍCIO 02\n");

    int tamanho_v = 10;
    int v[tamanho_v], soma = 0;

    puts("\nDigite os números inteiros nos índices correspondentes:");

    for (int i = 0; i < tamanho_v; i++)
    {
        printf("v[%d] = ", i);
        scanf("%d", &v[i]);
    }

    for (int j = 0; j < tamanho_v; j++)
        soma += v[j];
    
    printf("\nSomatório dos números do vetor: %d", soma);
    
    printf("\n\n");
}