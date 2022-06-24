/*
    7.2) Leia uma cadeia de caracteres e imprima a cadeia invertida. 
    Não use strrev.
*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("EXERCÍCIO 7.2\n");

    char cadeia_caracteres[100] = "";

    printf("\nDigite uma cadeia de caracteres: ");
    gets(cadeia_caracteres);

    printf("\nCadeia de caracteres invertida: ");

    for (int i = strlen(cadeia_caracteres) - 1; i >= 0; i--)
        putchar(cadeia_caracteres[i]);
    
    printf("\n\n");
}