/*
    Parte 07 - Exerc�cio 07
    Leia palavras at� o usu�rio digitar uma string vazia.
    Ao final imprima a maior palavra segundo a ordem alfab�tica e a maior palavra em quantidade de letras. 
    Considere letras min�sculas e mai�sculas como iguais.
*/

#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("PARTE 07 - EXERC�CIO 07\n");

    char palavra[100] = "", maior_palavra_ordem_alfabetica[100] = "", maior_palavra_quantidade_letras[100] = "";
    int cont = 0;

    do
    {
        printf("\nDigite uma palavra: ");
        gets(palavra);

        if (strcmpi(palavra, maior_palavra_ordem_alfabetica) >= 0)
            strcpy(maior_palavra_ordem_alfabetica, palavra);

        if (strlen(palavra) > strlen(maior_palavra_quantidade_letras))
            strcpy(maior_palavra_quantidade_letras, palavra);
        
    } while (strcmpi(palavra, "") != 0);

    printf("\nMaior palavra segundo a ordem alfab�tica: ");
    puts(maior_palavra_ordem_alfabetica);

    printf("\nMaior palavra em quantidade de letras: ");
    puts(maior_palavra_quantidade_letras);
    
    printf("\n\n");
}