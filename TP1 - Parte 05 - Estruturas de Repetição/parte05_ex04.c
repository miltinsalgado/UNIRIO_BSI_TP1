/*
    Parte 05 - Exerc�cio 04
    Implemente em C/C++ o algoritmo de impress�o do somat�rio dos n�meros inteiros lidos do usu�rio. 
    A leitura dos n�meros deve parar quando o usu�rio digitar zero.
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    printf("PARTE 05 - EXERC�CIO 04\n");

    int n = -1, soma = 0;

    while (n != 0)
    {
        printf("\nDigite um n�mero: ");
        scanf("%d", &n);
        soma = soma + n;
    }

    printf("\nSoma dos n�meros: %d", soma);
    
    printf("\n\n");
}