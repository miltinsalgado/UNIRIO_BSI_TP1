/*
    7.3) Leia uma cadeia de caracteres e, em seguida, gere outra cadeia igual à primeira, mas sem os espaços em branco da primeira. 
    Imprima as duas cadeias.
*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("EXERCÍCIO 7.3\n");

    char cadeia_caracteres[100] = "", cadeia_caracteres_aux[100] = "";

    printf("\nDigite uma cadeia de caracteres: ");
    gets(cadeia_caracteres);
    
    int j = 0;

    for (int i = 0; i <= strlen(cadeia_caracteres); i++)
        if (cadeia_caracteres[i] != ' ')
            cadeia_caracteres_aux[j++] = cadeia_caracteres[i];

    /*  Solução adicionando o caractere nulo depois do for
        for (int i = 0; i < strlen(cadeia_caracteres); i++)
        if (cadeia_caracteres[i] != ' ')
            cadeia_caracteres_aux[j++] = cadeia_caracteres[i];
        
        cadeia_caracteres_aux[j] = '\0';
    */
    
    printf("\nCadeia de caracteres original: ");
    puts(cadeia_caracteres);

    printf("\nCadeia de caracteres sem os espaços em branco: ");
    puts(cadeia_caracteres_aux);
    
    printf("\n\n");
}