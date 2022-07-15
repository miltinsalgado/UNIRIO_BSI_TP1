/*
    Parte 07 - Exerc�cio 06
    Leia duas cadeias de caracteres e diga se elas s�o iguais ou se a primeira vem antes ou depois da segunda em ordem alfab�tica.
*/

#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main ()
{
    setlocale(LC_ALL, "");
    printf("PARTE 07 - EXERC�CIO 06\n");

    char cadeia_caracteres_1[100] = "", cadeia_caracteres_2[100] = "";

    printf("\nDigite uma cadeia de caracteres: ");
    gets(cadeia_caracteres_1);

    printf("\nDigite outra cadeia de caracteres: ");
    gets(cadeia_caracteres_2);

    if (strcmp(cadeia_caracteres_1, cadeia_caracteres_2) == 0)
        printf("\nAs duas cadeias de caracteres s�o iguais (%s)", cadeia_caracteres_1);

    else if (strcmp(cadeia_caracteres_1, cadeia_caracteres_2) < 0)
        printf("\nA primeira cadeia de caracteres (%s) vem antes da segunda cadeia de caracteres (%s) em ordem alfab�tica", cadeia_caracteres_1, cadeia_caracteres_2);

    else if (strcmp(cadeia_caracteres_1, cadeia_caracteres_2) > 0)
        printf("\nA segunda cadeia de caracteres (%s) vem antes da primeira cadeia de caracteres (%s) em ordem alfab�tica", cadeia_caracteres_2, cadeia_caracteres_1);

    printf("\n\n");
}