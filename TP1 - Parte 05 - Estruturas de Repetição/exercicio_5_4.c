/*
    5.4) Implemente em C/C++ o algoritmo de impressão do somatório dos números inteiros lidos do usuário. 
    A leitura dos números deve parar quando o usuário digitar zero.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("EXERCÍCIO 5.4\n");

    int n = -1, soma = 0;

    while (n != 0)
    {
        printf("\nDigite um número: ");
        scanf("%d", &n);
        soma = soma + n;
    }

    printf("\nSoma dos números: %d", soma);
    
    printf("\n\n");
}