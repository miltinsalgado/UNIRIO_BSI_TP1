/*
    Parte 07 - Exercício 04
    Leia uma cadeia de caracteres e, em seguida, gere outra cadeia invertendo os caracteres da primeira
    (primeiro caracter vai para última posição, segundo para a penúltima, e assim por diante).
    Imprima as duas cadeias. 
    Não use strrev.
*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

int main ()
{
    setlocale(LC_ALL, "");
    printf("PARTE 07 - EXERCÍCIO 04\n");

    char cadeia_caracteres_1[100] = "", cadeia_caracteres_2[100] = "";

    printf("\nDigite uma cadeia de caracteres: ");
    gets(cadeia_caracteres_1);

    int j = 0;

    for (int i = strlen(cadeia_caracteres_1) - 1; i >= -1; i--)
        cadeia_caracteres_2[j++] = cadeia_caracteres_1[i];

        /*  Solução adicionando o caractere nulo depois do for
        for (int i = strlen(cadeia_caracteres_1) - 1; i >= 0; i--)
            cadeia_caracteres_2[j++] = cadeia_caracteres_1[i];

        cadeia_caracteres_2[j] = '\0';
    */

    printf("\nCadeia de caracteres original: %s", cadeia_caracteres_1);
    printf("\nCadeia de caracteres invertida: %s", cadeia_caracteres_2);

    printf("\n\n");
}