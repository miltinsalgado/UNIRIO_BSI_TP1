/*
    Parte 07 - Exercício 05
    Leia uma cadeia de caracteres e imprima quantas vogais, consoantes, dígitos e outros caracteres essa cadeia possui.
*/

#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main ()
{
    setlocale(LC_ALL, "");
    printf("PARTE 07 - EXERCÍCIO 05\n");

    char cadeia_caracteres[100] = "";

    printf("\nDigite uma cadeia de caracteres: ");
    gets(cadeia_caracteres);

    int cont_vogais = 0, cont_consoantes = 0, cont_digitos = 0, cont_outros_caracteres = 0;

    for (int i = 0; i < strlen(cadeia_caracteres); i++)
    {
        if (isalpha(cadeia_caracteres[i]))
        {
            if (toupper(cadeia_caracteres[i]) == 'A' || toupper(cadeia_caracteres[i]) == 'E' || toupper(cadeia_caracteres[i]) == 'I' || toupper(cadeia_caracteres[i]) == 'O' || toupper(cadeia_caracteres[i]) == 'U')
                cont_vogais++;

            else
                cont_consoantes++;
        }

        else if (isdigit(cadeia_caracteres[i]))
            cont_digitos++;

        else
            cont_outros_caracteres++;
    }

    printf("\nQuantidade de vogais: %d", cont_vogais);
    printf("\nQuantidade de consoantes: %d", cont_consoantes);
    printf("\nQuantidade de dígitos: %d", cont_digitos);
    printf("\nQuantidade de outros caracteres: %d", cont_outros_caracteres);

    printf("\n\n");
}