/*
    6.2) Leia um vetor v com 10 n�meros inteiros. Em seguida, imprima o somat�rio dos n�meros desse vetor.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("EXERC�CIO 6.2\n");

    const int tamanho_v = 10;
    int v[tamanho_v], soma = 0;

    printf("\nDigite os n�meros inteiros nas posi��es correspondentes:");
    printf("\n");

    for (int i = 0; i < tamanho_v; i++)
    {
        printf("v[%d] = ", i);
        scanf("%d", &v[i]);
    }

    for (int j = 0; j < tamanho_v; j++)
        soma += v[j];
    
    printf("\nSomat�rio dos n�meros do vetor: %d", soma);
    
    printf("\n\n");
}