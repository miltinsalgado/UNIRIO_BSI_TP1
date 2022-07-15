/*
    Parte 05 - Exercício 11
    Leia um número inteiro n e imprima a soma dos dígitos que compõem esse número. 
    Dica: use o % para recuperar os dígitos do número.
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    printf("PARTE 05 - EXERCÍCIO 11\n");

    int n = 0, soma_digitos = 0;

    printf("\nDigite um número: ");
    scanf("%d", &n);
    
    for (int i = n; i > 0; i /= 10)
        soma_digitos += i % 10;

    printf("\nSomatório dos digitos do número %d: %d", n, soma_digitos);
    
    printf("\n\n");
}