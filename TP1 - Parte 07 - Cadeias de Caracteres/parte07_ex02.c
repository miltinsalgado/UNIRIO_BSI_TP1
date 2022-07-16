/*
    Parte 07 - Exercício 02
    Leia uma cadeia de caracteres e imprima a cadeia invertida. 
    Não use strrev.
*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("PARTE 07 - EXERCÍCIO 02\n");

    char cadeia_caracteres[100] = "";

    printf("\nDigite uma cadeia de caracteres: ");
    gets(cadeia_caracteres);

    printf("\nCadeia de caracteres invertida: ");

    for (int i = strlen(cadeia_caracteres) - 1; i >= 0; i--)
        putchar(cadeia_caracteres[i]);
    
    printf("\n\n");
}