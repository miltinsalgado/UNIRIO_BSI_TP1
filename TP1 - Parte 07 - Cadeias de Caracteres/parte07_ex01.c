/*
    Parte 07 - Exerc�cio 01
    Leia uma cadeia de caracteres e troque os espa�os em branco por h�fen. 
    Imprima a nova cadeia.
*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("PARTE 07 - EXERC�CIO 01\n");

    char cadeia_caracteres[100] = "";

    printf("\nDigite uma cadeia de caracteres: ");
    gets(cadeia_caracteres);

    for (int i = 0; i < strlen(cadeia_caracteres); i++)
        if (cadeia_caracteres[i] == ' ')
            cadeia_caracteres[i] = '-';
    
    printf("\nCadeia de caracteres com espa�os em branco substitu�dos por h�fen: ");
    puts(cadeia_caracteres);
    
    printf("\n\n");
}