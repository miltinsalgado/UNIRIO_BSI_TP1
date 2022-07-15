/*
    Parte 05 - Exerc�cio 11
    Leia um n�mero inteiro n e imprima a soma dos d�gitos que comp�em esse n�mero. 
    Dica: use o % para recuperar os d�gitos do n�mero.
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    printf("PARTE 05 - EXERC�CIO 11\n");

    int n = 0, soma_digitos = 0;

    printf("\nDigite um n�mero: ");
    scanf("%d", &n);
    
    for (int i = n; i > 0; i /= 10)
        soma_digitos += i % 10;

    printf("\nSomat�rio dos digitos do n�mero %d: %d", n, soma_digitos);
    
    printf("\n\n");
}