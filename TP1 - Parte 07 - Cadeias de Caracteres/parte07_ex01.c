/*
    Parte 07 - Exercício 01
    Leia uma cadeia de caracteres e troque os espaços em branco por hífen. 
    Imprima a nova cadeia.
*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("PARTE 07 - EXERCÍCIO 01\n");

    char cadeia_caracteres[100] = "";

    printf("\nDigite uma cadeia de caracteres: ");
    gets(cadeia_caracteres);

    for (int i = 0; i < strlen(cadeia_caracteres); i++)
        if (cadeia_caracteres[i] == ' ')
            cadeia_caracteres[i] = '-';
    
    printf("\nCadeia de caracteres com espaços em branco substituídos por hífen: ");
    puts(cadeia_caracteres);
    
    printf("\n\n");
}