/*
    Parte 06 - Exercício 06
    Leia um número inteiro tam e crie um vetor v de inteiros de tamanho tam. 
    Em seguida, leia os números desse vetor.
    Por fim, leia um número inteiro k e imprima as posições do vetor v onde existe um valor igual a k.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("PARTE 06 - EXERCÍCIO 06\n");

    int tam = 0;

    printf("\nDigite um número inteiro: ");
    scanf("%d", &tam);

    int v[tam];

    printf("\nDigite os números inteiros nas posições correspondentes:");
    printf("\n");

    for (int i = 0; i < tam; i++)
    {
        printf("v[%d] = ", i);
        scanf("%d", &v[i]);
    }

    int k = 0;

    printf("\nDigite outro número inteiro: ");
    scanf("%d", &k);

    printf("\nPosições do vetor com valor igual a %d: ", k);

    for (int j = 0; j < tam; j++)
        if (v[j] == k)
            printf("\nv[%d]", j);
    
    printf("\n\n");
}