/*
    6.4) Leia um n�mero n e crie um vetor v de inteiros de tamanho n. 
    Em seguida, leia os valores de v e, por fim, inverta os valores de v (primeiro para �ltimo, segundo para pen�ltimo, etc.).
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("EXERC�CIO 6.4\n");

    int n = 0;

    printf("\nDigite um n�mero inteiro: ");
    scanf("%d", &n);

    int v[n];

    printf("\nDigite os n�meros inteiros das posi��es correspondentes:");
    printf("\n");

    for (int i = 0; i < n; i++)
    {
        printf("v[%d] = ", i);
        scanf("%d", &v[i]);
    }

    int aux = 0;
    int k = n - 1;

    for (int j = 0; j < n / 2; j++, k--) // para colocar mais de uma express�o no for, basta separ�-las por v�rgula
    {
        aux = v[j];
        v[j] = v[n - j - 1];
        v[n - j - 1] = aux;
    }
    
    printf("\nValores do vetor invertido: ");
    for (int k = 0; k < n; k++)
        printf("\n%d", v[k]);
    
    printf("\n\n");
}