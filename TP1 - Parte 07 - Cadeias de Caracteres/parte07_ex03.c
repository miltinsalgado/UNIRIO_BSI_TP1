/*
    Parte 07 - Exerc�cio 03
    Leia uma cadeia de caracteres e, em seguida, gere outra cadeia igual � primeira, mas sem os espa�os em branco da primeira. 
    Imprima as duas cadeias.
*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

int main ()
{
    setlocale(LC_ALL, "");
    printf("PARTE 07 - EXERC�CIO 03\n");

    char cadeia_caracteres[100] = "", cadeia_caracteres_aux[100] = "";

    printf("\nDigite uma cadeia de caracteres: ");
    gets(cadeia_caracteres);
    
    int j = 0;

    for (int i = 0; i <= strlen(cadeia_caracteres); i++)
        if (cadeia_caracteres[i] != ' ')
            cadeia_caracteres_aux[j++] = cadeia_caracteres[i];

    /*  Solu��o adicionando o caractere nulo depois do for
        for (int i = 0; i < strlen(cadeia_caracteres); i++)
        if (cadeia_caracteres[i] != ' ')
            cadeia_caracteres_aux[j++] = cadeia_caracteres[i];
        
        cadeia_caracteres_aux[j] = '\0';
    */
    
    printf("\nCadeia de caracteres original: %s", cadeia_caracteres);
    printf("\nCadeia de caracteres sem os espa�os em branco: %s", cadeia_caracteres_aux);
    
    printf("\n\n");
}