/*
    Parte 06 - Exerc�cio 06
    Leia um n�mero inteiro tam e crie um vetor v de inteiros de tamanho tam. 
    Em seguida, leia os n�meros desse vetor.
    Por fim, leia um n�mero inteiro k e imprima as posi��es do vetor v onde existe um valor igual a k.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("PARTE 06 - EXERC�CIO 06\n");

    int tam = 0;

    printf("\nDigite um n�mero inteiro: ");
    scanf("%d", &tam);

    int v[tam];

    printf("\nDigite os n�meros inteiros nas posi��es correspondentes:");
    printf("\n");

    for (int i = 0; i < tam; i++)
    {
        printf("v[%d] = ", i);
        scanf("%d", &v[i]);
    }

    int k = 0;

    printf("\nDigite outro n�mero inteiro: ");
    scanf("%d", &k);

    printf("\nPosi��es do vetor com valor igual a %d: ", k);

    for (int j = 0; j < tam; j++)
        if (v[j] == k)
            printf("\nv[%d]", j);
    
    printf("\n\n");
}