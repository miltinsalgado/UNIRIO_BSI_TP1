/*
    6.1) Leia um vetor v com 10 números inteiros. Em seguida, imprima esses números na ordem inversa.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("EXERCÍCIO 6.1\n");

    const int tamanho_v = 10;
    int v[tamanho_v];

    printf("\nDigite os números inteiros nas posições correspondentes:");
    printf("\n");

    for (int i = 0; i < tamanho_v; i++)
    {
        printf("v[%d] = ", i);
        scanf("%d", &v[i]);
    }

    printf("\nNúmeros na ordem inversa: ");
    
    for (int j = tamanho_v - 1; j >= 0; j--)
        printf("\n%d", v[j]);
    
    printf("\n\n");
}