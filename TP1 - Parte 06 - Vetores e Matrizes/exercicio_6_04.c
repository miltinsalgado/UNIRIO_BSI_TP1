/*
    6.4) Leia um número n e crie um vetor v de inteiros de tamanho n. 
    Em seguida, leia os valores de v e, por fim, inverta os valores de v (primeiro para último, segundo para penúltimo, etc.).
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("EXERCÍCIO 6.4\n");

    int n = 0;

    printf("\nDigite um número inteiro: ");
    scanf("%d", &n);

    int v[n];

    for (int i = 0; i < n; i++)
    {
        printf("\nDigite o número inteiro do índice %d: ", i);
        scanf("%d", &v[i]);
    }

    // continuar buscando soluções mais fáceis
    
    printf("\nValores do vetor invertido: ");
    for (int k = 0; k < n; k++)
        printf("\n%d", v[k]);
    
    printf("\n\n");
}