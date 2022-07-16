/*
    Parte 08 - Exerc�cio 13
    Baseado na fun��o moldura, implementada anteriormente, crie a fun��o titulo, 
    que recebe uma cadeia de caracteres e imprime um t�tulo dentro de uma moldura. 
    A largura da moldura deve ser calculada de tal forma que acomode a cadeia de caracteres.
    Exemplo (ver slides para visualizar): titulo("Programacao C/C++")
    
    Programacao C/C++
*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

void titulo (char v[])
{
    setlocale(LC_ALL, "C");

    putchar(218);
    for (int i = 1; i <= strlen(v) + 2; i++)
        putchar(196);
    putchar(191);

    putchar('\n');
    putchar(179);
    putchar(' ');
    printf("%s", v);
    putchar(' ');
    putchar(179);

    putchar('\n');
    putchar(192);
    for (int i = 1; i <= strlen(v) + 2; i++)
        putchar(196);
    putchar(217);
}

int main()
{
    setlocale(LC_ALL, "");
    printf("PARTE 08 - EXERC�CIO 13\n");

    char titulo_moldura[100];

    printf("\nDigite o t�tulo da moldura: ");
    gets(titulo_moldura);

    titulo(titulo_moldura);
    
    printf("\n\n");
}